#include <iostream>
#include "GT.h"

int main() {
    GeneralTree<char> A('A');
    GeneralTree<char> B('B');
    GeneralTree<char> C('C');
    GeneralTree<char> D('D');
    GeneralTree<char> E('E');
    GeneralTree<char> F('F');
    GeneralTree<char> G('G');
    GeneralTree<char> H('H');
    GeneralTree<char> I('I');
    GeneralTree<char> J('J');
    GeneralTree<char> K('K');
    GeneralTree<char> L('L');
    GeneralTree<char> M('M');
    GeneralTree<char> N('N');
    GeneralTree<char> P('P');
    GeneralTree<char> Q('Q');

    GeneralTree<char> O('O');

    A.addChild(&B);
    A.addChild(&C);
    A.addChild(&D);
    A.addChild(&E);
    A.addChild(&F);
    A.addChild(&G);

    D.addChild(&H);

    E.addChild(&I);
    E.addChild(&J);

    J.addChild(&P);
    J.addChild(&Q);

    F.addChild(&K);
    F.addChild(&L);
    F.addChild(&M);

    G.addChild(&N);
    G.addChild(&O);

    std::cout << "preOrder : ";
    A.preOrder();
    std::cout << std::endl;

    std::cout << "inOrder : ";
    A.inOrder();
    std::cout << std::endl;

    std::cout << "postOrder : ";
    A.postOrder();
    std::cout << std::endl;

    std::cout << "Find A : ";
    if (A.findData('A')) {
        std::cout << "A was found!";
    }
    std::cout << std::endl;

    std::cout << "Find O : ";
    if (A.findData('O')) {
        std::cout << "O was found!";
    }
    std::cout << std::endl;

    return 0;
}
