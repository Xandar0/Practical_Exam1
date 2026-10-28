#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int nb_photo;
    cin >> nb_photo;
    vector<vector<long long>> album(nb_photo);
    for(int i = 0; i<nb_photo;i++){
        long long nbpeople;
        cin >> nbpeople;
        for(long long j=0; j<nbpeople;j++){
            long long heigh;
            cin >> heigh;
            album[i].push_back(heigh);
        }
    }

    vector<int> investigate(nb_photo);
    int nbInvest = 0;
    for(int i = 0; i<nb_photo;i++){
       int find = 0;
       for(long long a = 0; a < (album[i].size()-2); a++){
            for(long long y = a+1; y < (album[i].size()-1); y++){
                for(long long b =y+1; b <album[i].size();b++){
                    if((album[i][a] > album[i][y]) && (album[i][b] > album[i][a])){
                        find = 1;
                        break;
                    }
                }
            }
        }
        if(find){
        investigate[nbInvest] = i+1;
        nbInvest++;
        }
    }

    cout << nbInvest <<endl;
    for(int i = 0; i< nbInvest; i++){
        cout << investigate[i] << endl;
    }


    return 0;
}