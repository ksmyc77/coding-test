#include <string>
#include <vector>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int idx;
    vector<int> buy;
    for(int i = 0; i < discount.size(); i++)
    {
        idx = i;
        buy = number;
        while(idx < discount.size() && idx<i+10)
        {
            for(int k = 0; k < want.size(); k++)
            {
                if(want[k]== discount[idx])
                    buy[k]--;
            }
            idx++;
        }
        
        bool full = true;
        for(int k = 0; k < buy.size(); k++)
        {
            if(buy[k]>0)
                full = false;
        }
        
        if(full)
            answer++;
    }
    return answer;
}