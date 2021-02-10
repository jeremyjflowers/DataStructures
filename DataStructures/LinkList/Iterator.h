#pragma once
#include "Node.h"

template<typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* node);
	Iterator<T> operator ++();
	Iterator<T> operator --();
	const bool operator ==(const Iterator<T>& iter);
	const bool operator !=(const Iterator<T>& iter);
	T operator *();

private:
	Node<T>* m_current;
};

template<typename T>
inline Iterator<T>::Iterator()
{
	Iterator<int> iter = m_current;
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
	m_current = node;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	Iterator<float> temp = *this;
	nodePtr = nodePtr->next;
	return temp;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	Iterator<float> temp = *this;
	nodePtr = nodePtr->previous;
	return temp;
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	return nodePtr == iter.nodePtr;
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	return nodePtr != iter.nodePtr;
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return T();
}
