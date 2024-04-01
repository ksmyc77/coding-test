#include <stack>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    
    int answer = 0;
    stack<char> str;
    string temp = s;
    if(s.size()%2 != 0)
        return 0;
    
    for(int k = 0; k < s.length(); k++)
    {
        for(int i = 0; i < temp.length(); i++)
        {
            if(temp[0] == ']'||temp[0]=='}'||temp[0]==')') 
                break;
            else
            {
                if(str.empty()) 
                    str.push(temp[i]);
                else if(str.top()=='['  && temp[i] == ']')
                    str.pop();
                else if(str.top()=='{'  && temp[i] == '}')
                    str.pop();
                else if(str.top()=='('  && temp[i] == ')')
                    str.pop();
                else
                    str.push(temp[i]);
            }
            
            if(i == temp.length()-1)
            {
                if(str.empty())
                    answer++;
                else
                {
                    while(!str.empty())
                        str.pop();
                }
            }
        }
                   
        temp += temp[0];
        temp.erase(0,1);
    }
    
    return answer;
}