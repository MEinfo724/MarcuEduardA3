#include <iostream>
#include "NumberList.h"

int main()
{
	NumberList l;
	int x;
    l.Init();
	l.Add(2);
	l.Add(5);
	l.Add(4);
	l.Add(6);
	l.Print();
	std::cout << std::endl;

	l.Insert(2, 9);
	l.Print();
	std::cout << std::endl;
	l.Remove(1);
	l.Print();
	std::cout << std::endl;
	l.Sort();
	l.Print();

	return 0;
}