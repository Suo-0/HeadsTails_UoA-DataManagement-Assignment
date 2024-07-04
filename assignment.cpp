#include<iostream>
using namespace std;

int main(){
    int hCnt=0, tCnt=0;
    cout << "Tossing a coin..." << endl;
    for(int i = 1; i <= 3; i++){
        int r = rand();
        cout << "Round 1: " << (r%2 == 0 ? "Heads" : "Tails") << endl;
        if(r%2) tCnt++;
        else hCnt++;
    }
    cout << "Heads: " << hCnt << ", Tails: " << tCnt << endl;
    return 0;
}