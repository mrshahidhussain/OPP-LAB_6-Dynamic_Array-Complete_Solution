
#include "DArray2.h"

// Constructor
DArray::DArray()
{
    m_capacity = 2;
    arr = new int[m_capacity];
}

// Push Back
void DArray::push_back(int value)
{
    if (m_size == m_capacity)
    {
        m_capacity *= 2;

        int* temp = new int[m_capacity];

        for (int i = 0; i < m_size; i++)
        {
            temp[i] = arr[i];
        }

        delete[] arr;
        arr = temp;
    }

    arr[m_size] = value;
    m_size++;
}

// Size Function
int DArray::size() const
{
    return m_size;
}

// Capacity Function
int DArray::capacity() const
{
    return m_capacity;
}

// Subscript Operator
int& DArray::operator[](int index)
{
    return arr[index];
}

// Assignment Operator
DArray& DArray::operator=(const DArray& other)
{
    if (this != &other)
    {
        delete[] arr;

        m_size = other.m_size;
        m_capacity = other.m_capacity;

        arr = new int[m_capacity];

        for (int i = 0; i < m_size; i++)
        {
            arr[i] = other.arr[i];
        }
    }

    return *this;
}

// Output Operator
ostream& operator<<(ostream& out, const DArray& obj)
{
    for (int i = 0; i < obj.m_size; i++)
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
