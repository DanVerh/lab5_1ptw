#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Edit.cpp"
#include "Edit.hpp"

TEST_CASE( "Arguments initialized") {
    char a = '1';
    REQUIRE( NumberCheck(a) == false);
}
