#include<iostream>
using namespace std;
template<class T>
struct Node
{
	T data;
	struct Node<T>*next;
};
template<class T>
class LinkStack
{
public:
	LinkStack() { top = NULL; }
	~LinkStack();
	void Push(T x);
	T Pop();
	T GetTop();
	bool Empty() { return(NULL == top) ? true : false;}
private:
	struct Node<T>*top;
};
template<class T>
T LinkStack<T>::GetTop()
{
	if (Empty()) throw"underflow";
		return top->data;
}
template<class T>
void LinkStack<T>::Push(T x)
{
	Node<T>*p = new Node<T>;
	p->data = x;
	p->next = top;
	top = p;
}
template<class T>
T LinkStack<T>::Pop()
{
	if (Empty())throw"ÏÂÒç";
	T x = top->data;
	Node<T>*p = top;
	top = top->next;
	delete p;
	return x;
}
template<class T>
LinkStack<T>::~LinkStack()
{
	while (top)
	{
		Node<T>*p = top;
		top = top->next;
		delete p;
	}
}
//void main()
//{
//	LinkStack<int> T;
//	T.Push(2);
//	cout << T.GetTop() << endl;
//	cout << T.Pop() << endl;
//	cout << T.Empty() << endl;
//}