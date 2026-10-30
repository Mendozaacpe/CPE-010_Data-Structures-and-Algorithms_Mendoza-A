#ifndef QUEUEARR_H
#define QUEUEARR_H
#include <iostream>

template <typename T>
class queueArr {
    private:
    T* q_array;
    int q_front;
    int q_back;

    public:
    queueArr(size_t capacity = 7);
    queueArr(const queueArr& other);
    queueArr& operator=(const queueArr& other);
    ~queueArr();
    
}






#endif