FROM ubuntu:16.04

# Setup every necessary software
RUN apt-get update && apt-get install software-properties-common -y
RUN add-apt-repository ppa:jonathonf/gcc-7.1
RUN apt-get update && apt-get install openjdk-8-jdk curl gcc-7 g++-7 -y
RUN echo "deb [arch=amd64] http://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list
RUN curl https://bazel.build/bazel-release.pub.gpg | apt-key add -
RUN apt-get update && apt-get install bazel -y

# Set base folder and copy the current folder contents to the container
ENV BASE_FOLDER=/usr/src/bazel_app
COPY . ${BASE_FOLDER}
WORKDIR ${BASE_FOLDER}

# Sandbox bazel
RUN bazel clean --expunge

# Run all tests
RUN bazel test $(bazel query //...)

# Build our application
RUN bazel build //main:main

# Create a symlink for the template folder
RUN ln -s ${BASE_FOLDER}/template ${BASE_FOLDER}/bazel-bin/main/template

# Set our entry point
CMD ["./bazel-bin/main/main"]