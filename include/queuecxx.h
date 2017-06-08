//
// Created by Selek, Abdullah on 29.05.17.
//

#ifndef QUEUECXX_QUEUECXX_H
#define QUEUECXX_QUEUECXX_H

template <typename T>
class Queue {

public:
    inline Queue();
    inline Queue(int maxSize);
    inline ~Queue();
    inline T * getAllItems();
    inline bool isEmpty();
    inline bool isFull();
    inline int size();
    inline void insert(T data);
    inline T removeData(T data);

private:
    T * items = nullptr;
    int maxSize;
    int front;
    int rear;
    int itemCount;

};

template <typename T>
inline Queue<T>::Queue() {

}

template <typename T>
inline Queue<T>::Queue(int maxSize) {
    this->items = new T[maxSize];
    this->maxSize = maxSize;
    this->front = 0;
    this->rear = -1;
    this->itemCount = 0;
}

template <typename T>
inline Queue<T>::~Queue() {
    delete this->items;
}

template <typename T>
inline T * Queue<T>::getAllItems() {
    return this->items;
}

template <typename T>
inline bool Queue<T>::isEmpty() {
    return this->itemCount == 0;
};

template <typename T>
inline bool Queue<T>::isFull() {
    return this->itemCount == maxSize;
}

template <typename T>
inline int Queue<T>::size() {
    return this->itemCount;
};

template <typename T>
inline void Queue<T>::insert(T data) {
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
inline T Queue<T>::removeData(T data) {
    if (!isEmpty()) {
        T data = this->items[front++];
        if (front == this->maxSize) {
            front = 0;
        }
        itemCount--;
        return data;
    }
    return T{};
}

#endif //QUEUECXX_QUEUECXX_H
