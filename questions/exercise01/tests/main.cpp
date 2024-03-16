#include <gtest/gtest.h>

extern int countGreater(const std::vector<int>& data, int pivot);

TEST(CountGreaterTest, SomeElementsGreater) {
    std::vector<int> data = {5, 11, 15, 2, 10};
    int pivot = 10;
    EXPECT_EQ(2, countGreater(data, pivot));
}

TEST(CountGreaterTest, NoElementGreater) {
    std::vector<int> data = {1, 2, 3, 4, 5};
    int pivot = 10;
    EXPECT_EQ(0, countGreater(data, pivot));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
