#include <iostream>
#include "queueLL.h"

int main() {

    qNode<char>* front = nullptr;
    qNode<char>* back = nullptr;

    enqueue('A' , &front , &back);
    std::cout << "front: " << front->data << " " << "back: " << back->data << std::endl;
    enqueue('L' , &front , &back);
    std::cout << "front: " << front->data << " " << "back: " << back->data << std::endl;
    enqueue('L' , &front , &back);
    std::cout << "front: " << front->data << " " << "back: " << back->data << std::endl;
    enqueue('Y' , &front , &back);
    std::cout << "front: " << front->data << " " << "back: " << back->data << std::endl;
    
    std::cout << "Testing of displaying queue: " << std::endl;
    listAll(front);
    std::cout << std::endl;

    std::cout << "Testing the dequeue operator: \n";
    dequeue(&front , &back);
    std::cout << "front: " << front->data << " " << "back: " << back->data << std::endl;
    dequeue(&front , &back);
    std::cout << "front: " << front->data << " " << "back: " << back->data << std::endl;
    dequeue(&front , &back);
    std::cout << "front: " << front->data << " " << "back: " << back->data << std::endl;
    dequeue(&front , &back);
    dequeue(&front , &back);

    std::cout << "Testing if the queue is empty: \n";
    isEmpty(&front , &back);
    
    return 0;
}
