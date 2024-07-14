#include <string>
#include <vector>
#include <iostream>
using namespace std;
int alp[26];

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    fill(alp, alp+26, 101);
    int result;
    int idx;
    //1. alp에 최소 클릭 횟수 저장
    for(int i = 0; i < keymap.size(); i++)
    {
        for(int k = 0; k < keymap[i].size(); k++)
        {
            idx = (int)(keymap[i][k] - 'A');
            alp[idx] = min(alp[idx],k+1);
        }
    }
    
    for(int i = 0 ; i < targets.size(); i++)
    {
        result = 0;
        for(int k = 0; k < targets[i].size(); k++)
        {
            idx = (int)(targets[i][k] - 'A');
            if(alp[idx] == 101)
            {
                answer.push_back(-1);
                break;
            }
            result += alp[idx];
            if(k == targets[i].size()-1)
                answer.push_back(result);
        }
        
    }
    
    return answer;
}