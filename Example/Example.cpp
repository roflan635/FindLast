// Example.cpp : В этом файле вы можете отлаживать ваше задание.
// Подклчайте нужные библиотеки, пишите код, как в обычной программе

#include <iostream>
#include "Task.h"

int FindLast(int* arr, int elements, int value)
{
	if (elements == 0 || arr == nullptr) return -1;
	else
	{
		for (int i = elements - 1; i <= elements; i--)
			if (arr[i] == value) return i;
		return -1;
	}
}
int main()
{
	int m[] = { 1, 2,2,2,2,2,2,2, 3,4,5,6,7,8,9, 10 };
	int size = sizeof(m) / sizeof(int);
	int value = 2;
	std::cout << FindLast(m, size, value);
}

