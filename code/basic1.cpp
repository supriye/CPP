#include <iostream>
using namespace std;

// Function for finding last occurrence
void lastIndex(int arr[], int n, int x) {
    int last = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (x == arr[i]) {
            last = i;
            break;
        }

    }
    cout << last;
}

int main() {
    int n; //no. of elements
    cin >> n;
    int arr[n];
    //initializing array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x; //element whose index to be searched
    cin >> x;
    lastIndex(arr, n, x);
    return 0;
}
