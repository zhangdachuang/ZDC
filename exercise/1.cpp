#include<stdio.h>
#include<string>
using namespace std;
class Solution
{
	public:
	bool isPalindrome (string s)
	{
		int i,j,n,k=0;
		bool l=0;
		n=s.size();
		for ( i = 0; i < n ; i++)
		{
			if(((s[i]>='a')&&(s[i] <= 'z'))||((s[i]>='A')&&(s[i]<='Z')))
			{	
				s[k++]=s[i];
			}
		}
		for(i=0,j=k-1;i<=k/2;i++,j--)
		{
			if ((s[i] == s[j])||(s[i]==(s[j]+32))||(s[i]==(s[j]-32)))
			{
				l=1;		
			}
			else
			{
				l=0;
			}
		}
		return l;
	}
};
int main (void)
{
	//string s="A man,a plan,a canal:Panama";
	string s="race a ecar";
	Solution a;
	bool y = a.isPalindrome(s);
	printf("y=%d",y);
	return 0;
}
