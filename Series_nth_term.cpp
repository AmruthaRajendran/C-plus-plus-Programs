// HackerEarth Problem

/* Question: 
The Series Detoxication
Sasha is little girl who hates mathematics.

Even basic mathematics is a nightmare for her.

Today she got a homework question, which she has to submit tomorrow.

The question is to find the Nth term of the following series
    1, 3, 6, 10, ...

You are Sasha's last hope. Help her solve the questions.

INPUT FORMAT:
    The first line contain an integer T.
    The next T lines contain an integer N.

OUTPUT FORMAT:
    T lines contain a single integer which denotes the N th term.

CONSTRAINTS:
    1 <= T, N <= 1000 */
    
// Program Code:

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int ans=(n*(n+1)/2);
		cout<<ans<<"\n";
	}
	return(0);
}
