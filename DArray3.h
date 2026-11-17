
#ifndef DARRAY3_H
#define DARRAY3_H

#include <iostream>
using namespace std;

class DArray
{
private:
    int* arr{};
    int m_size{};
    int m_capacity{};

public:
    DArray();

    void push_back(int value);

    int size() const;
    int capacity() const;

    DArray(const DArray& other);

    const int& operator[](int index) const;

    bool operator==(const DArray& other) const;

    DArray& operator=(const DArray& other);

    friend ostream& operator<<(ostream& out, const DArray& obj);

    ~DArray();
};

#endif
