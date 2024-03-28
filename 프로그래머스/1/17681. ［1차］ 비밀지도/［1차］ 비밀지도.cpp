#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

string DtoB(int a, int n);

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string str1 = "";
    string str2 = "";
    string col = "";
    
    for(int i = 0; i< n; i++)
    {
        str1 = DtoB(arr1[i], n);
        str2 = DtoB(arr2[i], n);
        
        for(int k = 0; k < n; k++)
        {
            if(str1[k]=='1'|| str2[k] == '1')
                col += "#";
            else
                col += " ";
        }
        
        answer.push_back(col);
        col.clear();
    }
    return answer;
}

string DtoB(int a, int n)
{
    string s = "";
    for(int i = 0; i < n; i++)
    {
        s.insert(0,to_string(a%2));
        a /= 2;
    }
    return s;
}