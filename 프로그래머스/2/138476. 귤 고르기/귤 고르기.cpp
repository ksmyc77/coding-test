#include <string>
#include <vector>
#include <algorithm>

#define MAX 10000001

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> cnt(MAX, 0);
    
    for(int i = 0; i < tangerine.size(); i++)
    {
        cnt[tangerine[i]] += 1;
    }
    
    sort(cnt.rbegin(), cnt.rend());
    
    for(int i = 0; i < cnt.size(); i++)
    {
        if (cnt[i] < k) {
            answer++; // 담은 귤의 종류 개수
            k -= cnt[i]; // 담은 귤 개수
        } else if (cnt[i] >= k) {
            answer++;
            break;
        }
    }
    
    return answer;
}