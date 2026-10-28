#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    int add = 0;

    //sort(s.begin(),s.end());
    

    for(int i = 0; i < s.size(); i++){
        if(s[i] != alphabet[i]){
            add++;
        }
    }
    cout << s << endl;
    return 0;
}