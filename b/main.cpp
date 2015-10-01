//
//  main.cpp
//  BinaryTreeB
//
//  Created by Sebastián Galguera on 06/09/15.
//  Copyright (c) 2015 Sebastián Galguera. All rights reserved.
//



#include <iostream>
#include <fstream>
#include "BinaryTreeB.h"

template <class T, int V>
int Node<T, V>::counter = 0;

int main(int argc,   char * argv[])
{
    std::cout << "Bienvenido al arbol B TX-5324" << std::endl;
    std::cout << "A continuacion se haran los procesos" << std::endl;
    std::cout << "\nInsertar e imprimir" << std::endl;
    BinaryTreeB<int, 5>* BT = new BinaryTreeB<int, 5>();
    
    BT->insert(3);
    BT->insert(15);
    BT->insert(160);
    BT->insert(834);
    BT->insert(91);
    BT->insert(164);
    BT->insert(7);
    BT->insert(34);
    BT->insert(25);
    BT->insert(86);
    BT->insert(97);
    BT->insert(12);
    BT->insert(5263);
    BT->insert(2243);
    BT->insert(12);
    
    BT->inOrder();
    std::cout << "\n\nBorrar" << std::endl;
    BT->remove(91);
    BT->remove(34);
    
    BT->inOrder();
	std::cout << std::endl;
	BT->reverse(BT->root);
    
    std::cout << "\n\nBuscar" << std::endl;
   
    if (BT->found(3)){
        std::cout << "Se encontró el elemento" << std::endl;
    }else{
        std::cout << "No se encontró el elemento" << std::endl;
    }

	std::cout << "\nGuardar y buscar en disco" << std::endl;

	BT->saveTree();
	if (BT->searchInDisk(2243))
		std::cout << "Se encontró el elemento" << std::endl;
	else
		std::cout << "No se encontró el elemento" << std::endl;

    return 0;
}
