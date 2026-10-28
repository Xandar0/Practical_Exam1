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

    int maxheigh = 1;

    int a = 0;
    int b = 0;

    while((a != n-1) && (b != n-1)){
        int right = cave[a][b+1];
        
        int down = cave[a+1][b];
        if(right < down){
            b = b+1;
            if(maxheigh < right){
                maxheigh = right;
            }
        }else{
            a = a+1;
        }
    }
    return 0;
}