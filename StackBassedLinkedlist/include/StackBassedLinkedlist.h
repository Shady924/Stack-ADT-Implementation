#pragma once

template<class T>
struct Node
{
	T data;
	Node<T>* next;
	Node() : data(T()), next(nullptr) {}
};



template<class T>
class Stack
{
private:
	Node<T>* top;

public:
    Stack();
    bool Isempty() const;
    bool Full() const;
    void Push(T);
    T Pop();
    T Peek(int) const;
    T StackTop() const;
    void Display() const;
    int Length() const;
	~Stack();

};

template<class T>
Stack<T>::Stack() : top(nullptr) {}

template<class T>
bool Stack<T>::Isempty() const {
	return (top == nullptr);
}

template<class T>
bool Stack<T>::Full() const {
	Node<T>* t = new Node<T>;
	bool isFull = (t == nullptr);
	delete t;
	return isFull;
}

template<class T>
void Stack<T>::Push(T x) {
	if (Full()) {
		std::cout << "Stack overflow ";
		return;
	}
	else {
		Node<T>* t = new Node<T>;
		t->data = x;
		t->next = top;
		top = t;
	}
}

template<class T>
T Stack<T>::Pop() {
	T x;
	if (Isempty()) {
		std::cout << "Stack underflow, ";
		return T();
	}
	else {
		Node<T>* temp = top;
		top = top->next;
		x = temp->data;
		delete temp;
	}
	return x;
}

template<class T>
T Stack<T>::Peek(int index) const {
	if (index < 1) return T();
	Node<T>* temp = top;
	for (int i = 0; i < index - 1 && temp != nullptr; ++i)
		temp = temp->next;

	return (temp) ? temp->data : T();

}

template<class T>
T  Stack<T>::StackTop() const {
	if (top) return top->data;
	else return T();
}

template<class T>
void Stack<T>::Display() const {
	Node<T>* temp = top;
	while (temp) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << "\n";
}

template<class T>
int  Stack<T>::Length() const {
	int count = 0;
	Node<T>* temp = top;
	while (temp) {
		count++;
		temp = temp->next;
	}
	return count;
}

template<class T>
Stack<T>::~Stack() {
	while (top) {
		Node<T>* temp = top;
		top = top->next;
		delete temp;
	}
}
