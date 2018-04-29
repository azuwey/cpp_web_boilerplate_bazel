package(default_visibility = ["//visibility:public"])

licenses(["notice"])

cc_library(
  name = "googletest",
  srcs = [
    "googletest/src/gtest-all.cc",
    "googlemock/src/gmock-all.cc",
  ],
  hdrs = glob([
    "**/*.h",
    "googletest/src/*.cc",
    "googlemock/src/*.cc",
  ]),
  includes = [
    "googlemock",
    "googletest",
    "googletest/include",
    "googlemock/include",
  ],
  linkopts = ["-pthread"]
)

cc_library(
    name = "gtest_main",
    srcs = ["googlemock/src/gmock_main.cc"],
    linkopts = ["-pthread"],
    deps = [":googletest"]
  )