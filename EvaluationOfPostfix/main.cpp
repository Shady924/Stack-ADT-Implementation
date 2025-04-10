#include<iostream>
#include<evaluatePostfix.h>

int main() {

	std::string str1 = "2^2^2" ; 
	std::cout << evaluateExpression(str1) << std::endl;  // 16
	std::string str2 = "3*5+6/2-4";  
	std::cout << evaluateExpression(str2) << std::endl;   // 14

	return 0; 
}