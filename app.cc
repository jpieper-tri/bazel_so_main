#include "external/bazel_so_external/shared_lib.h"

#include "boost/test/auto_unit_test.hpp"

BOOST_AUTO_TEST_CASE(BasicTest) {
  BOOST_CHECK_EQUAL(simple_stuff(10), 31);
}
