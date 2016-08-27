#include<iostream>
using namespace  std;
const int StackSize = 1024;
template<class T>
class Seqstack
{
public:
	Seqstack() { top = -1;}
	void Push(T x);
	T Pop();
	T GetTop();
	bool Empty();
private:
	T data[StackSize];
	int top;
};
template<class T>
bool Seqstack<T>::Empty()
{
	return -1 == top ? true : false;
}
template<class T>
void Seqstack<T>::Push(T x)
{
	if (top >= StackSize - 1) throw"иорГ";
		top++;
	data[top] = x;
}
template<class T>
T Seqstack<T>::Pop()
{
	if (Empty()) throw"обрГ";
	top--;
	return data[top + 1];
}
template<class T>
T Seqstack<T>::GetTop()
{
	if (Empty()) throw"обрГ";
	return data[top];
}
//void main()
//{
//	Seqstack<int> S;
//	int a[5] = { 1,2,3,4,5 };
//	for (int i = 0;i < 5;i++)
//	{
//		S.Push(a[i]);
//		cout << S.GetTop() << "	";
//	}
//	S.Pop();
//	
//		cout << S.GetTop() << "	";
//	
//	
//}