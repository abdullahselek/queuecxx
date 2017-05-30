//
// Created by Selek, Abdullah on 29.05.17.
//

#ifndef QUEUECXX_QUEUECXX_H
#define QUEUECXX_QUEUECXX_H

template <typename T>
struct Item {
    T data;

    Item() {

    }

    Item<T>(T data) {
        this->data = data;
    }
};

template <typename T>
class Queue {

public:
    Queue(int maxSize);
    ~Queue();
    Item<T> * getAllItems();
    bool isEmpty();
    bool isFull();
    int size();
    void insert(Item<T> data);
    Item<T> removeData(Item<T> data);

private:
    Item<T> * items = nullptr;
    int maxSize = 0;
    int front = 0;
    int rear = -1;
    int itemCount = 0;

};

template <typename T>
Queue<T>::Queue(int maxSize) {
    this->items = new Item<T>[maxSize];
    this->maxSize = maxSize;
}

template <typename T>
Queue<T>::~Queue() {
    delete this->items;
}

template <typename T>
Item<T> * Queue<T>::getAllItems() {
    return this->items;
}

template <typename T>
bool Queue<T>::isEmpty() {
    return this->itemCount == 0;
};

template <typename T>
bool Queue<T>::isFull() {
    return this->itemCount == maxSize;
}

template <typename T>
int Queue<T>::size() {
    return this->itemCount;
};

template <typename T>
void Queue<T>::insert(Item<T> data) {
    if (isFull()) {
        return;
    }
    if (this->rear == this->maxSize - 1) {
        this->rear = -1;
    }
    this->items[rear++] = data;
    this->itemCount++;
}

template <typename T>
Item<T> Queue<T>::removeData(Item<T> data) {
    if (!isEmpty()) {
        Item<T> data = this->items[front++];
        if (front == this->maxSize) {
            front = 0;
        }
        itemCount--;
        return data;
    }
    return Item<T>{};
}

#endif //QUEUECXX_QUEUECXX_H
