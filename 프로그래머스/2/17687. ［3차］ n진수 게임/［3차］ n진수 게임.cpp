#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string num = "0123456789ABCDEF";

string convert(int input, int n)
{
    if(n == 0) return "0";
    
    string value = "";
    
    while(input > 0)
    {
        value += num[input%n];
        input /= n;
    }
    
    reverse(value.begin(),value.end()); 
    return value;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    string result = "0";
    int order = p - 1;  // 말하는 순서
    int interval = m;   // 참가 인원수
    
    int num = 0;
    
    while(result.size() <= t*m)
    {
        result += convert(num++, n);
    }
    
    for(int i = order; i < t*m; i += m)
        answer += result[i];
    
    cout<<result<<endl;
    return answer;
}