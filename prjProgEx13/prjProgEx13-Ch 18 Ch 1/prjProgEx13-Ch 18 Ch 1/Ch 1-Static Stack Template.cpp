#include <iostream>
using namespace std;

template<class T>
class IntStack {
	private:
		T *stackArray;
		int stackSize;
		int top;

	public:
		IntStack(int);

		IntStack(const IntStack &);

		IntStack();

		void push(T);
		void pop(T &);
		bool isFull() const;
		bool isEmpty() const;

};

template<class T>
IntStack<T> :: IntStack(int size) {
	stackArray = new T[size];
	stackSize = size;
	top = -1;
};

template<class T>
IntStack<T> ::IntStack(const IntStack &obj) {
	if (obj.stackSize > 0)
		stackArray = new T[obj.stackSize];
	else
		stackArray = null;

	stackSize = obj.stackSize;

	for (int i = 0; i < stackSize; i++)
		stackArray[i] = obj.stackSize[i];

	top = obj.top;
};

template<class T>
void IntStack<T> ::push(T num) {
	if (isFull()) {
		cout << "The stack is full.\n";
	} else {
		top++;
		stackArray[top] = num;
	}
};

template<class T>
void IntStack<T> ::pop(T &num) {
	if (isEmpty()) {
		cout << "The stack is empty.\n";
	} else {
		num = stackArray[top];
		top--;
	}
};

template<class T>
bool IntStack<T> ::isFull() const {
	bool status;

	if (top == stackSize - 1)
		status = true;
	else
		status = false;
	
	return status;
};

template<class T>
bool IntStack<T> ::isEmpty() const {
	bool status;

	if (top == -1)
		status = true;
	else
		status = false;

	return status;
};

int main() {
	char c1;
	double d1;

	IntStack<char> stack1(5);
	IntStack<double> stack2(5);

	cout << "Push > Y\n";
	stack1.push('Y');
	cout << "Push > A\n";
	stack1.push('A');
	cout << "Push > H\n";
	stack1.push('H');
	cout << "Push > Y\n";
	stack1.push('Y');
	cout << "Push > A\n";
	stack1.push('A');

	cout << "\nStack is Full?\n0 = False, 1 = True" << endl;
	cout << stack1.isFull() << endl;

	cout << "\nPop\n";
	stack1.pop(c1);
	cout << c1 << endl;
	stack1.pop(c1);
	cout << c1 << endl;
	stack1.pop(c1);
	cout << c1 << endl;
	stack1.pop(c1);
	cout << c1 << endl;
	stack1.pop(c1);
	cout << c1 << endl;

	cout << "\nStack is Empty?\n0 = False, 1 = True" << endl;
	cout << stack1.isEmpty() << endl;

	cout << "\nPush 7.1\n";
	stack2.push(7.1);
	cout << "Push 6.2\n";
	stack2.push(6.2);
	cout << "Push 5.3\n";
	stack2.push(5.3);
	cout << "Push 4.4\n";
	stack2.push(4.4);
	cout << "Push 3.5\n";
	stack2.push(3.5);

	cout << "\nStack is Full?\n0 = False, 1 = True" << endl;
	cout << stack2.isFull() << endl;

	cout << "\nPop\n";
	stack2.pop(d1);
	cout << d1 << endl;
	stack2.pop(d1);
	cout << d1 << endl;
	stack2.pop(d1);
	cout << d1 << endl;
	stack2.pop(d1);
	cout << d1 << endl;
	stack2.pop(d1);
	cout << d1 << endl;

	cout << "\nStack is Empty?\n0 = False, 1 = True" << endl;
	cout << stack2.isEmpty() << endl;

	cin.get();
	return 0;
};