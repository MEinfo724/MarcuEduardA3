#include <iostream>
#include "Math.h"
#include <cstdarg>
#include <cstring>
#include <stdio.h>      
#include <stdlib.h> 

int main()
{
	//Math l;
	std::cout << Math::Add(1.5,3.6)<< std::endl;
	std::cout << Math::Add(1, 2) << std::endl;
	std::cout << Math::Add("999", "1") << std::endl;
	std::cout << Math::Add(5, 1,2,3,4,5) << std::endl;
	std::cout << Math::Mul(3,2) << std::endl;
	std::cout << Math::Mul("115", 20) << std::endl;

}