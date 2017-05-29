#include <iostream>
#include <stack>
#include <stdexcept>
using namespace std;

/* IntStack: Stack of Integers */

class IntStack
{
	int * element;
	int max_size;
	int top_index;
public:
	// int s: max_size (fixed size)
	IntStack(int s) {
		max_size = s;

		top_index = -1;
		element = new int[s];
	}

	~IntStack() {
		delete [] element;
	}

	void push(int x) {
		if (top_index == max_size - 1)
		{
			throw std::runtime_error("stack full");
		}

		top_index++;
		element[top_index] = x;
	}

	void pop() {
		if (top_index == -1)
		{
			throw std::runtime_error("stack empty");
		}

		top_index--;
	}

	int top() {
		if (top_index == -1)
		{
			throw std::runtime_error("stack empty");
		}

		return element[top_index];
	}

	bool empty() {
		return top_index == -1;
	}
	
};

int main() {

	// 1. Custom stack
	IntStack i(5);
	i.push(10);
	cout << "i.top(): " << i.top() << endl;
	i.pop();
	cout << "empty: " << boolalpha << i.empty() << endl;

	// 2. Standard-library stack
	std::stack<int> s;
	s.push(11);
	int x = s.top();
	cout << "s.top(): " << x << endl;
	s.pop();
	cout << "empty: " << boolalpha << s.empty() << endl;

	return 0;
}