cc_library(
    name = "app",
    deps = [ "@bazel_so_external//:shared_lib" ],
    srcs = ["app.cc"],
)

cc_test(
    name = "app_test",
    defines = ["BOOST_TEST_DYN_LINK"],
    linkopts = ['-lboost_unit_test_framework'],
    deps = [
        ":app",
        ],
    srcs = [
        "test_main.cc",
        "@bazel_so_external//:shared_lib.so",
        ],
)
