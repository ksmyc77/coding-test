#include <iostream>

using namespace std;

int dp[41] = {0,1};

int main() {
    int input;
    int repeat;

    for(int i = 2; i < 41; i++)
        dp[i] = dp[i-1]+dp[i-2];
    
    cin >> repeat;
    for(int i = 0; i < repeat; i++)
        {
            cin >> input;
            if(input == 0)
                cout<<1<<" "<< 0<<endl;
            else if(input == 1)
                cout<<0<<" "<<1<<endl;
            else    
                cout<<dp[input-1]<<" "<<dp[input]<<endl;
        }


    return 0;
}