#include <gtest/gtest.h>
#include <vector>
#include "../start.cpp"

// Test case for an empty vector
TEST(CountGreaterTest, HandlesEmptyVector) {
    std::vector<int> data = {};
    EXPECT_EQ(countGreater(data), 0);
}

// Test case for a vector with all elements less than the pivot
TEST(CountGreaterTest, HandlesAllElementsLessThanPivot) {
    std::vector<int> data = {1, 2, 3, 4, 5};
    int pivot = 6;
    EXPECT_EQ(countGreater(data, pivot), 0);
}

// Test case for a vector with all elements greater than the pivot
TEST(CountGreaterTest, HandlesAllElementsGreaterThanPivot) {
    std::vector<int> data = {12, 13, 14, 15, 16};
    int pivot = 10;
    EXPECT_EQ(countGreater(data, pivot), 5);
}

// Test case for a vector with some elements greater and some less than the pivot
TEST(CountGreaterTest, HandlesMixedElements) {
    std::vector<int> data = {5, 10, 15, 20, 25};
    int pivot = 15;
    EXPECT_EQ(countGreater(data, pivot), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

