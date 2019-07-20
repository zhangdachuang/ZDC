#include<stdio.h>
#include<string>
#include<stack>
using namespace std; 
class Solution {
public:
    bool isValid(string const& s) {
        
        stack<char> charStack;
        size_t i = 0;
        
        while(i != s.length())
        {
            char c = s[i];
            if (c != ')' && c != '}' && c != ']')
            {
                charStack.push(c);
            }
            else
            {
                if (charStack.size() == 0)
                   return false;
 
                char pre = charStack.top();
                switch(c)
                {
                case ')':
                    if (pre == '(')
                      charStack.pop();
                    else 
                      return false;
                    break;
                      
                case '}':
                    if (pre == '{')
                      charStack.pop();
                    else 
                      return false;
                    break;
                    
                case ']':
                    if (pre == '[')
                      charStack.pop();
                    else 
                      return false;
                    break;
                }
            }
            ++i;
        }
        if (charStack.size() == 0)
           return true;
        else return false;
    }
};
int main (void)
{
    string c="([(])";
	bool y;
	Solution a;
	y = a.isValid(c);
	printf("y=%d",y);
	return 0;
}
