// CoredllTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void RandomTest(int number)
{
	printf("Testing Random #%i:\n", number);
	printf("%i", Random());
	for (int i = 0; i < 50; i++)
		printf(", %i", Random());
	printf("\n");
}

int main()
{
	printf("Testing unimplemented RegisterDefaultGestureHandler:\n");
	printf("%i\n\n", RegisterDefaultGestureHandler());
	RandomTest(1);
	printf("Wait 2500 ms...\n");
	Sleep(2500);
	RandomTest(2);
}
