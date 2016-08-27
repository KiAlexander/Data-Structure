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
//void LinkList<T>::PrintList()//��ӡ����
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
//int LinkList<T>::GetLength()//��ȡ����
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
//LinkList<T>::~LinkList()//����
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
//T LinkList<T>::Delete(int i)//ɾ��
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
//LinkList<T>::LinkList(T a[], int n,bool m) //����
//{
//	if (m)
//	{
//		front = new Node<T>;//ͷ�巨
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
//		front = new Node<T>;//β�巨
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
//Node<T>*LinkList<T>::Get(int i)//��λ����
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
//int LinkList<T>::Locate(T x)//��ֵ����
//{
//	Node<T>*p = front->next;
//	int j = 1;
//	while (p)
//	{
//		if (p->data == x) return j;
//		p = p->next;
//		j++;
//	}
//	throw"����ֵ����";
//	return -1;
//}
//template<class T>
//void LinkList<T>::Insert(int i, T x)//����
//{
//	Node<T>*p = front;
//	if (i != 1) p = Get(i - 1);
//	if (p) {
//		Node<T>*s = new Node<T>;
//		s->data = x;
//		s->next = p->next;
//		p->next = s;
//	}
//	else throw"����λ�ô���";
//}
//
//#include<iostream>
//using namespace std;
//void main()
//{
//	int a[] = { 1,2,4,3,5,7,6,8,9,0 };
//	bool m;int x, y, z,M,N;
//	cout << "ͷ�巨����1��β�巨����0" << endl;
//	cin >> m;
//	LinkList<int> NUM(a,10,m);
//	NUM.PrintList();
//	cout <<"�õ�������Ϊ��"<< NUM.GetLength() << endl;
//	cout << "����Ҫ�����λ��M�������Ԫ��N" << endl;
//	cin >> M >> N;
//	try { NUM.Insert(M, N); }
//	catch (char*s) { cout << s << endl; }
//	cout << "�����ĵ�����" << endl;
//	NUM.PrintList();
//	cout << endl;
//	cout << "������Ҫ��ȡλ�õ�Ԫ��x" << endl;
//	cin >> x;
//	cout << "����" << x << "�������е�λ����Ϊ��";
//	try {
//		cout << " ��" << NUM.Locate(x) << "��" << endl;;
//	}
//	catch (char*p) { cout << p << endl; };
//	cout << "������Ҫ��ȡԪ��ֵ��λ��y" << endl;
//	cin >> y;
//	cout << "��" << y << "��λ�õ�Ԫ��Ϊ��" << NUM.Get(y)->data << endl;
//	cout << "��������ɾ����λ��z" << endl;
//	cin >> z;
//	cout << "ɾ����" << z << "��Ԫ��" << NUM.Delete(z) << "�������" << endl;
//	NUM.PrintList();
//}