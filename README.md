# C++ web boilerplate with bazel
C++ HTTP SQLite3 Boilerplate with Bazel build management

## Without docker

### 1. Install Bazel
First of all, you have to install [Bazel](https://www.bazel.build/)

### 2. Run tests
```sh
$ bazel test $(bazel query //...)
```

### 2. Build
```sh
$ bazel build //main:main
```

### 3. Generate graph
```sh
$ bazel query --nohost_deps --noimplicit_deps 'deps(//main:main)' --output graph > http-server.graph
```

### 4. Access the web page

Now, you can open the web page in this url [http://0.0.0.0:34263/](http://0.0.0.0:34263/)

## With docker

### 1. Build container with tests
```sh
# docker build -t cpp_bazel_web_boilerplate_container .
```

### 2. Run builded application
```sh
# docker run -it --rm --name cpp_bazel_web_boilerplate -p 8081:34263 -d cpp_bazel_web_boilerplate_container
```

### 3. Access the web page

Now, you can open the web page in this url [http://0.0.0.0:8081/](http://0.0.0.0:8081/)