#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int size = p.size();
    long long y = stol(p);
    string temp;
    //1번 문자열 자르기
    for(int i = 0; i < t.size()-size+1; i++)
    {
        temp = t.substr(i, size);
        long long x = stol(temp);

        if(x <= y)
            answer++;
    }
    //2번 자른 문자열과 주어진 p 비교하기
    
    //3번 만약 작은 문자열이면 answer++;
    
    return answer;
}