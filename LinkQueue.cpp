#include<iostream>
using namespace std;
template<class T>
struct Node
{
	T data;
	struct Node<T>*next;
};
template<class T>
class LinkQueue
{
public:
	LinkQueue()
	{
		front = rear = new Node<T>;
		front->next = NULL;
	}
	~LinkQueue();
	void Enqueue(T x);
	T Dequeue();
	T GetFront();
	T Getrear();
	bool Empty() {
		return front == rear ? true : false;
	}
private:
	Node <T> *front;
	Node <T> *rear;
};
template<class T>
T LinkQueue<T>::Getrear()
{
	if (!(rear->data)) throw "underflow";
	return rear->data;
}
template <class T>
void LinkQueue<T>::Enqueue(T x)
{
	rear->next = new Node<T>;
	rear = rear->next;
	rear->data = x;
	rear->next = NULL;
}
template <class T>
T LinkQueue<T>::Dequeue()
{
	Node<T>*p = front->next;
	if (!p)throw"ÏÂÒç";
	front->next = p->next;
	T x = p->data;
	delete p;
	if (!(front->next)) rear = front;
	return x;
}
template <class T>
T LinkQueue<T>::GetFront()
{
	if (!(front->next)) throw"ÉÏÒç";
	return front->next->data;
}
template <class T>
LinkQueue<T>::~LinkQueue()
{
	while (front)
	{
		rear = front->next;
		delete front;
		front = rear;
	}
}
//void main()
//{
//	LinkQueue<int> q;
//	int m[5] = { 1,2,3,4,5 };
//	for (int i = 0;i <5;i++)
//	{
//		q.Enqueue(m[i]);
//		cout << q.Getrear() << "	";
//	}
//	cout << q.Empty() << endl;
//	for (int i = 0;i <5;i++)
//	{
//		q.Dequeue();
//	}
//	cout << q.Empty() << endl;
//}