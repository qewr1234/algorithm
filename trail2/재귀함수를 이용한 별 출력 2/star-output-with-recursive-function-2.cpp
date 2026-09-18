#include <iostream>
using namespace std;

void PrintStarUpAndDown(int n){
    if(n == 0){
        return;
    }
    for(int i = 0; i < n; i++){
        cout << "*" << " ";
    }
    cout << endl;
    PrintStarUpAndDown(n - 1);
    for(int i = 0; i < n; i++){
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    int n = 0;
    cin >> n;

    PrintStarUpAndDown(n);
    return 0;
}