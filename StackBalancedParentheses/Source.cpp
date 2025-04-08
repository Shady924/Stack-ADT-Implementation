#include<iostream>
#include<string>
#include<StackBassedArray.h>

bool parentheses(char open, char close) {
    if (open == '(' && close == ')')
        return true;
    else if (open == '{' && close == '}')
        return true;
    else if (open == '[' && close == ']')
        return true;
    else
        return false;
}


bool BalancedParentheses(std::string str){
    
    Stack <char> stk(10); 

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            stk.Push(str[i]);
        }
        if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            if (stk.Isempty()) {
                return false;
            }
            else if (parentheses(stk.StackTop(), str[i])) {
                stk.Pop();
            }
            else
                return false; 

        }
    }

    return stk.Isempty() ? 1 : 0; 

}

int main(){
    std::string str1 = "{([a+b]*[c+d])-(x)}";
    std::string str2 = "}{([a+b]*[c+d])-(x)}";
    std::string str3 = "{}([a+b]*[c+d])-(x)";
    std::string str4 = "{([a+b]*[c+d])}-(x)}";
    std::string str5 = "{([a+b]*[c+d])}-(x)";
    std::cout << std::boolalpha;
    std::cout << BalancedParentheses(str1) << std::endl;  // true 
    std::cout << BalancedParentheses(str2) << std::endl;  // false
    std::cout << BalancedParentheses(str3) << std::endl;  // true
    std::cout << BalancedParentheses(str4) << std::endl;  // false
    std::cout << BalancedParentheses(str5) << std::endl;  // true

    return 0; 
}
