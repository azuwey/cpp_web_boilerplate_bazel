cc_library(
    name = "file_manager",
    srcs = ["file_manager/file_manager.cpp"],
    hdrs = ["file_manager/file_manager.hpp"],
    visibility = ["//main:__pkg__", "//test:__pkg__"]
)

cc_library(
    name = "http_server",
    srcs = ["http_server/http_server.cpp"],
    hdrs = ["http_server/http_server.hpp"],
    visibility = ["//main:__pkg__", "//test:__pkg__"],
    deps = ["//lib:simple_http_server"]
)

cc_library(
    name = "database_manager",
    srcs = ["database_manager/database_manager.cpp"],
    hdrs = ["database_manager/database_manager.hpp", "database_manager/database_utils.hpp"],
    visibility = ["//main:__pkg__", "//test:__pkg__"],
    deps = ["//lib:sqlite3", ":file_manager", ":utilities"]
)

cc_library(
    name = "utilities",
    hdrs = ["utilities/string_join.hpp"],
    visibility = ["//main:__pkg__", "//test:__pkg__"]
)