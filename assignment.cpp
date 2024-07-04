#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int hCnt=0, tCnt=0;
    string usr;

    cout << "Who are you?" << endl << "> ";
    cin >> usr;
    cout << "Hello, " << usr << "!" << endl;
    cout << "Tossing a coin..." << endl;

    for(int i = 1; i <= 3; i++){
        int r = rand();
        cout << "Round " << i << ": " << (r%2 == 0 ? "Heads" : "Tails") << endl;
        if(r%2) tCnt++;
        else hCnt++;
    }

    cout << "Heads: " << hCnt << ", Tails: " << tCnt << endl;
    if(hCnt > tCnt){cout << usr << "won!" << endl;}
    else{cout << usr << " lost!" << endl;}

    return 0;
}