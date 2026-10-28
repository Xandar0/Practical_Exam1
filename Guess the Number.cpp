#include <iostream>
#include <string>
using namespace std;

int main(){
    int myguess = 500;
    string output;
    cout << myguess << endl;
    cin >> output;
    int max = 1000;
    int min = 1;
    for(int i = 1; i<10; i++){
        if(output == "correct"){
            return 0;
        }
        else if (output=="lower"){
            max = myguess;
            myguess = (min + max)/2;
            cout << myguess << endl;
        }
        else if (output=="higher"){
            min = myguess;
            myguess = (min + max)/2;
            cout << myguess << endl;
        }
        cin >> output;
    }

    return 0;
}