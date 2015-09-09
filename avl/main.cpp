#include <cstdlib>
#include "AVLTree.h"

#define N 100

int main() {
	AVLTree<int> tree;

	std::cout << "Bienvenido al arbol AVL" << std::endl;
    std::cout << "A continuación se harán los procesos" << std::endl;
    std::cout << "\nInsertar e imprimir" << std::endl;

	tree.insert(tree.getRoot(), nullptr, 44);
	tree.insert(tree.getRoot(), nullptr, 17);
	tree.insert(tree.getRoot(), nullptr, 78);
	tree.insert(tree.getRoot(), nullptr, 50);
	tree.insert(tree.getRoot(), nullptr, 88);
	tree.insert(tree.getRoot(), nullptr, 32);
	tree.insert(tree.getRoot(), nullptr, 48);
	tree.insert(tree.getRoot(), nullptr, 62);

	std::cout << "Orden ascendente:" << std::endl;
	tree.printAsc();
	std::cout << "Orden descendente:" << std::endl;
	tree.printDesc();

	std::cout << "\nBorrar" << std::endl;
    tree.remove(tree.search(tree.getRoot(), 32));

	std::cout << "Preorden (el árbol se rebalanceó):" << std::endl;
	tree.preOrder();
	std::cout << "\nInorden:" << std::endl;
	tree.printAsc();
	
	std::cout << "\nBuscar el número 150" << std::endl;
    if (tree.search(tree.getRoot(), 150)) {
        std::cout << "Se encontró el dato" << std::endl;
    }
	else {
        std::cout << "No se encontró el dato" << std::endl;
    }

	return 0;
}
