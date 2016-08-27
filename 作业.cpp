//
#include"stack"
#include"string"
#include<iostream>
using namespace std;
bool checkExpression(const char*a)
{
	int i = 0;
	stack<char>s;
	while (a[i])
	{
		if (a[i] == '(')s.push(a[i]);
		else if (a[i] == ')'&&!s.empty()) s.pop();
		else if (a[i] == ')') return 1;
		i++;
	}
	if (!s.empty()) return 1;
	else return 0;
}
//void main()
//{
//	string s ;
//	
//		cout << "please input expression (Ctrl+cbreak):" << endl;
//		cin >> s;
//		int ret = checkExpression(s.c_str());
//		if (ret) cout << "expression error" << endl;
//		else cout << "expression ok" << endl;
//			
//
//}

void Bubble(int r[], int n)
{
	int pos = n, firstpos = 1;
	while (firstpos < pos)
	{
		int a = firstpos + 1;
		int b = pos - 1;
		for (int i = firstpos;i < pos;i++)
		{
			if (r[i] > r[i + 1])
			{
				r[0] = r[i];r[i] = r[i + 1];r[i + 1] = r[0];b = i;
			}
			
		}
		pos = b;
		for (int i = pos;i > firstpos;i--)
		{
			if (r[i] < r[i - 1])
			{
				r[0] = r[i];r[i] = r[i - 1];r[i - 1] = r[0];a = i;
			}
		}
		firstpos = a;
	}
		for (int i = 1;i <= n;i++)
		cout << r[i] << endl;
}
//快速排序的一趟
int Partion(int r[], int first, int end)
{
	int i = first;                          //分区的左界
	int j = end;                            //分区的右界
	int pivot = r[i];                       //保存第一个元素，作为基准元素
	while (i < j)
	{
		
		while ((i<j) && (r[j]>pivot))       //右侧扫描，寻找小于pivot的元素前移
		{

			j--;
		}
		r[i] = r[j];

		while ((i < j) && (r[i] <= pivot))  //左侧扫描，寻找大一pivot的元素后移
		{
	
			i++;
		}
		r[j] = r[i];

	}
	r[i] = pivot;                           //将轴值移动至i=j的位置
	for (int i = 1;i <5;i++)
		cout << r[i];
	return i;                               //返回分区的分界值
}
//快速排序
void Qsort(int r[], int i, int j)
{
	if (i < j)
	{
		int pivotloc = Partion(r, i, j);
		Qsort(r, i, pivotloc - 1);       //左分区快速排序
		Qsort(r, pivotloc + 1, j);       //右分区快速排序
	}
}
void F(int r[], int n)
{
	int i = 1, j = n;
	while (i < j)
	{
		if ((i < j) && (r[j] % 2 == 0)) j--;
		if ((i < j) && (r[i] % 2 == 1)) i++;
	
		int t = r[i];r[i] = r[j];r[j] = t;
	}
	for (int i = 1;i <=n;i++)
		cout << r[i];
}
void main()
{
	int a[5] = { NULL,4,3,2,1};
	/*Bubble(a, 5);*/
	//F(a,5 );
	Qsort(a, 1, 4);
}