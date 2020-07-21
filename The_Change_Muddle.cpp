// HackerEarth Problem

/* Question: The Change Muddle
You go to a shop to buy a product, the cost of the product is N.
Unfortunately, you only have currency notes of denomination 1000.
What would be the change you would get when you buy the product.

INPUT FORMAT:
    The first line contain an integer T.
    The next T lines contain an integer N ( which is the cost of the product).

OUTPUT FORMAT:
    T lines contain a single integer which denotes the change for amount N.

CONSTRAINTS:
    1 <= T,N <= 10000 */

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
		int p = n/1000;
		int c = (p+1)*1000;
		if(n%1000 == 0)
		  cout<<0<<"\n;
		else
		  cout<<(c - n)<<"\n";
	}
	return(0);
}
