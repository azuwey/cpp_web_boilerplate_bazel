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
          URL=https://github.com/bazelbuild/bazel/releases/download/${BAZEL_VERSION}/bazel-${BAZEL_VERSION}-installer-${INSTALLER_PLATFORM}.sh
          mkdir ${PWD}/bazel-installer
          export BAZEL_INSTALLER=${PWD}/bazel-installer/install.sh
          curl -L -o ${BAZEL_INSTALLER} ${URL}
          BASE="${PWD}/bazel-installer"
          bash "${BAZEL_INSTALLER}" \
            --base="${BASE}" \
            --bazelrc="${BASE}/bin/bazel.bazelrc" \
            --bin="${BASE}/binary"
          BAZEL="${BASE}/binary/bazel --bazelrc=${BASE}/bin/bazel.bazelrc --batch"'''
        sh 'bazel build //main:main'
      }
    }
  }
}