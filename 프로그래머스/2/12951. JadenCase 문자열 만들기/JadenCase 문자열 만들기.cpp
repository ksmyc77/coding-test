#include <cctype>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    
    if(islower(s[0]))
    {
        s[0] = toupper(s[0]);
    }
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
            s[i+1] = toupper(s[i+1]);
    }
    
    for(int i = 1; i < s.size(); i++) {
        if(isupper(s[i]) && s[i - 1] != ' '){
            s[i] = tolower(s[i]);  // 해당 글자를 소문자로 변환
        }
    }
    
    answer = s;
    
    return answer;
}