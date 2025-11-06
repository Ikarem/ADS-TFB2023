#include <iostream>
using namespace std;
#define SIZE 5

class Queue {
	int arr[SIZE];
	int front, rear;

public:
	Queue()
	{
		front = -1;
		rear = -1;
	}

	bool isFull() {
		return rear == SIZE-1;
	}

	bool isEmpty() {
		return front == -1 || front > rear;
	}

	void Enqueue(int value) {
		if (isFull()) {
			cout << "Queue overflow\n";
			return;
		}
		if (front == -1) front = 0;
		rear++;
		arr[rear] = value;

		cout << value << " added to queue\n";
	}
	void Dequeue() {
		if (isEmpty()) {
			cout << "Queue underflow\n";
			return;
		}
		cout << arr[front] << " removed from queue..\n";
		front++;
	}
	void DisplayQueue() {
		if (isEmpty()) {
			cout << "Empty Queue!\n";
			return;
		}
		cout << "Queue: ";
		for (int i = front; i<=rear; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
};

int main() {
	Queue newQueue;
	newQueue.Enqueue(5);
	newQueue.Enqueue(10);
	newQueue.Enqueue(15);
	newQueue.DisplayQueue();
	newQueue.Dequeue();
	newQueue.DisplayQueue();
	newQueue.Dequeue();
	newQueue.Dequeue();
	newQueue.DisplayQueue();
	
}
