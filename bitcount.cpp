// HackerEarth Problem

/* Question:
The Singular Lust
You are given a number N. The task is to find the number of set bits in that number.

A set bit is a bit position set as 1 in the binary representation of a number.

INPUT FORMAT:
    The first line contains a single integer T.
    The Next T lines contain single integers N.

OUTPUT FORMAT:
    The T lines contain a single integer representing the number of set bits in each N.

CONSTRAINTS:
    T <= 100000
    N <= 50000 */
    
// Program Code

#include<iostream>
using namespace std;
int bitcount(int n)
{
	int ans=0;
	while(n)
	{
		ans += n & 1;
		n >>= 1;
	}
	return(ans);
}
int main()
{
	int t,n,result;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		result = bitcount(n);
		cout<<result<<"\n";
	}
	return(0);
}
