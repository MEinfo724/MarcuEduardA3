#include "NumberList.h"
#include <iostream>
void NumberList::Init()
{
	count = 0;
	
	for (int i = 0; i < 10; i++)
	{
		numbers[i] = 0;
	}

}
bool NumberList::Add(int x)
{
	int i = 0;
	if (count  >= 10)
		return false;
	else
	{
		numbers[count] = x;
		count++;
	}
	return true;
}
void NumberList::Sort()
{
	int aux;
	for(int i=0;i<count-1;i++)
		for(int j=i+1; j<count;j++)
			if (numbers[i] > numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}
void NumberList::Print()
{  
	
	for (int i = 0; i < count; i++)
		std::cout << numbers[i] << ' ';

}
bool NumberList::Insert(int pozitie, int numar)
{
	int i = 0;
	if (count  >=10)
		return false;
	count++;
	for (i = count; i > pozitie; i--)
		numbers[i] = numbers[i - 1];
	numbers[pozitie] = numar;
	return true;
}
void NumberList::Remove(int pozitie)
{
	int i = 0;
	for (i = pozitie; i <= count; i++)
		numbers[i] = numbers[i + 1];
	count--;
}