#include <string>
#include <vector>

using namespace std;

int cnt = 0;

void solve(vector<int> numbers, int target, int sum, int index)
{
    if(index == numbers.size())
       {
           if(sum == target)
               cnt++;
            return;
       }
    solve(numbers, target, sum+numbers[index] , index+1);
    solve(numbers, target, sum-numbers[index] , index+1);
}

int solution(vector<int> numbers, int target) {
    solve(numbers, target, 0 ,0);
    return cnt;
}