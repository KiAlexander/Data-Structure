#include<vector>
using std::vector;
#include<iostream>
using namespace std;
class Node {
public:
	Node(int i) :data(i), next(0) {}
	int data;
	Node*next;
};
Node*creatList(int n) {
	Node*first=0, *p=0;
	for (int i = 1;i <= n;i++)
	{
		if (i == 1) p = first = new Node(i);
		else {
			Node*q = new Node(i);
			p->next = q;
			p = p->next;
		}
	}
	p->next = first;
	return first;
}
void Josephus(Node*first, int k)
{
	Node*p = first;
	Node*q = p->next;
	int i = 1;
	while (p != q) {
		if (p != q) {
			p = q;
			q = p->next;
			i++;
		}
		else {
			cout << p->data << " ";
			p->data = q->data;
			p->next = q->next;
			delete q;
			q = p->next;
			i = 1;
		}
	}
	cout << p->next << endl;
}
//int main()
//{
//	/*vector<int>ivec(2, 100);
//	ivec.push_back(3);
//	ivec.insert(ivec.begin(), 10);
//	vector<int>::iterator it = ivec.begin();
//	ivec.erase(++it);
//	ivec.pop_back();
//	ivec.insert(ivec.end(), 20);
//	for (it = ivec.begin();it != ivec.end();it++) cout << *it << " ";
//	cout << endl;*/
//
//	/*int a[] = { 1,2,3,4,5 };
//	vector<int>ivec(a, a + 5);
//	cout << "1.size:" << ivec.size() << endl;
//	ivec.resize(100);
//	cout << "2.size:" << ivec.size() << endl;
//	for (int j = 0;j < 95;j++)
//		ivec.insert(ivec.end(),j);
//	cout << "3.size:" << ivec.size() << endl;
//	ivec.resize(100);
//	ivec.reserve(20);
//	cout << "4.size:" << ivec.size() << endl;*/
//
//	int n, k;
//	cout << "please intput n,k" << endl;
//	cin >> n >> k;
//	//构造不带头结点的循环单链表
//	Node*first = creatList(n);
//	//约瑟夫环算法
//	Josephus(first, k);
//	return 0;
//}



