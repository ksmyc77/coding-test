#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    string input;
    vector<string> cache;
    
    if(cacheSize == 0)
    {
        return cities.size()*5;
    }
    
    for(int i = 0; i < cities.size(); ++i)
    {
        input = cities[i];
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        if(cache.empty())
        {
            cache.push_back(input);
            answer += 5;
        }
        else
        {
            if(find(cache.begin(), cache.end(), input) == cache.end())
            {
                cache.push_back(input);
                answer += 5;
                if(cache.size()>cacheSize)
                {
                    cache.erase(cache.begin());
                }
            }
            else
            {
                auto it = find(cache.begin(), cache.end(), input)-cache.begin();
                cache.erase(cache.begin()+it);
                cache.push_back(input);
                answer += 1;
            }
        }
    }
    return answer;
}