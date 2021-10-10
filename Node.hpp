/****************************************************/
/**  Assignment 2 - Node Source File               **/
/**  Jaydon Cameron                                **/
/**  SENG1120 Data Structures                      **/
/**  C3329145                                      **/
/**  This source file contains the implementation  **/
/**  of the functions in Node.h which are used to  **/
/**  access the nodes and its data.                **/
/****************************************************/

#include "Node.h"
#include "string"
// Constructors
template<typename T>
Node<T>::Node(const T& data) {
    this->data = data;
    next = NULL;
    prev = NULL;
}

template<typename T>
Node<T>::Node() {
    next = NULL;
    prev = NULL;
}


// Destructors
template<typename T>
Node<T>::~Node() {
    next = NULL;
    prev = NULL;
}

// Getters (Accessors)
template<typename T>
T& Node<T>::getData() {
    return this->data;
}

template<typename T>
const Node<T>* Node<T>::getNext() const {
    return this->next;
}

template<typename T>
Node<T>* Node<T>::getNext() {
    return this->next;
}

template<typename T>
const Node<T>* Node<T>::getPrev() const {
    return this->prev;
}

template<typename T>
Node<T>* Node<T>::getPrev() {
    return this->prev;
}

// Setters (Mutators)
template<typename T>
void Node<T>::setData(const T& data) {
    Node<T>::data = data;
}

template<typename T>
void Node<T>::setNext(Node<T>* next) {
    Node<T>::next = next;
}

template<typename T>
void Node<T>::setPrev(Node<T>* prev) {
    Node<T>::prev = prev;
}