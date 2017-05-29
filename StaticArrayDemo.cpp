#include <iostream>
#include <algorithm>
#include <array>

/*
	Static arrays are fixed-length.
	Static arrays are determined at compile time and created on "the stack".
	Cannot grow or shrink at run time.
*/

int main()
{
	// 1. Primitive array
	int a[4]; // uninitialized static array
	int a1[4] = { 20, 123, 99, 4096 }; // initialized static array

	// zero - based indexing of arrays in C++
	a1[0] = 21;
	a1[3] = 4097;

	// multidimensional array
	int aa[4][2]; // typically rows first, then columns
	int aa2[2][2][3][4]; // careful of memory use!

	// 2. Standard - library "static" array
	cout << "Standard - library array:\n";
	array<int, 5> ax = { 1, 2, 3, 4, 5 };
	cout << "size: " << ax.size() << end1;
	cout << "front: " << ax.front() << end1;
	cout << "ax[0]: " << ax[0] << end1;
	cout << "back: " << ax.back() << end1;
	cout << "ax[ax.size() - 1]: " << ax[ax.size() - 1] << end1;

	return 0;
}