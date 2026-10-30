#include <iostream>
#include "queueArr.h"

int main() {
   
    // crating an object
    queueArr<int> q(5);

    // enqueue 1 , 2 , 3 , 4 , 5
    q.Enqueue(1);
    std::cout << "Front: " << q.Front() << std::endl;
    std::cout << "Back: " << q.Back() << std::endl;
    std::cout << "Size: " << q.Size() << std::endl;

    q.Enqueue(2);
    std::cout << "Front: " << q.Front() << std::endl;
    std::cout << "Back: " << q.Back() << std::endl;
    std::cout << "Size: " << q.Size() << std::endl;

    q.Enqueue(3);
    std::cout << "Front: " << q.Front() << std::endl;
    std::cout << "Back: " << q.Back() << std::endl;
    std::cout << "Size: " << q.Size() << std::endl;

    q.Enqueue(4);
    std::cout << "Front: " << q.Front() << std::endl;
    std::cout << "Back: " << q.Back() << std::endl;
    std::cout << "Size: " << q.Size() << std::endl;

    q.Enqueue(5);
    std::cout << "Front: " << q.Front() << std::endl;
    std::cout << "Back: " << q.Back() << std::endl;
    std::cout << "Size: " << q.Size() << std::endl;

    q.Enqueue(6);
    std::cout << "Removed: " << q.Dequeue() << std::endl;
    std::cout << "Removed: " << q.Dequeue() << std::endl;

    q.Clear();
    std::cout << "Is the Queue Empty?  " << (q.Empty()?"Yes":"No") << std::endl;

    return 0;
}
