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
    int total = 24;

    int good_place = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] != alphabet[indice_alpha]){
            add++;
        }
        else{
            indice_alpha++;
        }
    }
    cout << add << endl;
    return 0;
}