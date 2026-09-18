#include <iostream>
using namespace std;

void PrintUpAndDown(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    PrintUpAndDown(n - 1);
    cout << n << " ";
}

int main() {
    int n = 0;
    cin >> n;

    PrintUpAndDown(n);
    return 0;
}