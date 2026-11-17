
#include "DArray.h"

// Constructor
DArray::DArray()
{
    capacity = 2;
    arr = new int[capacity];
}

// Push Back
void DArray::push_back(int value)
{
    if (size == capacity)
    {
        capacity *= 2;

        int* temp = new int[capacity];

        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }

        delete[] arr;
        arr = temp;
    }

    arr[size] = value;
    size++;
}

// Assignment Operator
DArray& DArray::operator=(const DArray& other)
{
    if (this != &other)
    {
        delete[] arr;

        size = other.size;
        capacity = other.capacity;

        arr = new int[capacity];

        for (int i = 0; i < size; i++)
        {
            arr[i] = other.arr[i];
        }
    }

    return *this;
}

// Output Operator
ostream& operator<<(ostream& out, const DArray& obj)
{
    for (int i = 0; i < obj.size; i++)
    {
        out << obj.arr[i] << " ";
    }

    return out;
}

// Destructor
DArray::~DArray()
{
    delete[] arr;
}
