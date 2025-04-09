#include<iostream>
#include<string>
#include<StackBassedArray.h>

bool IsOpperator(char op) {
	
	if (op == '+' || op == '-' || op == '*' || op == '^' || op == '/' || op == '%')
		return true;
	else
		return false;

}


int Precedence(char op) {

	if (op == '-' || op == '+')
		return 1;
	else if (op == '%' || op == '/' || op == '*')
		return 2;
	else if (op == '^')
		return 3;
	else
		return 0;

}

std::string InfixToPostfix(std::string str) {

	Stack <char> stk(100);
	std::string result = "";

	for (int i = 0; i < str.length(); ++i) {

		if (isdigit(str[i]) || isalpha(str[i]))
			result += str[i]; 
		else if (str[i] == '(')
			stk.Push(str[i]);
		else if (str[i] == ')')
		{
			while (stk.StackTop() != '(')
			{
				result += stk.StackTop();
				stk.Pop();
			}
			stk.Pop();
		}
		else if (IsOpperator(str[i]))
		{
			while (!stk.Isempty() && ( Precedence(str[i]) <= Precedence(stk.StackTop()) ))
			{
				result += stk.StackTop();
				stk.Pop();
			}
			stk.Push(str[i]);
		}
		
	}

	while (!stk.Isempty())
	{
		result += stk.StackTop();
		stk.Pop();
	}

	return result;
}