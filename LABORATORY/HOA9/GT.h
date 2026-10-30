#ifndef GT_H
#define GT_H
#include <iostream>

template <typename T>
class GeneralTree {
    private:
    T key;

    GeneralTree<T>* left;
    GeneralTree<T>* right;

    public:
    GeneralTree(T value);

    void addChild(GeneralTree<T>* child);

    void preOrder();
    void inOrder();
    void postOrder();

    bool findData(T value);
};

template <typename T>
GeneralTree<T>::GeneralTree(T value) {
    key = value;
    left = nullptr;
    right = nullptr;
}

template <typename T>
void GeneralTree<T>::addChild(GeneralTree<T>* child) {
    if (left == nullptr) {
        left = child;
    } else { GeneralTree<T>* temp = left; 
        while (temp->right != nullptr) {
            temp = temp->right;
        } 
        temp->right = child;
    }
}

template <typename T>
void GeneralTree<T>::preOrder() {
    std::cout << key << " ";
    if (left != nullptr) {
        left->preOrder();
        
        GeneralTree<T>* temp = left->right;

        while (temp != nullptr) {
        temp->preOrder();
        temp = temp->right;
        }
    }
}

template <typename T>
void GeneralTree<T>::inOrder() {
    if (left != nullptr) {
        left->inOrder();
    }
    std::cout << key << " ";
 
    if (left != nullptr) {
        
        GeneralTree<T>* temp = left->right;

        while (temp != nullptr) {
        temp->inOrder();
        temp = temp->right;
        }
    }
}

template <typename T>
void GeneralTree<T>::postOrder() {
    if (left != nullptr) {
        left->postOrder();
    
        GeneralTree<T>* temp = left->right;

        while (temp != nullptr) {
        temp->postOrder();
        temp = temp->right;
        }
    }
    std::cout << key << " ";
}

template <typename T>
bool GeneralTree<T>::findData(T value) {
    if (key == value) {
        return true;
    }
    if (left != nullptr) {
        if (left->findData(value)) {
            return true;
        }

        GeneralTree<T>* temp = left->right;

        while (temp != nullptr) {
            if (temp->findData(value)) {
                return true;
            }
            temp = temp->right;
        }
    }
    return false;
}

#endif
