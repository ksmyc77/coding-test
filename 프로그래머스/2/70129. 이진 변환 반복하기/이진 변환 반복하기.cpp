#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
string DtoB(string s);
vector<int> solution(string s) {
    vector<int> answer;
    string one = "1";
    int zero_cnt = 0;   // 0 제거 횟수
    int cng_cnt = 0;    // 변환 개수
    // 0 제거
    while(s.compare(one) != 0)
    {
        while(s.find('0') != string::npos)
        {
            s.erase(find(s.begin(), s.end(), '0'));
            zero_cnt++;
        }
        s = DtoB(s);
        cng_cnt++;
    }
    
    answer.push_back(cng_cnt);
    answer.push_back(zero_cnt);
    return answer;
}

string DtoB(string s)
{
    int i = s.length();
    string result = "";
    
    for(int k = 1; i != 0; k *= 10)
    {
        result.insert(0, to_string(i%2));
        i /= 2;
    }
    
    return result;
}