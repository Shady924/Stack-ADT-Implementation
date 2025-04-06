#pragma once

template<class T>
class Stack
{
private:
    T *arr;
    int size;
    int top;

public:
    Stack();
    Stack(int);
    ~Stack();
    bool Isempty() const;
    bool Full() const;
     void Push(const T&);
    T Pop();
    T Peek(int) const;
    T StackTop() const;
    void Display() const;
    int Length() const;
    int Getsize() const;
};

template<class T>
Stack<T>::Stack() : size(0), top(-1), arr(nullptr) {}

template<class T>
Stack<T>::Stack(int s) {
    if (s < 0) throw std::invalid_argument("Size cannot be negative");

    this->top = -1;
    this->size = s;
    this->arr = new T[s];

}

template<class T>
Stack<T>::~Stack() {

    delete[]arr;

}

template<class T>

bool Stack<T>::Isempty() const {

    return (this->top == -1);

}

template<class T>
bool Stack<T>::Full() const {

    return (this->top == this->size - 1);

}



template<class T>
void Stack<T>::Push(const T& x) {
    if (size == 0) {
        std::cout << "Stack not initialized\n";
        return;
    }
    if (Full()) {
        std::cout << "Stack overflow \n";
    }
    else {
        this->top++;
        this->arr[this->top] = x;
    }

}

template<class T>
T Stack<T>::Pop() {

    T x;
    if (Isempty()) {
        std::cout << "Stack underflow,";
        return T();
    }
    else {
        x = this->arr[this->top];
        top--;
    }

    return x;

}

template<class T>
T Stack<T>::Peek(int index) const {

    if (index > this->top + 1 || index < 1) {
        std::cout << "Invalid indix, ";
        return T();
    }
    else {
        return this->arr[this->top - index + 1];
    }

}

template<class T>
T Stack<T>::StackTop() const {

    if (this->top == -1){  
        std::cout << "Stack empty, ";
        return T();
    }
    return this->arr[this->top];

}

template<class T>
void Stack<T>::Display() const {

    if (Isempty())
        std::cout << "Stack is empty \n";
    else {
        for (int i = this->top; i >= 0; --i) {
            std::cout << this->arr[i] << " ";
        }
        std::cout << "\n";
    }

}

template<class T>
int Stack<T>::Length() const {
    return this->top + 1;

}

template<class T>
int Stack<T>::Getsize() const {

    return this->size;

}