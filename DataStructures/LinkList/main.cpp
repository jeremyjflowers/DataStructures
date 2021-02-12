#include "List.h"
#include <iostream>

int main()
{
	List<char>* list = new List<char>();

	list->insert(5, 1);
	list->insert(10, 2);

	list->print();

	system("pause");
}