#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int str1=0, str2=0;
    
    for(int i = 0; i < goal.size(); i++)
    {
        if(str1 < cards1.size()&&goal[i] == cards1[str1])
            str1 += 1;
        else if(str2 < cards2.size()&&goal[i] == cards2[str2])
            str2 += 1;
        else
            return "No";
    }

    return "Yes";
}