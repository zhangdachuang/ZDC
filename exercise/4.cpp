#include<stdio.h>
//using namespace std;
class Solution {
public:
    int lengthOfLastWord(const char *s) {
        if(s[0]=='\0') 
		{
			return 0;
		}
        int ans = 0, cnt = 0;
        for(int i = 0; s[i]!='\0'; i ++)
		{
            if(s[i]==' ')
			{
                if(cnt != 0)
				{
					ans = cnt;
				}
                cnt = 0;
            }
			else
			{
                cnt ++;
            }
        }
        if(cnt != 0) 
		{
			ans = cnt;
		}
        return ans;
    }
};
int main (void)
{
	const char* c="Hello world hahaha ";
	Solution a;
	int B = a.lengthOfLastWord(c);
	printf("B=%d",B);
	return 0;
}
