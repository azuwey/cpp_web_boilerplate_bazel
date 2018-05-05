cc_library(
    name = "controller_all",
    visibility = ["//main:__pkg__", "//extra:__pkg__"],
    deps = [":default_get_controller", ":index_get_controller"]
)

cc_library(
    name = "default_get_controller",
    srcs = ["default_get_controller/default_get_controller.cpp"],
    hdrs = ["default_get_controller/default_get_controller.hpp"],
    visibility = ["//main:__pkg__", "//extra:__pkg__"],
    deps = ["//lib:simple_http_server"]
)

cc_library(
    name = "index_get_controller",
    srcs = ["index_get_controller/index_get_controller.cpp"],
    hdrs = ["index_get_controller/index_get_controller.hpp"],
    visibility = ["//main:__pkg__", "//extra:__pkg__"],
    deps = ["//extra:utilities", "//lib:simple_http_server", "@com_github_nlohmann_json//:json", "@com_github_azuwey_inja//:inja"]
)