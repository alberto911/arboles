//
//  Node.h
//  BinaryTreeB
//
//  Created by Sebastián Galguera on 06/09/15.
//  Copyright (c) 2015 Sebastián Galguera. All rights reserved.
//

#ifndef __BinaryTreeB_Node_
#define __BinaryTreeB_Node_

#include <iostream>
using namespace std;

template <class T, int V>
class Node {
    
public:
    
    T infoArray[V-1];
    int count;
	int id;
	static int counter;
    
    Node<T, V> *link[V];
	Node();
    
    void print();
    
	bool isEmpty();
	bool isFull();
    
};

template <class T, int V>
Node<T,V>::Node(){
    
	this->count = 0;
	id = counter++;
    
    for(int i=0;i < V;i++){
        this->link[i] = nullptr;
    }
}

template<class T, int V>
bool Node<T,V>::isFull(){
	return count == V-1;
}

template<class T, int V>
bool Node<T, V>::isEmpty(){
	return count < (V-1)/2;
}

template<class T, int V>
void Node< T,V>::print() {
	
    for(int i = 0; i  < this->count ;i++){
        std::cout <<"  "<< infoArray[i]<<", ";
    }
	
    std::cout << std::endl;
	
}

#endif
