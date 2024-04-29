#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> finish;
    int day;
    int release=0;
    for(int i = 0; i< progresses.size(); i++)
    {
        day = 0;
        while((progresses[i]+(speeds[i]*day)) < 100)
            ++day;
        finish.push_back(day);
    }
    day = 0; 
    for(int i = 0; i < finish.size(); ++i)
    {
        if(i == 0)
        {
            day = finish[i];
            release=1;
        }
        else 
        {
            if(day < finish[i])
            {
                answer.push_back(release);
                day = finish[i];
                release=1;
            }
            else 
                release++;
        }
        if(i == finish.size()-1)
            answer.push_back(release);
    }
    cout<<endl;
    return answer;
}