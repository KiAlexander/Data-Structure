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
//���������һ��
int Partion(int r[], int first, int end)
{
	int i = first;                          //���������
	int j = end;                            //�������ҽ�
	int pivot = r[i];                       //�����һ��Ԫ�أ���Ϊ��׼Ԫ��
	while (i < j)
	{
		
		while ((i<j) && (r[j]>pivot))       //�Ҳ�ɨ�裬Ѱ��С��pivot��Ԫ��ǰ��
		{

			j--;
		}
		r[i] = r[j];

		while ((i < j) && (r[i] <= pivot))  //���ɨ�裬Ѱ�Ҵ�һpivot��Ԫ�غ���
		{
	
			i++;
		}
		r[j] = r[i];

	}
	r[i] = pivot;                           //����ֵ�ƶ���i=j��λ��
	for (int i = 1;i <5;i++)
		cout << r[i];
	return i;                               //���ط����ķֽ�ֵ
}
//��������
void Qsort(int r[], int i, int j)
{
	if (i < j)
	{
		int pivotloc = Partion(r, i, j);
		Qsort(r, i, pivotloc - 1);       //�������������
		Qsort(r, pivotloc + 1, j);       //�ҷ�����������
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