#include <iostream>
#include "vector.h"
using namespace std;

template <class T>
MyVector<T>::MyVector(){
    arr = new T[5];
    current_size = 0;
    max_capacity = 5;
}

template <class T>
int MyVector<T>::size(){
    return current_size;
}

template <class T>
int MyVector<T>::capacity(){
    return max_capacity;
}

template <class T>
bool MyVector<T>::empty(){
    if (current_size == 0){
        return true;
    } else {
        return false;
    }
}

template <class T>
void MyVector<T>::push_back(T item){
    if (current_size < max_capacity){
        arr[current_size] = item;
        current_size++;
    } else {
        //reallocate
        T *arr2 = new T[max_capacity * 2];
        for (int i=0; i<current_size; i++){
            arr2[i] = arr[i];
        }
        arr2[current_size] = item;
        current_size++;
        max_capacity = max_capacity*2;
        delete[] arr;
        arr = arr2;
        delete[] arr2;
        arr2 = nullptr;
    }
}

template <class T>
void MyVector<T>::pop_back(int n){
    for (int i=current_size; i>current_size - n; i--){
        arr[i - 1] = 0;
    }
    current_size = current_size - n;
}

template <class T>
void MyVector<T>::pop_back(){
    arr[current_size - 1] = 0;
    current_size = current_size - 1;
}

template <class T>
void MyVector<T>::clear(){
    arr = new T[5];
    current_size = 0;
    max_capacity = 5;
}

template <class T>
T &MyVector<T>::operator[] (int i){
    return arr[i];
}
