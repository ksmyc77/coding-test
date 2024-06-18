#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> q(works.begin(), works.end());
    while(n > 0)
    {
        if(q.top() > 0)
        {
            int temp = q.top();
            q.pop();
            q.push(temp - 1);
            n--;
        }
        else
        {
            break;
        }
    }
    while(!q.empty())
    {
        int temp = q.top();
        answer += temp*temp;
        q.pop();
    }
    return answer; 
}