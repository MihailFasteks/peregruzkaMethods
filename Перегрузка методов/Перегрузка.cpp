//
//  Перегрузка.cpp
//  Перегрузка методов
//
//  Created by Michalis on 01.10.2023.
//

#include "Перегрузка.hpp"
DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
    cout << "Construct by 1 param\n";
    size = S;
    ptr = new int[S];
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
    cout << "Copy construct\n";
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
}
DynamicArray::~DynamicArray()
{
    cout << "Destruct\n";
    if (ptr != 0)
    {
        delete[] ptr;
    }
}
void DynamicArray::Input()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
    }
}
void DynamicArray::Output()
{
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i] <<"\t";
    }
    cout << "\n---------------------------------\n";
}
int * DynamicArray::GetPointer()
{
    return ptr;
}
int DynamicArray::GetSize()
{
    return size;
}
DynamicArray DynamicArray::operator+(int a) {
    return DynamicArray(size + a);
}

DynamicArray DynamicArray::operator-(int a) {
    if (size < a) {
        cout << "ERROR! You have: " << size << " size array" << endl << endl;
        return *this;
    }

    size = size - a;
    int* newArray = new int[size];

    for (int i = 0; i < size; i++)
        newArray[i] = ptr[i];

    return* this;
}

DynamicArray DynamicArray::operator*(int a) {
    int* newArray = new int[this->size];

    for (int i = 0; i < this->size; i++)
        newArray[i] = ptr[i] * a;

    delete[] ptr;

    ptr = newArray;

    return *this;
}

DynamicArray DynamicArray::operator-(DynamicArray a) {
    for (int i = 0; i < size; i++)
        ptr[i] -= a.ptr[i];

    return *this;
}

DynamicArray DynamicArray::operator+(DynamicArray a) {
    for (int i = 0; i < size; i++)
        ptr[i] += a.ptr[i];

    return *this;
}

DynamicArray& DynamicArray::operator++() {
    size++;
    int* newArray = new int[size] {0};

    for (int i = 0; i < size; i++) {
        newArray[i] = ptr[i];

        if (i == size - 1)
            newArray[i] = 0;
    }

    ptr = newArray;
        
    return *this;
}

DynamicArray& DynamicArray::operator--() {
    size--;
    int* newArray = new int[size];

    for (int i = 0; i < size; i++)
        newArray[i] = ptr[i];

    return *this;
}
