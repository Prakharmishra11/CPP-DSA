
#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}