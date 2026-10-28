#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<int>> cave(n);
    for(int i = 0; i < n; i++){
        for(int j=0; j < n; j++){
            int x;
            cin >> x;
            cave[i].push_back(x);
        }
    }




    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1));
    for(int i = 0; i<n;i++){
        for(int j=0; j<n; j++){
            if(i==0 && j!=0){
                dp[i][j] = max(cave[i][j],dp[i][j-1]);
            }
            else if(j==0 && i !=0){
                dp[i][j] = max(cave[i][j],dp[i-1][j]);
            }
            else{
                int test = max(dp[i][j-1],dp[i-1][j]);
                dp[i][j] = max(cave[i][j],test);
            }
        }
    }


    cout << dp[n-1][n-1] << endl;
    return 0;
}