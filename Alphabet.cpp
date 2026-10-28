#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    string s;
    cin >> s;
    int best_lengh = 1;
    int indx = 0;
    while(indx < s.size()-1){
        int add = 0;
        while((indx < s.size()-1) && (int(s[indx]) == int(s[indx+1])-1)){
            add++;
            indx++;
        }
        best_lengh = max(best_lengh,add);
        indx++;
    }

    int goodplace = 0;
    for(int i=0; i<s.size();i++){
        if((int(s[i])-97) == i){
            goodplace++;
        }
    }

    cout << min(24-best_lengh+1, 24-goodplace)<< endl;
    return 0;
}