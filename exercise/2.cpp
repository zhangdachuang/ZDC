#include<stdio.h>
#include<string>
using namespace std;
class Solution {
public:
	string addBinary(string a, string b) {
		string str;
		string result;
		char temp;
		str = a.length() > b.length() ? a : b;
		int carry = 0, sum;
		int len = a.length() > b.length() ? b.length() : a.length();
		for (int i = 0; i < len; i++)
		{
			sum = a[a.length() - 1 - i] - '0' + b[b.length() - 1 - i] - '0' + carry;
			temp = sum % 2 + '0';
			result = temp + result;
			carry = sum / 2;
		}
		for ( i = str.length() - len - 1; i >= 0; i--)
		{
			sum = carry + str[i] - '0';
			temp = sum % 2 + '0';
			result = temp + result;
			carry = sum / 2;
		}
		if (carry == 1)
			result = "1" + result;
		while (result[0] == '0' && result.length() > 1)
			result = result.substr(1, result.length() - 1);
		return result;
	}
};
int main (void)
{
	string a="110";
	string b="11";
	Solution c;
	string y = c.addBinary(a,b);
	for(int i=0;i<y.size();i++)
	{
		printf("%c\n",y[i]);
	}
	return 0;
}