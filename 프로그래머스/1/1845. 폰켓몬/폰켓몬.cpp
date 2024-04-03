#include <vector>
#include <algorithm>

using namespace std;

#define MAX 200001

int solution(vector<int> nums)
{
    int answer = 0;
    int half = nums.size()/2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(),nums.end()), nums.end());
    
    int kind = nums.size();
    
    if(half < kind) answer = half;
    else answer = kind;

    return answer;
}