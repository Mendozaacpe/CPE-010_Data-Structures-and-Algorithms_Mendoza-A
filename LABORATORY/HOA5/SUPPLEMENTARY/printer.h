#ifndef PRINTER_H
#define PRINTER_H
#include <iostream>
#include "job.h"

template <typename T>
class Printer {
    private:
    T* q_jobs;
    size_t q_capacity;
    size_t q_size;
    int q_front;
    int q_back;
    
    public:
        Printer(size_t capacity = 7);
        Printer(const Printer& other);
        Printer& operator=(const Printer& other);
        ~Printer();
        bool Empty();
        bool Full();
        size_t Size();
        void AddJob(T job);
        T ProcessJob();
        T NextJob();
        void Display();
        void Clear();
};

template <typename T>
Printer<T>::Printer(size_t capacity) {
    q_capacity = capacity;
    q_size = 0;
    q_front = 0;
    q_back = -1;
    q_jobs = new T[q_capacity];
}

template <typename T>
Printer<T>::Printer(const Printer& other) {
    q_capacity = other.q_capacity;
    q_size = other.q_size;
    q_front = other.q_front;
    q_back = other.q_back;

    q_jobs = new T[q_capacity];

    for (size_t i = 0; i < q_capacity; i++) {
        q_jobs[i] = other.q_jobs[i];
    }
}

template <typename T>
Printer<T>& Printer<T>::operator=(const Printer<T>& other) {
    if (this != &other) {
        delete[] q_jobs;
        q_capacity = other.q_capacity;
        q_size = other.q_size;
        q_front = other.q_front;
        q_back = other.q_back;

        q_jobs = new T[q_capacity];

        for (size_t i = 0; i < q_capacity; i++) {
            q_jobs[i] = other.q_jobs[i];
        }
    }
    return *this;
}

template <typename T>
Printer<T>::~Printer() {
    delete[] q_jobs; 
}

template <typename T>
bool Printer<T>::Empty() {
    return q_size == 0;
}

template <typename T>
bool Printer<T>::Full() {
    return q_size == q_capacity;
}

template <typename T>
size_t Printer<T>::Size() {
    return q_size;
}

template <typename T>
void Printer<T>::AddJob(T job) {
    if(Full()) {
        std::cout<<"The Printer Queue is already full!\n";
        return;
    }
    q_back = (q_back + 1) % q_capacity;
    q_jobs[q_back] = job;
    q_size++;
}

template <typename T>
T Printer<T>::ProcessJob() {
    if(Empty()) {
        std::cout<<"There is no job to process!\n";
        return T();
    }
    T temp = q_jobs[q_front];
    q_front = (q_front + 1) % q_capacity;
    q_size--;
    if(Empty()) Clear();
    return temp;
}

template <typename T>
T Printer<T>::NextJob() {
    if(Empty()) {
        std::cout<<"There are no pending jobs!\n";
        return T();
    }
    return q_jobs[q_front];
}

template <typename T>
void Printer<T>::Display() {
    if (Empty()) {
        std::cout << "There is no pending jobs!\n";
        return;
    }
    std::cout << "These are the pending jobs: \n";
    int index = q_front;
    for (size_t i = 0; i < q_size; i++) {
        q_jobs[index].DisplayJobs();
        index = (index + 1) % q_capacity;
    }
}

template <typename T>
void Printer<T>::Clear() {
    q_size = 0;
    q_front = 0;
    q_back = -1;
}

#endif
