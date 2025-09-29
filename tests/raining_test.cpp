#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/raining.hpp"

TEST_CASE( "Test Raining Strings" ) {
    REQUIRE("Test" == "Test");
}
