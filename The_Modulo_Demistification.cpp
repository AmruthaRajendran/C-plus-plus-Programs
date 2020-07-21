// HackerEarth Problem

/* Question:
The Modulo Demystification
You are given three integers x,y and n.
Your task is to find the maximum integer k such that 0 ≤ k ≤n that k % x = y.
You have to answer t independent test cases. It is guaranteed that such k exists for each test case.

INPUT FORMAT:
    The first line contain an integer t.
    The next t lines contain integers x, y && n.

OUTPUT FORMAT:
    For each test case, print the answer — maximum non-negative integer k such that 0 ≤ k ≤ n and k % x = y.                     It is guaranteed that the answer always exists.

CONSTRAINTS:
    t (1≤t≤5*10000)
    2 ≤ x ≤ 1000000000; 0 ≤ y < x; y ≤ n ≤ 1000000000 */
    
// Program Code:

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int x,y,n;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y>>n;
		for(int k=n;k>-1;k--)
		{
      if(x>n && y==0)
      {
        cout<<0<<"\n";
        break;
      }
			if(k%x == y)
			{
				 cout<<k<<"\n";
			   break;
			}			  
		}
	}
	return(0);
}
