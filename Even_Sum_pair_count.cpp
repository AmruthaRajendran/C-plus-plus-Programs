// HackerEarth Program

/* Question
Bi
You are given an integer N and N integers from A0,..,An-1.
Calculate the number of pairs that will give an even sum.

INPUT FORMAT:
    The first line contains an integer N.
    The next line contains N integers, A0, ..., An-1.

OUTPUT FORMAT:
    Print the number of such possible pairs

CONSTRAINTS:
    N <= 30000
    Ai <=1000000 */

// Program Code

#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((arr[j]+arr[i])%2 == 0)
			  count++;
		}
	}
	cout<<count;
	return(0);
}
