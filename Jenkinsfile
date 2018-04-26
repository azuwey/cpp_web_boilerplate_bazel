pipeline {
  agent any
  stages {
    stage('Build') {
      environment {
        BAZEL_VERSION = '0.12.0'
        INSTALLER_PLATFORM = 'linux-x86_64'
      }
      steps {
        sh '''set -e

          # Fetch the Bazel installer
          URL=https://github.com/bazelbuild/bazel/releases/download/${BAZEL_VERSION}/bazel-${BAZEL_VERSION}-installer-${INSTALLER_PLATFORM}.sh
          export BAZEL_INSTALLER=${PWD}/install.sh
          curl -L -o ${BAZEL_INSTALLER} ${URL}
          BASE="${PWD}"

          # Install bazel inside ${BASE}
          bash "${BAZEL_INSTALLER}" \\\\
            --base="${BASE}" \\\\
            --bazelrc="${BASE}/bin/bazel.bazelrc" \\\\
            --bin="${BASE}/binary"

          # Run the build
          BAZEL="${BASE}/binary/bazel --bazelrc=${BASE}/bin/bazel.bazelrc"'''
        sh 'bazel build //main:main'
      }
    }
  }
}