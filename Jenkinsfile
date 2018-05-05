pipeline {
  agent any
  stages {
    stage('Create sandbox environment') {
      environment {
        BAZEL_VERSION = '0.13.0'
        PLATFORM = 'linux-x86_64'
      }
      steps {
        sh '''set -e
          URL=https://github.com/bazelbuild/bazel/releases/download/${BAZEL_VERSION}/bazel-${BAZEL_VERSION}-${PLATFORM}
          export BAZEL=${PWD}/bazel.run
          curl -L -o ${BAZEL} ${URL}
          chmod +x ${BAZEL}'''
      }
    }
    stage('Run tests') {
      steps {
        sh '${PWD}/bazel.run test $(${PWD}/bazel.run query //...) --test_verbose_timeout_warnings'
      }
    }
    stage('Build') {
      environment {
        BASE_PACKAGE = 'main'
        SUB_PACKAGE = 'main'
      }
      steps {
        sh '${PWD}/bazel.run build --genrule_strategy=standalone --spawn_strategy=standalone //${BASE_PACKAGE}:${SUB_PACKAGE}'
      }
    }
    stage('Clean') {
      steps {
        sh '${PWD}/bazel.run clean'
      }
    }
  }
}