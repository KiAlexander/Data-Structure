#include<iostream>
using namespace std;
const int QueueSize = 1000;
template<class T>
class CircleQueue
{
public:
	CircleQueue() { front = rear = 0; }
	void EnQueue(T x);
	T Dequeue();
	T GetFront();
	int GetLength();
	bool Empty()
	{
		return front == rear ? true : false;
	}
private:
	T data[QueueSize];
	int front;
	int rear;
};
template<class T>
T CircleQueue<T>::Dequeue()
{
	if (rear == front)throw"…œ“Á";
	front = (front + 1) % QueueSize;
	return data[front];
}
template<class T>
void CircleQueue<T>::EnQueue(T x)
{
	if ((rear + 1) % QueueSize == front) throw "…œ“Á";
	rear = (rear + 1) % QueueSize;
	data[rear] = x;
}
template<class T>
T CircleQueue<T>::GetFront()
{
	if (rear == front) throw"œ¬“Á";
	return data[(front + 1) % QueueSize];
}
template<class T>
int CircleQueue<T>::GetLength()
{
	return (rear - front + QueueSize) % QueueSize;
}
//void main()
//{
//	CircleQueue<int> M;
//	int a[5] = { 1,2,3,4,5 };
//	cout << M.Empty() << endl;
//	for (int i = 0;i < 5;i++)
//	{
//		M.EnQueue(a[i]);
//	}
//	cout << M.GetFront() << endl;
//	M.Dequeue();
//	cout << M.GetFront() << endl;
//	cout << M.GetLength();
//}