#include<iostream>
#include "StackBassedArray.h"

Stack::Stack() : size(0) , top(-1) , arr(nullptr) {}

Stack::Stack(int s) {
    this->top = -1;
    this->size = s; 
    this->arr = new int[s];
}

Stack::~Stack(){
    delete []arr; 
}

bool Stack::Isempty() const{
    return (this->top == -1);
}

bool Stack::Full () const{
    return (this->top == this->size-1);
}

void Stack::Push(int x) {
    if (Full()) {
        std::cout << "Stack overflow \n";
    }
    else {
        this->top++;
        this->arr[this->top] = x;
    }
}

int Stack::Pop() {
    int x = -1;
    if (Isempty()) {
        std::cout << "Stack underflow \n";
    }
    else {
        x = this->arr[this->top]; 
        top--;
    }
    return x; 
}

int Stack::Peek(int index) const{
    int x = -1;
    if ( index < this->size && this->top + index + 1 < 0) {
        std::cout << "Invalid index \n";
    }
    else {
        x = this->arr[this->top - index + 1];
    }
    return x; 
}

int Stack::StackTop() const{
    if (this->top == -1) return -1; 
    return this->arr[this->top];
}


void Stack::Display() const {
    if (Isempty())
        std::cout << "Stack is empty \n";
    else {
        for (int i = this->top; i >= 0; --i) {
            std::cout << this->arr[i] << " ";
        }
        std::cout << "\n";
    }
}
 
int Stack::Length() const {
    return this->top + 1; 
}

int Stack::Getsize() const {
    return this->size; 
}