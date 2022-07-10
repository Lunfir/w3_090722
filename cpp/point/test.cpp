// https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top
// g++ test.cpp -o test.exe
// ./test.exe Copy
// ./test.exe [point]

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "point.cpp"

TEST_CASE("Const", "[point]")
{
    Point pointA(12, 10);
    REQUIRE(pointA.getX() == 12);
    REQUIRE(pointA.getY() == 10);

    Point pointB;
    REQUIRE(pointB.getX() == 0);
    REQUIRE(pointB.getY() == 0);
}

TEST_CASE("Copy", "[point]")
{
    Point pointA(12, 10);
    Point pointB = pointA;

    REQUIRE(pointB.getX() == 12);
    REQUIRE(pointB.getY() == 10);
}
