//#include "Stack.h"
//#include<iostream>
//using namespace std;
//int main()
//{
// //   Stack s;
//	//cout<<boolalpha<<"s empty?"<<s.empty()<<endl;
//	///*for(int i=1;i<=128;i++)
//	//	s.push(i);
//	//cout<<"Stack should be full now\n";
//	//s.push(129);*/
//	//for(int i=1;i<=4;i++)
//	//	s.push(2*i);
//	//cout<<"Stack contents:"<<endl;
//	//s.display(cout);
//	//cout<<"s empty?"<<s.empty()<<endl;
//	//cerr<<"top value: "<<s.top()<<endl;
//	//while(!s.empty())
//	//{
//	//	cout<<"Popping "<<s.top()<<endl;
//	//	s.pop();
//	//}
//	//cout<<"s.empty?"<<s.empty()<<endl;
//    unsigned number,
//		     remainder;
//	Stack stackOfRemainders;
//	char response;
//	do
//	{
//		cout<<"endter positive integer to convert:";
//		cin>>number;
//		while(number!=0)
//		{
//			remainder=number&2;
//			stackOfRemainders.push(remainder);
//			number/=2;
//		}
//		cout<<"base-two representation:";
//		while(!stackOfRemainders.empty())
//		{
//			remainder=stackOfRemainders.top();
//			stackOfRemainders.pop();
//			cout<<remainder;
//		}
//		cout<<endl;
//		cout<<"\nMore (Y or N)?";
//		cin>>response;
//	}while( response=='y'||response=='Y');
//}
