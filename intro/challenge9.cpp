#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // n is number of variable length arrays
    // q is number of queries
    // k is number of elements in the array
    // i is index in array a
    // j is index of array referenced by i
    int n, q, i, k, j;
    vector<vector<int>> a;

    cin >> n;
    cin >> q;

    a.resize(n);

    for (auto z = 0;z<n;++z){
        cin >> k;
        a[z].resize(k);
        for (auto x = 0;x<k;++x){cin >> a[z][x]; }
    }

    for (auto z = 0;z<q;++z){
      cin >> i;
      cin >> j;
      cout << a[i][j] << endl;
    }

    return 0;
}
