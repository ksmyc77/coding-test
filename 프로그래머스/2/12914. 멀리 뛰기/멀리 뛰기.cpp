#include <string>
#include <vector>

#define div 1234567 

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<long long> step;
    long long temp;
    for(int i = 0 ; i <= n; i++)
    {
        if(i <= 2)
            step.push_back(i);
        else
        {
            temp = (step[i-1]+step[i-2])%div;
            step.push_back(temp);
        }
    }
    answer = step.back();
    return answer;
}