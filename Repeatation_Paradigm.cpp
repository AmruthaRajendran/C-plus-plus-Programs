// HackerEarth Problem

/* Question:
The Repetition Paradigm
You will be given threee numbers k, a and, b. You have to perform the below operations k times:

Operations:

1) If a and b are of same sign, subtract one from both.
2) If a and b are of oppostie sign then add one to both.
3) If a or b or both are zero, then print -1 and exit execution

If state 3 is never reached, you have to print the final values of a and b.

INPUT FORMAT:
    First line contains integer k.
    Second line contains two integers a & b.

OUTPUT FORMAT:
    Print a and b with space between them. */
    
// Program Code

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(a==0 || b==0)
		{
			cout<<-1;
			exit(0);
		}
		else
		{
			if((a>0 && b>0) || (a<0 && b<0))
			{
				a--;
				b--;
			}
			else
			{
				b++;
				a++;
			}
		}
	}
	cout<<a<<" "<<b;
	return(0);
}
