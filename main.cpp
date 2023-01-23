#include <iostream>
#include "vector.h"
using namespace std;

int main(){
    MyVector<int> myvector;
    cout << myvector.size() << endl; // 0
    cout << myvector.capacity() << endl; // 5

    myvector.push_back(0);
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);

    cout << myvector.size() << endl; // 4

    myvector.pop_back();
    cout << myvector.size() << endl; // 3

    myvector.pop_back(2);
    cout << myvector.size() << endl; // 1

    cout << boolalpha << myvector.empty() << endl; // false

    myvector.clear();
    cout << boolalpha << myvector.empty() << endl; // true

    cout << myvector.size() << endl; // 0

    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);
    myvector.push_back(6);

    cout << myvector.size() << endl; //6
    cout << myvector.capacity() << endl; //10

    myvector[7] = 7;
    cout << myvector[7] << endl;

    return 0; 
}