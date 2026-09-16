#include <iostream>
#include <string>
using namespace std;

string str1;
string str2;

bool CheckString(int start){
    for(int i = 0; i < str2.length(); i++){
        if(str1[start + i] != str2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    cin >> str1 >> str2;

    for(int i = 0; i <= str1.length() - str2.length(); i++){
        if(CheckString(i)){
            cout << i;
            return 0;
        }
    }
    cout << -1;

    return 0;
}