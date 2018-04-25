# C++ web boilerplate with bazel
C++ HTTP SQLite3 Boilerplate with Bazel build management

### 1. Install Bazel
First of all, you have to install [Bazel](https://www.bazel.build/)

### 2. Build
```sh
$ bazel build //main:main
```

### 3. Generate graph
```sh
$ bazel query --nohost_deps --noimplicit_deps 'deps(//main:main)' --output graph > http-server.graph
```
