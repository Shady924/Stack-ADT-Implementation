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
     void Push(T);
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

void Stack<T>::Push(T x) {

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

        std::cout << "Stack underflow \n";

        return -1;

    }

    else {

        x = this->arr[this->top];

        top--;

    }

    return x;

}



template<class T>

T Stack<T>::Peek(int index) const {

    T x = -1;

    if (index < this->size && this->top + index + 1 < 0) {

        std::cout << "Invalid index \n";

    }

    else {

        x = this->arr[this->top - index + 1];

    }

    return x;

}



template<class T>

T Stack<T>::StackTop() const {

    if (this->top == -1) return -1;

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