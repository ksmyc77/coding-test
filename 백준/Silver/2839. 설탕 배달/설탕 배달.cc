#include <iostream>
#include <algorithm>

using namespace std;

int dp[5001];

int main() {

    int input;
    for(int i = 0; i < 5; i++)
        dp[i] = 5001;
    
    cin >> input;
    
    for(int i = 3; i <= input; i++)
        {
            if(i == 3 || i == 5) dp[i] = 1;
            else if(i == 4) dp[i] = 5001;
            else
            {
                dp[i] = min(dp[i-3]+1, dp[i-5]+1);
            }
        }

    if(dp[input] >= 5001)
        cout << -1;
    else
        cout << dp[input];
    return 0;
}