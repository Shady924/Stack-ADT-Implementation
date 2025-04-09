#include<iostream>
#include<string>
#include"InfixToPostfixConversion.h"

int main(){
    std::string str1 = "a+b*c-d";  
    std::string str2 = "a*b-(c+d)+e";  
    std::string postfix1 = InfixToPostfix(str1);
    std::string postfix2 = InfixToPostfix(str2);

    std::cout << postfix1 << std::endl; // abc*+d-
    std::cout << postfix2 << std::endl; // ab*cd+-e+

    return 0; 
}