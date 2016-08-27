//#include<iostream>
//#include<string>
//#include<cassert>
//using namespace std;
//#include "Stack.h"
//string RPN(string exp);
//int main()
//{
//	string exp;
//	cout<<"note:enter #for infix expression to stop.\n";
//	for(;;)
//	{
//		cout<<"\n infix expression?";
//		getline(cin,exp);
//		if(exp=="#") break;
//		cout<<"RPN Expression is "<<RPN(exp)<<endl;
//	}
//}
//string RPN(string exp)
//{
//	char token,topToken;
//	Stack opStack;
//	string RPNexp;
//	const string BLANK=" ";
//	for(unsigned int i=0;i<exp.length();i++)
//	{
//		token=exp[i];
//		switch (token)
//		{
//		case ' ': break;
//		case '(':opStack.push(token);
//			break;
//		case ')':for(;;)
//				 {
//					 assert(!opStack.empty());
//					 topToken=opStack.top();
//					 opStack.pop();
//					 if(topToken=='(') break;
//					 RPNexp.append(BLANK+topToken);
//				 }
//				 break;
//		case'+': case'-':
//		case'*': case'/':
//			for(;;)
//			{
//				if(opStack.empty()||
//					opStack.top()=='('||
//					(token=='*'||token=='/')&&
//					(opStack.top()=='+'||opStack.top()=='-')
//					)
//				{
//					opStack.push(token);
//					break;
//				}
//				else
//				{
//					topToken=opStack.top();
//					opStack.pop();
//					RPNexp.append(BLANK+topToken);
//				}
//			}
//			break;
//
//		default:
//			RPNexp.append(BLANK+token);
//		}
//	}
//	for(;;)
//	{
//		if(opStack.empty()) break;
//		topToken=opStack.top();
//		opStack.pop();
//		if(topToken!='(')
//		{
//			RPNexp.append(BLANK+topToken);
//		}
//		else
//		{
//			cout<<"***Error in infix expression ***\n";
//			break;
//		}
//	}
//	return RPNexp;
//}
//
//
