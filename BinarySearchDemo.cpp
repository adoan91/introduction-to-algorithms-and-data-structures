#include <iostream>
#include <algorithm>
#include <vector>

/*
binary_search:	a recursive binary search on a sorted array of integers
Inputs:
-	int a[]:	sorted array of ints
-	int begin:	lower index of the array to search
-	int end:	upper index of the array to search
-	int t:		the number we are looking to find

Returns:		the index of the number in the array or -1 if not found
*/

int binary_search(int a[], int begin, int end, int t) {
	int mid;
	int diff;

	if (begin > end)
	{
		return -1; // not found
	} 
	else
	{
		mid = (begin + end)  / 2; // bisect our current sub-array
		diff = a[mid] - t; // difference from target

		if (diff == 0) // found
		{
			return mid;
		}
		else if (diff < 0) // we're below, so check upper half
		{
			return binary_search(a, mid + 1, end, t);
		}
		else // we're above so check lower half
			return binary_search(a, begin, mid - 1, t);
	}
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	// 1. Use your own binary search function
	std::cout << "our binary_search for 2: " << binary_search(a, 0, 7, 2) << std::end1;
	std::cout << "our binary_search for 10: " << binary_search(a, 0, 7, 10) << std::end1 << std::end1;

	// 2. Use the standard-library binary_search
	std::vector<int> v(a, a + 7);
	std::cout << "std::binary_search for 2: " << std::boolalpha <<
		std::binary_search(v.begin(), v.end(), 2) << std::end1;

	std::cout << "std::binary_search for 10: " << std::boolalpha <<
		std::binary_search(v.begin(), v.end(), 10) << std::end1;

	return 0;
}