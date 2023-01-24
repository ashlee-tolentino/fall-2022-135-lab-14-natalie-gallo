#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "vector.h"
using namespace std;

MyVector<int> test;

TEST_CASE("size and capacity test"){
    CHECK(test.size() == 0);
    CHECK(test.capacity() == 5);
}

TEST_CASE("pushing back"){
    test.push_back(0);
    test.push_back(1);
    CHECK(test[0] == 0);
    CHECK(test[1] == 1);
}

TEST_CASE("allocation (passing original capacity) test"){
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.push_back(5);
    CHECK(test.size() == 6);
    CHECK(test.capacity() == 10);
}

TEST_CASE("pop back test"){
    test.pop_back(2);
    CHECK(test.size() == 4);
    test.pop_back();
    CHECK(test.size() == 3);
}

TEST_CASE("clear/empty test"){
    test.clear();
    CHECK(test.empty() == true);
}

TEST_CASE("Operation Overload Test"){
    test[1] = 1;
    CHECK(test[1] == 1);
}