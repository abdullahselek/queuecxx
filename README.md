# queuecxx

[![Build Status](https://travis-ci.org/abdullahselek/queuecxx.svg?branch=master)](https://travis-ci.org/abdullahselek/queuecxx)

Generic Queue implementation with C++ as a library.

## Building Repository

To build the repository you need CMake. You can download from [here](https://cmake.org/download/).
You can create a shortcut ```cmake``` command for macOS as below

```
sudo mkdir -p /usr/local/bin
sudo /Applications/CMake.app/Contents/bin/cmake-gui --install=/usr/local/bin
```

After cloning repository to your own local machine go to project root folder and run

```
cmake .
```

and then

```
cmake --build .
```

to run unit tests for UNIX machines

```
cd test
./tests --gtest_color=yes
```

and for Windows machines

```
cd test/Debug/
tests.exe --gtest_color=yes
```

## Sample Usage

Initiate queue object with int type as below

```
Queue<int> queue{3};
```

Insert item

```
queue.insert(1);
```

Checking if queue is empty

```
bool isEmpty = queue.isEmpty();
```

Checking if queue is full

```
bool isFull = queue.isFull();
```

Getting queue size

```
int size = queue.size();
```

Remove item from queue

```
int removedItem = queue.removeData(1);
```
