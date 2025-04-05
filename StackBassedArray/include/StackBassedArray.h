#pragma once

class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack();
    Stack(int);
    ~Stack();
    bool Isempty() const;
    bool Full() const;
    void Push(int);
    int Pop();
    int Peek(int) const;
    int StackTop() const;
    void Display() const;
    int Length() const;
    int Getsize() const;
};
