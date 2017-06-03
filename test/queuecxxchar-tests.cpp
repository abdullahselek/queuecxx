//
// Created by Selek, Abdullah on 03.06.17.
//

#include "gtest/gtest.h"
#include "../include/queuecxx.h"

class QueueCharTests : public ::testing::Test {

protected:
    virtual ~QueueCharTests() {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    virtual void TearDown() {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

public:
    Queue<char> queue{3};
};

TEST_F(QueueCharTests, Initiate) {
    EXPECT_EQ(queue.size(), 0);
}

TEST_F(QueueCharTests, IsEmpty) {
    EXPECT_TRUE(queue.isEmpty());
    queue.insert('a');
    EXPECT_FALSE(queue.isEmpty());
}

TEST_F(QueueCharTests, IsFull) {
    EXPECT_FALSE(queue.isFull());
    queue.insert('a');
    queue.insert('b');
    queue.insert('c');
    EXPECT_TRUE(queue.isFull());
}

TEST_F(QueueCharTests, Size) {
    EXPECT_EQ(queue.size(), 0);
}

TEST_F(QueueCharTests, InsertData) {
    queue.insert('a');
    EXPECT_FALSE(queue.isEmpty());
}

TEST_F(QueueCharTests, RemoveData) {
    char item = 'b';
    queue.insert('a');
    queue.insert(item);
    queue.insert('c');
    EXPECT_EQ(queue.size(), 3);
    char removedItem = queue.removeData(item);
    EXPECT_EQ(removedItem, item);
    EXPECT_EQ(queue.size(), 2);
}
