#include "priority_queue.h"
#include <gtest/gtest.h>

TEST(PriorityQueueTest,Trivial) {
	TemplatePriorityQueue<int> expTarget;

	//Test 1 - Initalize
	ASSERT_TRUE(expTarget.empty()); // empty test

	//Test 2 - Push Datas and Top size
	expTarget.push(1);
	expTarget.push(4);
	expTarget.push(2);
	expTarget.push(3);
	expTarget.push(8);
	expTarget.push(5);
	
	ASSERT_EQ(expTarget.size(),6); // Pushed 6 elements
	ASSERT_EQ(expTarget.top(),8);  // The highest pushed value is 8
	ASSERT_FALSE(expTarget.empty()); // it must not empty

	//Test 3 - pop test
	expTarget.pop();
	expTarget.pop();
	expTarget.pop();
	
	ASSERT_EQ(expTarget.top(),3);
	ASSERT_EQ(expTarget.size(),3);
	ASSERT_FALSE(expTarget.empty());

	expTarget.pop();
	expTarget.pop();
	expTarget.pop();
	
	ASSERT_TRUE(expTarget.empty());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
