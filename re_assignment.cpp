#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int hCnt=0, tCnt=0;

    cout << "Tossing a coin..." << endl;

    srand(time(0));
    for(int i = 1; i <= 3; i++){
        int r = rand();
        cout << "Round " << i << ": " << (r%2 == 0 ? "Heads" : "Tails") << endl;
        if(r%2) tCnt++;
        else hCnt++;
    }

    cout << "Heads: " << hCnt << ", Tails: " << tCnt << endl;
    cout << "You" << (hCnt > tCnt ? " won!" : " lost!") << endl;
    return 0;
}