#include <iostream>
#include "StackBassedLinkedlist.h"

int main() {
	Stack <int>S1;
	std::cout<< "Stack is emtpy: " << S1.Isempty()<< " ,Stack is full: " << S1.Full() <<std::endl; // 1 0
	S1.Pop();S1.Push(1);S1.Push(2); //Stack underflow
	std::cout<< "Top Data in Stack : " << S1.StackTop() << std::endl; // 2
	S1.Push(3);
	std::cout<< "Length Stack: " << S1.Length() << std::endl; // 3
	S1.Display(); // 3 2 1
	std::cout << "index 0 in Stack: " << S1.Peek(0) << std::endl; // 0
	std::cout << "Stack is emtpy: " << S1.Isempty() << " ,Stack is full: " << S1.Full() << std::endl; // 0 0
	S1.Pop();
	std::cout<< "Length Stack: " << S1.Length() << std::endl; // 2
	S1.Display(); // 2 1
	std::cout << "index 1 in Stack: " << S1.Peek(1) << std::endl; // 2 
	S1.Push(500);
	std::cout << "index 1 in Stack: " << S1.Peek(1) << std::endl; // 500
	std::cout << "index 1 in Stack: " << S1.Peek(3) << std::endl; // 1
	std::cout << "index 1 in Stack: " << S1.Peek(6) << std::endl; // 0

	return 0;
}
