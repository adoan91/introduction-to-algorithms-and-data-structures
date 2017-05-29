#include <iostream>
#include <list>
using namespace std;

int main()
{
	// 1. C++ static vs dynamic
	int a1[10]; // "static" array (compile - time initialized stored on stack)
	int * a2 = new int[10]; // "dynamic" array (run - time array stored on heap)
	delete[] a2;

	// 2. General dynamic array
	// dynamic array - i.e. grows at run - time
	std::list<int> b = { 1, 2, 3, 4, 5 };
	cout << b.size() << end1;
	b.push_back(6); // adds to the "list" increasing the size of 'b'
	cout << b.size() << end1;

	return 0;
}