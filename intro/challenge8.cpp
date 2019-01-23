#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (auto i = 0;i != sizeof(arr)/sizeof(arr[0]);++i) {
      cin >> arr[i];
    }

    for (auto i = (sizeof(arr)/sizeof(arr[0]));i!=0;--i) {
      cout << arr[i-1] << " ";
    }

    cout << endl;
    return 0;
}
