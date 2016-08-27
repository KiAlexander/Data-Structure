//#include<iostream>
//#include<cassert>
//#include<bitset>
//using namespace std;
//int main()
//{
//	const int MAX_PRIME=1000;
//	int n;
//	cout<<"This program finds primes in the range 2-n."
//		<<"\nEnter positive integer n<="<<MAX_PRIME<<":";
//	cin>>n;
//	assert(n>0&&n<=MAX_PRIME);
//	bitset<MAX_PRIME+1> sieve;
//	sieve.set();
//	int prime=2;
//	while (prime*prime<=n)
//	{
//		for(int mult=2*prime;mult<=n;mult+=prime)
//			sieve.reset(mult);
//		do 
//		{
//			prime++;
//		
//		}while (!sieve.test(prime));
//	}
//	cout<<"\nPrimes in the range 2 through"<<n<<":\n";
//		for(int i=2;i<=n;i++)
//			if(sieve.test(i))
//				cout<<i<<" ";
//}
//
