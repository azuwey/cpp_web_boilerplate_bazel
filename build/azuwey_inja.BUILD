package(default_visibility = ["//visibility:public"])

licenses(["notice"])

cc_library(
  name = "inja",
  includes = [
    "src/",
  ],
  hdrs = glob([
    "src/**/*.hpp",
  ]),
  deps = [
    "@com_github_nlohmann_json//:json",
  ]
)