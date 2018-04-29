pipeline {
  agent any
  stages {
    stage('Build') {
      environment {
        BAZEL_VERSION = '0.12.0'
        INSTALLER_PLATFORM = 'linux-x86_64'
        BASE_PACKAGE = 'main'
        SUB_PACKAGE = 'main'
      }
      steps {
        sh '''set -e
          URL=https://github.com/bazelbuild/bazel/releases/download/${BAZEL_VERSION}/bazel-${BAZEL_VERSION}-${INSTALLER_PLATFORM}
          export BAZEL=${PWD}/bazel.run
          curl -L -o ${BAZEL} ${URL}
          chmod +x ${BAZEL}
          ${BAZEL} build --genrule_strategy=standalone --spawn_strategy=standalone //${BASE_PACKAGE}:${SUB_PACKAGE}'''
      }
    }
  }
}