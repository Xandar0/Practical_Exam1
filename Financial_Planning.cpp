#include <iostream>
#include <vector>
using namespace std;


int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    long long nstrategy;
    long long m;
    cin >> nstrategy >>  m;
    vector<pair<long long, long long>> strategy;
    for(int i = 0; i < nstrategy; i++){
        long long profit,cost;
        cin >> profit >> cost;
        strategy[i].first = profit;
        strategy[i].second = cost;
    }

    // find good strategy
    int minDay = 1000000000;
    for()
    return 0;
}