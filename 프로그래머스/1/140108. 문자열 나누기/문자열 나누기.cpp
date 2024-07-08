#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    
    stack<char> stk;
    for(int i = 0; i < s.size(); i++)
    {
        if(stk.empty())
            stk.push(s[i]);
        else
        {
            if(stk.top() != s[i])
                stk.pop();
            else
                stk.push(s[i]);
        }
        
        if(stk.empty() || i == s.size()-1)
        {
            answer++;
        }
    }
    
    return answer;
}