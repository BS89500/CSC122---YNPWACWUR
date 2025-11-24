#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"
#include "../src/TriangleNumberCalculator.h"

TEST_CASE( "it returns Hello World" ) {
    REQUIRE( hello() == "Hello World!" );
}

TEST_CASE("Value") {
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.value(1) == 1);
    REQUIRE(calculator.value(2) == 3);
    REQUIRE(calculator.value(4) == 10);
}
TEST_CASE("Add") {
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.add(1,1) == 2);
    REQUIRE(calculator.add(2,3) == 9);
    REQUIRE(calculator.add(4,2) == 13);
}
TEST_CASE("Subtract") {
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.subtract(1,1) == 0);
    REQUIRE(calculator.subtract(2,3) == -3);
    REQUIRE(calculator.subtract(4,2) == 7);
}