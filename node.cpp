#include <cstdlib>
#include "node.h"

template<class T>
Node<T>::Node()
{
	parentPtr = leftPtr = rightPtr = NULL;
}

template<class T>
Node<T>::Node(const T &i)
{
	item = i;
	parentPtr = leftPtr = rightPtr = NULL;
}

template<class T>
Node<T>::Node(const Node<T> &n)
{
	item = n->item;
	parentPtr = leftPtr = rightPtr = NULL;
}

template<class T>
void Node<T>::setItem(const T &i)
{
	item = i;
}

template<class T>
Node<T>& Node<T>::operator=(const Node<T> &n)
{
	this->item = n->item;
	return *this;
}