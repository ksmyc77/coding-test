#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int s = brown+yellow;
    vector<int> answer;  

    for(int row = 3; ; row++)
    {
        if(s%row==0)
        {
            int col = s/row;
            if((row-2)*(col-2) == yellow)
            {
                answer.push_back(row);
                answer.push_back(col);
                sort(answer.rbegin(), answer.rend());
                break;
            }
        }
    }
    
    return answer;
}