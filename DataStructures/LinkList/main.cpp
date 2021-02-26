#include "List.h"
#include <iostream>

int main()
{
	List<int>* linkListTest = new List<int>();

	linkListTest->pushFront(9);
	linkListTest->pushFront(3);
	linkListTest->pushFront(1);
	linkListTest->pushFront(7);
	linkListTest->pushFront(8);
	linkListTest->pushFront(5);

	linkListTest->print();

}