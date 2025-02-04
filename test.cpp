#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>

std::vector<bool> EvenMask(std::vector<int> numbers_vect);

std::vector<bool> EvenMask(std::vector<int> numbers_vect);
std::vector<std::string> Split(std::string whole, std::string separator);
std::string RemoveAllSubstrings(std::string s1, std::string s2);

TEST_CASE("EvenMask correctly identifies even and odd numbers", "[EvenMask]") {
    SECTION("Test with a mixed vector") {
        std::vector<int> input = {0, 1, 2, 3, 4, 5};
        std::vector<bool> expected = {true, false, true, false, true, false};
        REQUIRE(EvenMask(input) == expected);
    }

    SECTION("Test with all even numbers") {
        std::vector<int> input = {2, 4, 6, 8};
        std::vector<bool> expected = {true, true, true, true};
        REQUIRE(EvenMask(input) == expected); 
    }

    SECTION("Test with all odd numbers") {
        std::vector<int> input = {1, 3, 5, 7};
        std::vector<bool> expected = {false, false, false, false};
        REQUIRE(EvenMask(input) == expected);
    }
}

TEST_CASE("Split correctly splits a string by a separator", "[Split]") {
    SECTION("Test with comma separator") {
        std::string input = "apple,banana,orange";
        std::vector<std::string> expected = {"apple", "banana", "orange"};
        REQUIRE(Split(input, ",") == expected);
    }
}

TEST_CASE("RemoveAllSubstrings removes all occurrences of a substring", "[RemoveAllSubstrings]") {
    SECTION("Test with one occurrence of the substring") {
        std::string input = "Hello world!";
        std::string expected = "Hello !";
        REQUIRE(RemoveAllSubstrings(input, "world") == expected);
    }

    SECTION("Test with multiple occurrences of the substring") {
        std::string input = "Hello world, world is great!";
        std::string expected = "Hello ,  is great!";
        REQUIRE(RemoveAllSubstrings(input, "world") == expected);
    }

}
