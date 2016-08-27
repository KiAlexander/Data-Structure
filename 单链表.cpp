//#include <atlstr.h>
//template<class T>
//struct Node
//{
//	T data;
//	struct  Node<T>*next;
//
//};
//template<class T>
//class LinkList
//{
//public:
//	LinkList()
//	{
//		front = new Node<T>;
//		front->next = NULL;
//	}
//	LinkList(T a[], int n,bool m);
//	~LinkList();
//	void PrintList();
//	int GetLength();
//	Node<T>*Get(int i);
//	int Locate(T x);
//	void Insert(int i, T x);
//	T Delete(int i);
//private:
//	Node<T>*front;
//
//};
//template<class T>
//void LinkList<T>::PrintList()//打印链表
//{
//	cout << "print each element in order" << endl;
//	Node<T> *p = front->next;
//	while (p)
//	{
//		cout << p->data << "	";
//		p = p->next;
//	}
//}
//template<class T>
//int LinkList<T>::GetLength()//获取长度
//{
//	int j = 0;
//	Node<T> *p = front->next;
//	while (p)
//	{
//		p = p->next;
//		j++;
//	}
//	return j;
//}
//template<class T>
//LinkList<T>::~LinkList()//析构
//{
//	Node<T>*p = front;
//	while (p)
//	{
//		front = p;
//		p = p->next;
//		delete front;
//	}
//}
//template<class T>
//T LinkList<T>::Delete(int i)//删除
//{
//	Node<T>*p = front;
//	if (i != 1) p = Get(i - 1);
//	Node<T>*q = p->next;
//	p->next = q->next;
//	T x = q->data;
//	delete q;
//	return x;
//}
//template<class T>
//LinkList<T>::LinkList(T a[], int n,bool m) //构造
//{
//	if (m)
//	{
//		front = new Node<T>;//头插法
//		front->next = NULL;
//		for (int i = n - 1;i >= 0;i--)
//		{
//			Node<T>*s = new Node<T>;
//			s->data = a[i];
//			s -> next = front->next;
//			front->next = s;
//		}
//	}
//	else
//	{
//		front = new Node<T>;//尾插法
//		Node<T>*r = front;
//		for (int i = 0;i < n;i++)
//		{
//			Node<T>*s = new Node<T>;
//			s->data = a[i];
//			r->next = s;
//			r = s;
//		}
//		r->next = NULL;
//	}
//
//}
//
//template<class T>
//Node<T>*LinkList<T>::Get(int i)//按位查找
//{
//	Node<T>*p = front->next;
//	int j = 1;
//	while (p&&j != i)
//	{
//		p = p->next;
//		j++;
//	}
//	return p;
//}
//template<class T>
//int LinkList<T>::Locate(T x)//按值查找
//{
//	Node<T>*p = front->next;
//	int j = 1;
//	while (p)
//	{
//		if (p->data == x) return j;
//		p = p->next;
//		j++;
//	}
//	throw"查找值有误";
//	return -1;
//}
//template<class T>
//void LinkList<T>::Insert(int i, T x)//插入
//{
//	Node<T>*p = front;
//	if (i != 1) p = Get(i - 1);
//	if (p) {
//		Node<T>*s = new Node<T>;
//		s->data = x;
//		s->next = p->next;
//		p->next = s;
//	}
//	else throw"插入位置错误";
//}
//
//#include<iostream>
//using namespace std;
//void main()
//{
//	int a[] = { 1,2,4,3,5,7,6,8,9,0 };
//	bool m;int x, y, z,M,N;
//	cout << "头插法输入1，尾插法输入0" << endl;
//	cin >> m;
//	LinkList<int> NUM(a,10,m);
//	NUM.PrintList();
//	cout <<"该单链表长度为："<< NUM.GetLength() << endl;
//	cout << "输入要插入的位置M、插入的元素N" << endl;
//	cin >> M >> N;
//	try { NUM.Insert(M, N); }
//	catch (char*s) { cout << s << endl; }
//	cout << "插入后的单链表：" << endl;
//	NUM.PrintList();
//	cout << endl;
//	cout << "输入需要获取位置的元素x" << endl;
//	cin >> x;
//	cout << "数字" << x << "在链表中的位置中为：";
//	try {
//		cout << " 第" << NUM.Locate(x) << "个" << endl;;
//	}
//	catch (char*p) { cout << p << endl; };
//	cout << "输入需要获取元素值的位置y" << endl;
//	cin >> y;
//	cout << "第" << y << "个位置的元素为：" << NUM.Get(y)->data << endl;
//	cout << "输入所需删除的位置z" << endl;
//	cin >> z;
//	cout << "删除第" << z << "个元素" << NUM.Delete(z) << "后的链表：" << endl;
//	NUM.PrintList();
//}