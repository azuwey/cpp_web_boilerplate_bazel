cc_test(
    name = "database-test",
    srcs = ["database_manager_test.cpp"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@com_github_google_googletest//:gtest_main",
        "//extra:database_manager",
    ],
    size = "small",
    timeout = "short"
)