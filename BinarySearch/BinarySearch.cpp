// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header.h"

int main()
{
    std::cout << "BinarySearch!\n";
	std::cout << "------------\n";

	int sizeOfArray = 0;
	std::cout << "Enter the number of elements in the array\n";
	std::cin >> sizeOfArray;
	int arrayNew[100];
	for (int index = 0; index < sizeOfArray; index++) {
		std::cout << "Enter the element at " << index;
		std::cin >> arrayNew[index];
	}
	int element = 0;
	std::cout << "Enter the element to be found in the array\n";
	std::cin >> element;
	int index = GetIndexOfElementInArray(arrayNew, element, 0, sizeOfArray-1);
	if (index == -1) {
		std::cout << "No such element found!\n";
	}
	else {
		std::cout << "The element is found at " << index;
	}
}


int GetIndexOfElementInArray(int arrayNew[], int element, int start, int end) {

	if (start <= end) {
		int middle = (start + end) / 2;

		if (arrayNew[middle] == element) {
			return middle;
		}
		if (arrayNew[middle] > element) {
			return GetIndexOfElementInArray(arrayNew, element, 0, middle-1);
		}
		return GetIndexOfElementInArray(arrayNew, element, middle+1, end);
	}

	return -1;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
