#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    string cmp; 
    int score;
    for(int i = 0; i < photo.size(); i++)
    {
        score = 0;
        for( int k = 0; k < name.size(); k++ )
        {
            if(find(photo[i].begin(), photo[i].end(), name[k]) != photo[i].end())
            {
                score += yearning[k];
            }
        }
        answer.push_back(score);
    }
    
    return answer;
}