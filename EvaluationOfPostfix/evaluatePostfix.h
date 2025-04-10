#include <iostream>
#include <string>
#include "StackBassedArray.h"
#include "InfixToPostfixConversion.h"


float evaluateExpression(std::string in){ 
    
    std::string str = InfixToPostfix(in);
    Stack <float> stk(10);
    float x1 , x2 , r;
    
    for(int i = 0 ; i < str.length() ; ++i){
        if (std::isdigit(str[i]))
		    stk.Push(static_cast<float>(str[i] - '0')); 
        else{
            x2 = stk.Pop(); 
            x1 = stk.Pop();
            switch(str[i]){
                case '+' : r = x1 + x2 ; stk.Push(r); break; 
                case '-' : r = x1 - x2 ; stk.Push(r); break; 
                case '*' : r = x1 * x2 ; stk.Push(r); break; 
                case '/' : r = x1 / x2 ; stk.Push(r); break; 
                case '%' : r = static_cast<int>(x1) % static_cast<int>(x2) ; stk.Push(r); break; 
                case '^' : r = std::pow(x1,x2) ; stk.Push(r); break;
                default:
                    throw std::runtime_error("Unknown operator");
            }
        }
    }

    return stk.Pop();

}
