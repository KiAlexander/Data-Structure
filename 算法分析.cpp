//#include<iostream>
//#include<string>
//#include<cctype>
//using  namespace std;
//bool ValidExpression(string &expr,int &position);
//bool ValidTerm(string &expr,int &position);
//bool ValidFactor(string &expr,int &position);
//void GetChar(const string &str,char &ch,int &pos);
//int main()
//{
//	string expr;
//	for(;;)
//	{
//		cout<<"\nenter arithmetic expression(# to stop):";
//		getline(cin,expr);
//		if(expr=="#") break;
//		//分析表达式
//	    int position=-1;
//		if(ValidExpression(expr,position) &&
//			position=expr.length()-1)
//			cout<<"valid expression"<<endl;
//		else
//			cout<<"not a valid expression"<<endl;
//	}
//}
//bool ValidExpression(string &expr,int &position)
//{
//	if(ValidTerm(expr,position))
//	{
//		char symbol;
//		GetChar(expr,symbol,position);
//		if(symbol=='+'||symbol=='-')
//			return ValidTerm(expr,position);
//		position--;
//		return true;
//	}
//	return false;
//}
//bool ValidTerm(string &expr,int &position)
//{
//	if(ValidFactor(expr,position))
//	{
//		char symbol;
//		GetChar(expr,symbol,position);
//		if(symbol=='*'||symbol=='/')
//			return ValidFactor(expr,position);
//	    position--;
//		return true;
//		}
//	return false;
//}
//bool ValidFactor(string &expr,int &position)
//{
//	char symbol;
//	GetChar(expr,symbol,position);
//	if(symbol=='(')
//	{
//     if(ValidExpression(expr,position))
//	 {
//		 GetChar(expr,symbol,position);
//		 return(symbol=='(');
//	 }
//	 else
//		 return false;
//	}
//	 return isalnum(symbol);
//}
//void GetChar(const string &str,char&ch,int& pos)
//{
// for(;;)
// {
//	 pos++;
//	 if(pos==str.length())
//		 ch=';';
//	 else
//		 ch=str[pos];
//	 if(!isspace(ch)) return;
// }
//}
//
//
//
//
