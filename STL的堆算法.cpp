//#include<iostream>
//#include<cmath>
//#include<iomanip>
//#include<algorithm>
//using namespace std;
//template<typename DataType>
//void PrintTree(DataType x[],int n);
//template<typename DataType>
//void PrintOneRow(DataType x[],int numRows,int row,int row_begin,int row_end);
//int main()
//{
//	int x[11]={87,35,74,67,79,84,76,73,81,32};
//	make_heap(x,x+10);
//	PrintTree(x,10);
//	x[10]=83;
//	push_heap(x,x+11);
//	cout<<"After push_heap(83):\n\n";
//	PrintTree(x,11);
//    pop_heap(x,x+11);
//	cout<<"After pop_heap(83):\n\n";
//	PrintTree(x,10);
//	sort_heap(x,x+10);
//	cout<<"After sort_heap(),array contains:\n\n";
//	for(int i=0;i<10;i++)
//	 cout<<x[i]<<" ";
//	cout<<endl;
//}
//template<typename DataType>
//void PrintOneRow(DataType x[],int numRows,int row,int row_begin,int row_end)
//{
//
//	int skip=int(pow(2,numRows-row)-1);
//	for(int i=row_begin;i<=row_end;i++)
//	{
//		cout<<setw(skip)<<" ";
//		cout<<setw(2)<<x[i];
//		cout<<setw(skip)<<" ";
//	};
//	cout<<endl<<endl;
//}
//template<typename DataType>
//void PrintTree(DataType x[],int n)
//{
//	int row_begin=0,row_end=0,rowslen,numRows=int(ceil(log(n)/log(2)));
//	for(int row=0;row<numRows;row++)
//	{
//		PrintOneRow(x,numRows,row,row_begin,row_end);
//		rowslen=row_end-row_begin+1;
//		row_begin=row_end+1;
//		row_end=min(row_end+2*(rowslen),n-1);
//	}
//}
//
//
//	
//
//
//
