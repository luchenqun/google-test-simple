int add(int a, int b)
{
    return a+b;
}

TEST(add, case_add)
{
    EXPECT_EQ(14, add(4, 10));
    EXPECT_EQ(48, add(30, 18));
}