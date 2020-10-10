#include "Item.h"
#include<iostream>
#include <gtest/gtest.h>
TEST(Item,getName) {
    Item I1;
    //IPAddress I2(128);
    EXPECT_EQ(0,I1.getName());
   //XPECT_EQ(true,I1.isLoopBack(127,000,000,001));
    //EXPECT_EQ("Class B",I2.getIPClass(128));
    //EXPECT_EQ(0,b1.getBreadth());
    //EXPECT_EQ(0,b1.getHeight());

}
