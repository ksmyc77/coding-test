#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> one ={1,2,3,4,5};
    vector<int> two ={2,1,2,3,2,4,2,5};
    vector<int> three = {3,3,1,1,2,2,4,4,5,5};
    int ans_one=0, ans_two=0, ans_three=0;
    int len = answers.size();
    int maxans;
    
    for(int i = 0; i < len; ++i)
    {
        if(answers[i] == one[i%5]) ans_one++;
        if(answers[i] == two[i%8]) ans_two++;
        if(answers[i] == three[i%10]) ans_three++;
    }
    
    if(ans_one > ans_two) maxans = ans_one;
    else maxans = ans_two;
    
    if(maxans < ans_three) maxans = ans_three;
    
    if(maxans == ans_one) answer.push_back(1);
    if(maxans == ans_two) answer.push_back(2);
    if(maxans == ans_three) answer.push_back(3);
    return answer;
}