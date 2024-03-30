#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    int turn = 1, cnt = 1;
    vector<string> used;    //사용된 단어를 저장할 벡터
    
    answer.push_back(0);
    answer.push_back(0);

    used.push_back(words[0]);

    for(int i = 1; i < words.size(); i++)
    {
        turn++;
        if(words[i-1].back() == words[i].front())
        {
            if(find(used.begin(), used.end(), words[i])== used.end())
            {
                if(i == words.size()-1)
                    return answer;
                else
                    used.push_back(words[i]);
            }
            else
                break;
        }
        else
            break;
        
        if(turn == n)
        {
            cnt++;
            turn = 0;
        }
    }
    
    answer[0] = turn;
    answer[1] = cnt;
    
    return answer;
}