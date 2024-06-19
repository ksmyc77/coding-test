#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int size = board.size();
    string color = board[h][w];
    
    if(h-1 >= 0     && board[h-1][w] == color ) answer++;
    if(h+1 < size   && board[h+1][w] == color ) answer++;
    if(w-1 >= 0     && board[h][w-1] == color ) answer++;
    if(w+1 < size   && board[h][w+1] == color ) answer++;
    return answer;
}