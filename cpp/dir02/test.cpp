#include "header.hpp"
#include <gtest/gtest.h>
TEST(InputSetData, aIsGt10)
{
	Input obj;
	obj.setData(20, 10);
	EXPECT_EQ(100, obj.showData());
}
TEST(InputSetData, aIsLt10)
{
	Input obj;
	obj.setData(5, 10);
	EXPECT_EQ(15, obj.showData());
}
TEST(InputSetData, aIsGt13)
{
	Input obj;
	obj.setData(13,7);
	EXPECT_EQ(65, obj.showData());
}
int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
