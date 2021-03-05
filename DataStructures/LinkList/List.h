#pragma once
#include "Iterator.h"
#include <iostream>

template<typename T>
class List
{
public:
	List() {};
	List(List<T>& otherList);
	~List();
	void destroy();
	Iterator<T> begin() const;
	Iterator<T> end() const;
	bool contains(const T& object) const;
	void pushFront(const T& value);
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	void print() const;
	void initialize();
	bool isEmpty() const;
	bool getData(Iterator<T>& iter, int index);
	int getLength() const;
	void operator =(const List<T>& otherList);
	void sort();

private:
	Node<T> m_head;
	Node<T> m_tail;
	int m_nodeCount = 0;
};

template<typename T>
inline List<T>::List(List<T>& otherList)
{
	this = otherList;
}

template<typename T>
inline List<T>::~List()
{
}

//Deletes all nodes in the last
template<typename T>
inline void List<T>::destroy()
{
	Iterator<T> iter = new Iterator<T>;
	for (iter == begin(); iter != end(); iter++)
	{
		remove(iter.m_current);
	}
}

//Returns the iterator pointing at the first node in the list
template<typename T>
inline Iterator<T> List<T>::begin() const
{
	return Iterator<T>(m_head);
}

//Returns the iterator pointing at the last node in the list
template<typename T>
inline Iterator<T> List<T>::end() const
{
	return Iterator<T>(m_tail);
}

//Checks if the wanted item is in the list
template<typename T>
inline bool List<T>::contains(const T& object) const
{
	List<T>* node = m_head;
	while (node != nullptr)
	{
		if (node->getData != object)
		{
			node = node->next;
		}
			
		else
		{
			return true;
		}
	}
	return false;
}

//Adds a new node to the front of the list
template<typename T>
inline void List<T>::pushFront(const T& value)
{
	Node<T>* tempNode = new Node<T>(value);
	m_head->previous = tempNode;
	tempNode->next = m_head;
	tempNode->previous = nullptr;
	m_first = tempNode;
}

//Adds a new node at the back of the list
template<typename T>
inline void List<T>::pushBack(const T& value)
{
	Node<T>* tempNode = new Node<T>(value);
	m_last->next = tempNode;
	tempNode->previous = m_last;
	tempNode->next = nullptr;
	m_last = tempNode;
}

//Places a new node at a given spot in the index
template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	Node<T>* temp = &Node<T>(value);
	bool isInserted = false;

	if (m_head.previous != temp)
	{
		temp->next = &m_head;
		m_head.previous = temp;
		isInserted = true;
	}

	return isInserted;
}

//Removes a node at a given spot in the index
template<typename T>
inline bool List<T>::remove(const T& value)
{
	bool isRemoved = false;
	if (value != NULL)
	{
		value = value.previous;
		delete value;
		isRemoved = true;
	}

	return isRemoved;
}

//Prints out all the values of the nodes
template<typename T>
inline void List<T>::print() const
{
	for (Iterator<T> iter = begin(); iter != end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

template<typename T>
inline void List<T>::initialize()
{
	m_head.previous = nullptr;
	m_tail.next = nullptr;
	getLength();
}

//Returns if the list has any nodes in it
template<typename T>
inline bool List<T>::isEmpty() const
{
	bool tempEmpty = false;
	if (m_head < begin)
	{
		tempEmpty() = true;
	}
	else
	{
		tempEmpty() = false;
	}

	return tempEmpty;
}

//Returns the value of the given node
template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	bool tempData = false;
	auto iter = List.begin();

	while (iter != List.end())
	{
		iter++;

		if (iter = index)
		{
			tempData = true;
			iter++;
		}
	}

	return tempData;
}

//Returns the size of the list
template<typename T>
inline int List<T>::getLength() const
{
	int i = 0;

	for (Iterator j = m_head; j < m_tail; j++)
	{
		i++;
	}

	return i;
}

template<typename T>
inline void List<T>::operator=(const List<T>& otherList)
{

}

//
template<typename T>
inline void List<T>::sort()
{
}
