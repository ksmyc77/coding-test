#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int x[10] ;
int y[10] ;

void count(string s, int arr[])
{
    for(int i = 0; i < s.size(); i++)
        arr[s[i] - '0']++;
}

void printarr(int arr[])
{
    for(int i = 0; i < 10; i++)
        cout<<"[ "<<arr[i]<<" ]";
    cout<<endl;
}

string solution(string X, string Y) {
    string answer = "";
    count(X, x);
    count(Y, y);
    
    for(int i = 9; i >= 0; i--)
    {
        int num = min(x[i],y[i]);
        for(int k = 0; k < num; k++)
            answer+= to_string(i);
    }
    
    if(answer=="") return "-1";
    else if(answer[0]=='0') return "0";
    else return answer;

}