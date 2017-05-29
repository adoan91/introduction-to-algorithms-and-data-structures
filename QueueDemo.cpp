#include <iostream>
#include <queue>
using namespace std;

/* IntQueue: A queue of integers */
class IntQueue
{
	int * element;
	int max_size;
	int head;
	int tail;
public:
	IntQueue(int s){
		max_size = s;
		head = -1;
		tail = -1;
		element = new int[s];
	}

	~IntQueue() {
		delete [] element;
	}

	void enqueue(int x) {
		if (tail == max_size - 1)
		{
			throw std::runtime_error("queue full");
		}

		tail++;
		element[tail] = x;
	}

	int dequeue() {
		if (head == max_size - 1)
		{
			throw std::runtime_error("queue full");
		}

		if (head == tail)
		{
			throw std::runtime_error("queue empty");
		}

		head++;
		return element[head];
	}

	bool empty() {
		return head == tail;
	}
	
};

int main()
{
	// 1. Custom Queue
	IntQueue i(5);
	i.enqueue(10);
	i.enqueue(15);
	i.enqueue(20);

	cout << "i.dequeue(): " << i.dequeue() << endl;
	cout << "i.dequeue(): " << i.dequeue() << endl;
	cout << "i.dequeue(): " << i.dequeue() << endl;
	cout << "empty: " << boolalpha << i.empty() << endl << endl;

	// 2. Standard library queue
	std::queue<int> s;
	s.push(11);
	s.push(12);
	s.push(13);
	cout << "s.front(): " << s.front() << endl;
	s.pop();
	cout << "s.front(): " << s.front() << endl;
	s.pop();
	cout << "s.front(): " << s.front() << endl;
	s.pop();

	cout << "empty: " << boolalpha << s.empty() << endl;

	return 0;
}