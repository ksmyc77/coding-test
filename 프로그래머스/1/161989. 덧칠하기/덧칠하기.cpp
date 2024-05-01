#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int len = section.size();
    int paint =0;
    
    for(int i = 0;; i++)
    {
        if(paint >= section[len-1]) break;
        if(paint >= section[i]) continue;
        
        paint = section[i]+m-1;
        answer++;
    }
    return answer;
}