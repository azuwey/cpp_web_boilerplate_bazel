pipeline {
  agent any
  stages {
    stage('Create sandbox environment') {
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
          chmod +x ${BAZEL}'''
      }
    }
    stage('Run database test') {
      parallel {
        stage('Run database test') {
          steps {
            sh '${BAZEL} test //test:database-test --test_verbose_timeout_warnings'
          }
        }
        stage('Build') {
          steps {
            sh '${BAZEL} build --genrule_strategy=standalone --spawn_strategy=standalone //${BASE_PACKAGE}:${SUB_PACKAGE}'
          }
        }
      }
    }
  }
}