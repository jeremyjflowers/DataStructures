#pragma once
#include "Iterator.h"

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

}

template<typename T>
inline List<T>::List(List<T>&)
{
}

template<typename T>
inline void List<T>::destroy()
{
}

template<typename T>
inline Iterator<T> List<T>::begin() const
{
	Iterator<int> iter = *m_head;
	return Iterator<T>();
}

template<typename T>
inline Iterator<T> List<T>::end() const
{
	Iterator<int> iter = *m_tail;
	return Iterator<T>();
}

template<typename T>
inline bool List<T>::contains(const T& object) const
{
	return false;
}

template<typename T>
inline void List<T>::pushFront(const T& value)
{
	value.previous->nullptr;
	value.next->m_head;
	m_head = value;
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{
	value.previous->m.tail;
	value.next->nullptr;
	m_tail = value;
}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	return false;
}

template<typename T>
inline bool List<T>::remove(const T& value)
{
	return false;
}

template<typename T>
inline void List<T>::print() const
{
	for (Iterator<int> iter = begin(); iter != end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

template<typename T>
inline void List<T>::initialize()
{
}

template<typename T>
inline bool List<T>::isEmpty() const
{
	if (isEmpty() == false)
	{

	}

	return false;
}

template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	return false;
}

template<typename T>
inline int List<T>::getLength() const
{

	return 0;
}

template<typename T>
inline const List<T>& List<T>::operator=(const List<T>& otherList)
{
	return 0;
}

template<typename T>
inline void List<T>::sort()
{
}
