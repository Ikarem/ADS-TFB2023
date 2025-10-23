#include <iostream>
#include <string>
using namespace std;		

struct Node {
	int data;
	Node* next;
};

class Stack {
	private:
		Node* top;
		int size;
		int count;

	public:
		Stack(int s) {
			size = s;
			count = 0;
			top = nullptr;
		}

		bool isEmpty() {
			return top == nullptr;
		}

		bool isFull() {
			if (size == count){
				return true;
			}
		}


		void push(int value){
			if (count+1 > size){
				cout << "Cannot push: " << value << " | Stack overflow!\n";
				return;
			}

			Node* tempNode = new Node();
			tempNode->data = value;
			tempNode->next = top;
			top = tempNode;
			cout << value << "pushed to stack\n";
			count++;
			return;
		}

		int pop(){
			if (isEmpty()){
				cout << "Stack underflow\n";
				return -1;
			}

			Node* tempNode = top;
			int popped = tempNode->data;
			top = top->next;
			count--;
			delete tempNode;
			return popped;
		}

		int peek() {
			if (isEmpty()){
				cout << "Stack empty!\n";
				return -1;
			}
			return top->data;
		}
};

int main() {
	Stack s(3);
	s.push(10);
	s.push(30);
	s.push(40);

	s.push(50);

	int popped = s.pop();
	cout << "Popped Element: " << popped << endl;

	cout << "Top Element: " << s.peek() << endl;

	return 0;
}
