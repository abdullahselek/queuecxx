//
// Created by Selek, Abdullah on 29.05.17.
//

#include "gtest/gtest.h"
#include "../include/queuecxx.h"

class QueueTests : public ::testing::Test {

protected:
    virtual ~QueueTests() {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() {
        // Code here will be called immediately after the constructor (right
        // before each test).
        queue = new Queue(3);
    }

    virtual void TearDown() {
        // Code here will be called immediately after each test (right
        // before the destructor).
        delete queue;
    }

public:
    Queue *queue;
};

TEST_F(QueueTests, Initiate) {
    EXPECT_TRUE(queue != nullptr);
    EXPECT_EQ(queue->size(), 0);
}

TEST_F(QueueTests, IsEmpty) {
    EXPECT_TRUE(queue->isEmpty());
    queue->insert(1);
    EXPECT_FALSE(queue->isEmpty());
}

TEST_F(QueueTests, IsFull) {
    EXPECT_FALSE(queue->isFull());
    queue->insert(1);
    queue->insert(2);
    queue->insert(3);
    EXPECT_TRUE(queue->isFull());
}

TEST_F(QueueTests, Size) {
    EXPECT_EQ(queue->size(), 0);
}

TEST_F(QueueTests, InsertData) {
    queue->insert(1);
    EXPECT_FALSE(queue->isEmpty());
}

TEST_F(QueueTests, RemoveData) {
    queue->insert(1);
    queue->insert(2);
    queue->insert(3);
    EXPECT_EQ(queue->size(), 3);
    int data = queue->removeData(2);
    EXPECT_EQ(data, 2);
    EXPECT_EQ(queue->size(), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
