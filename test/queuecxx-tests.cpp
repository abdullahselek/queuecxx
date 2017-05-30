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
        queue = new Queue(10);
    }

    virtual void TearDown() {
        // Code here will be called immediately after each test (right
        // before the destructor).
        delete queue;
    }

public:
    QueueTests() {
        this->queue = new Queue(10);
    }

    Queue *queue;
};

TEST_F(QueueTests, Initiate) {
    EXPECT_TRUE(queue != nullptr);
    EXPECT_EQ(queue->size(), 0);
}

TEST_F(QueueTests, IsEmpty) {
    EXPECT_TRUE(queue->isEmpty());
}

TEST_F(QueueTests, Size) {
    EXPECT_EQ(queue->size(), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
