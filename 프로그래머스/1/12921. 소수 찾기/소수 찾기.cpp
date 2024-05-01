#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;

    vector<bool> isPrime;
    for(int i = 0; i <= n+1; i++) 
    {
        if(i == 0||i == 1) isPrime.push_back(false);
        else isPrime.push_back(true);
    }
    for(int i = 2; i*i <= n; i++)
    {
        if(isPrime[i])
        {
            for(int j = i*i; j <=n; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        if(isPrime[i]) answer++;
    }
    
    return answer;
}