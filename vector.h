#pragma once

template <class T>
class MyVector {
public:
    MyVector(); //constructor
    int size();
    int capacity();
    bool empty();
    void push_back(T item);
    void pop_back(int n);
    void pop_back();
    void clear();
    T &operator[] (int i); //[] for access and assignment (assuming that given the expression a[n] that n is in range)
private:
    T *arr;
    int current_size;
    int max_capacity;
};

#include "vector.cxx"