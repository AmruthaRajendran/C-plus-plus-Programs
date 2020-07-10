// Palindromic String
// The program prints YES if the given input string is Palindrome else print NO

// Program code

#include<iostream>
#include<string>
using namespace std;

int isPalindrome(string str)
{
	int n=str.length();
	for(int i=0;i<n;i++)
	{
		if(str[i]!=str[n-i-1])
		  return(0);
	}
	return(1);
}

int main()
{
  string str;
	cin>>str;
	int ans=isPalindrome(str);
	if(ans==1)
	  cout<<"YES";
	else 
	  cout<<"NO";
	return(0);
}
