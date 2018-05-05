cc_library(
    name = "lthread",
    hdrs = ["lthread/listener.h", "lthread/lthread.h", "lthread/proxy.h",
        "lthread/shell.h", "lthread/socket.h", "lthread/ssl.h"],
    visibility = ["//extra:__pkg__"]
)

cc_library(
    name = "simple_http_server",
    hdrs = glob(['simple_http_server/*.hpp']),
    visibility = ["//extra:__pkg__", "//controller:__pkg__"],
    deps = ["@com_github_boost_asio//:asio"]
)

cc_library(
    name = "sqlite3",
    srcs = ["sqlite3/sqlite3.c", "sqlite3/shell.c"],
    hdrs = ["sqlite3/sqlite3.h", "sqlite3/sqlite3ext.h"],
    visibility = ["//extra:__pkg__"],
    linkopts = ["-lpthread", "-ldl"]
)