#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N = 0;
    cin >> N;

    int arr[2000];

    for (int i = 0; i < 2*N; i++){
        cin >> arr[i];
    }

    sort(arr, arr + 2 * N);

    int result = 0;

    for(int i = 0; i < N; i++){
        int sum = arr[i] + arr[2 * N - i - 1];

        if(sum > result){
            result = sum;
        }
    }

    cout << result;

    return 0;
}