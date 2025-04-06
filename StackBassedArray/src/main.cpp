#include<iostream>
#include "StackBassedArray.h"
    
int main(){
    Stack <int> S1;
    Stack <int> S2(5);
    std::cout << "Length Stack S1 " << S1.Length() << std::endl; // 0
    std::cout << "Length Stack S2 " << S2.Length() << std::endl; // 0
    std::cout << "S1 Isempty " << S1.Isempty() << std::endl; // 1
    std::cout << "S2 Isemtpy " << S2.Isempty() << std::endl; // 1
    std::cout << "size Stack S1 " << S1.Getsize() << std::endl; // 0
    std::cout << "size Stack S2 " << S2.Getsize() << std::endl; // 5 
    S1.Push(3); // Stack not initialized
    std::cout << "S1 Isempty " << S1.Isempty() << std::endl; // 1
    std::cout << " S1 : ";  S1.Display(); //Stack is empty
    S2.Push(3); S2.Push(2); S2.Push(1);
    std::cout << "S2 Isemtpy " << S2.Isempty() << std::endl; // 0
    std::cout << " S2 : ";  S2.Display(); // 1 2 3 
    std::cout << "Length Stack S2 " << S2.Length() << std::endl; // 3
    S2.Push(13); S2.Push(12); S2.Push(11);
    std::cout << " S2 : ";  S2.Display(); // 12 13 1 2 3    
    std::cout << "Length Stack S2 " << S2.Length() << std::endl; // 5
    std::cout << "S2 Full : " << S2.Full() << std::endl; // 1
    S2.Pop(); 
    std::cout << " S2 : ";  S2.Display(); // 13 1 2 3    
    std::cout << "Length Stack S2 " << S2.Length() << std::endl; // 4
    std::cout << "S2 Full : " << S2.Full() << std::endl; // 0
    std::cout << "index numer 3 : " << S2.Peek(3) << std::endl; // 2
    std::cout << "index numer 6 : " << S2.Peek(6) << std::endl; // 0
    std::cout << "index numer 0 : " << S2.Peek(0) << std::endl; // 0



    return 0;
}  