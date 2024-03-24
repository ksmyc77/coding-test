#include <string>
#include <vector>

using namespace std;

int checkone(int n);

int solution(int n) {
    int answer = n;
    while(1)
    {
        answer++;
        if(checkone(n)==checkone(answer))
            break;
    }
    
    return answer;
}

int checkone(int n)
{
    int cnt = 0;
    for(; n > 0; n/=2)
    {
        if((n%2) == 1)
            cnt++;

    }
    return cnt;
}