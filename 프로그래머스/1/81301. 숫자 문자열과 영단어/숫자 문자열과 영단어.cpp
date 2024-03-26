#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string s_answer="";
    string eng[] ={"zero","one","two", "three","four","five","six","seven","eight","nine"};
    string num[] ={"0","1","2","3","4","5","6","7","8","9"};
    string text = "";
    for(int i = 0; i < s.size(); i++)
    {
        text += s[i];
        for(int k = 0; k < 10; k++)
        {
            if(text == num[k])
            {
                s_answer += num[k];
                text="";
            }
            else if(text == eng[k])
            {
                s_answer += num[k];
                text="";
            }
        }
        
    }
    answer = stoi(s_answer);
    return answer;
}