//#include<iostream>
//using namespace std;
//class NaturalNumber {
//public:
//	unsigned long int MaxDivisor(NaturalNumber &nn);
//	unsigned long int MaxMultiple(NaturalNumber &nn);
//	void GetFactors();
//	NaturalNumber(int a);
//private:
//	unsigned long int num;
//
//};
////unsigned long int NaturalNumber::num = 96;
//NaturalNumber::NaturalNumber(int a)
//{
//	num = a;
//}
//unsigned long int NaturalNumber::MaxDivisor(NaturalNumber &nn)
//{
//	unsigned long int m = (num > nn.num) ? num : nn.num;
//	unsigned long int n = (num < nn.num) ? num : nn.num;
//	unsigned long int r = m%n;
//	while (r!=0)
//	{
//		m = n;
//		n = r;
//		r = m%n;
//	}
//	return n;
//}
//unsigned long int NaturalNumber::MaxMultiple(NaturalNumber &nn)
//{
//	return num*nn.num / MaxDivisor(nn);
//}
//void NaturalNumber::GetFactors()
//{
//	for (unsigned long int i=1;i<=num;i++)
//	{
//		if (num%i == 0)
//			cout << i << "	";
//	}
//}
//int main()
//{
//	unsigned long int m, n;
//	cin >> m >> n;
//	NaturalNumber NUM(m);
//	NaturalNumber NUM1(n);
//	cout<<NUM.MaxDivisor(NUM1)<<endl;
//	cout<< NUM.MaxMultiple(NUM1)<<endl;
//	NUM.GetFactors();
//}