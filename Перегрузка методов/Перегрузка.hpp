#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
    int * ptr; // ÛÍ‡Á‡ÚÂÎ¸ Ì‡ ‰ËÌ‡Ï. Ï‡ÒÒË‚
    int size;  // ‡ÁÏÂ Ï‡ÒÒË‚‡
public:
    DynamicArray();
    DynamicArray(int);
    DynamicArray(const DynamicArray&); // copy constructor
    ~DynamicArray();
    void Input();// rand
    void Output();// ‚˚‚Ó‰ Ì‡ ÍÓÌÒÓÎ¸
    int * GetPointer();
    int GetSize();
    DynamicArray operator+(DynamicArray b);
    DynamicArray operator+(int s);
    DynamicArray operator-(DynamicArray b);
    DynamicArray operator-(int b);
    DynamicArray operator*(int b);
    DynamicArray& operator++();
    DynamicArray& operator--();


};

