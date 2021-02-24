#pragma once
#include "Iterator.h"
#include <iostream>

template<typename T>
class List
{
public:
	List();
	List(List<T>&);
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
	const List<T>& operator =(const List<T>& otherList);
	void sort();

private:
	Node<T> m_head;
	Node<T> m_tail;
	int m_nodeCount;
};

template<typename T>
inline List<T>::List()
{
	m_head =* new Node<T>();
	m_tail = m_head;
	m_nodeCount = 0;
}

template<typename T>
inline List<T>::List(List<T>& list)
{
	this = list;
}

template<typename T>
inline List<T>::~List()
{
	destroy();
	delete m_head;
	delete m_tail;
}

template<typename T>
inline void List<T>::destroy()
{
	Iterator<T> iter = Iterator<T>(m_head);
	
	for (int i = 0; i < m_nodeCount; i++)
	{
		if (iter.m_current->previous)
			delete iter.m_current->previous;
		if (iter.m_current->next)
			delete iter.m_current;
		if (iter.m_current != m_tail)
			iter++;
	}
	m_head = new Node<T>();
	m_tail = m_head;
	m_nodeCount = 0;
}

template<typename T>
inline Iterator<T> List<T>::begin() const
{
	Node<T> *m_head;
	return m_head;
}

template<typename T>
inline Iterator<T> List<T>::end() const
{
	Node<T> *m_tail;
	return m_tail;
}

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

template<typename T>
inline void List<T>::pushFront(const T& value)
{
	value.previous = nullptr;
	value.next = m_head;
	m_head = value;
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{
	value.previous = m_tail;
	value.next = nullptr;
	m_tail = value;
}

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
inline const List<T>& List<T>::operator=(const List<T>& otherList)
{
	//TODO: insert return statement here
}

template<typename T>
inline void List<T>::sort()
{
}
