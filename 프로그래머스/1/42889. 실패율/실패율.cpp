#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp (pair<int, double> &a, pair<int, double> &b)
{
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> failed;
    pair<int, double> p;
    double user = stages.size();
    int nonclear;
    int nonreach = 0;
    
    for(int i = 1; i <= N; ++i)
    {
        nonclear = count(stages.begin(), stages.end(), i);
        
        if(stages.size() == nonreach)
        {
            failed.push_back({i,0});
            continue;
        }
        failed.push_back({i,(double)nonclear/(double)(stages.size() -nonreach)});
        nonreach += nonclear;
    }

    sort(failed.begin(), failed.end(), cmp);
    
    for(int i = 0; i < failed.size(); ++i)
    {
        answer.push_back(failed[i].first);
    }
    cout << endl;
    
    return answer;
}