#include <iostream>
#include <stack>
#include <string>

using namespace std;

int solution(string s)
{
    int answer = 0;
    
    stack<char> input;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(input.empty() || input.top() != s[i])
            input.push(s[i]);
        else
            input.pop();
    }
    
    if(input.empty())
        answer = 1;
    return answer;
}