#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n == 1) {
      std::cout << "one" << '\n';
    } else if (n == 2) {
      std::cout << "two" << '\n';
    } else if (n == 3) {
      std::cout << "three" << '\n';
    } else if (n == 4) {
      std::cout << "four" << '\n';
    } else if (n == 5) {
      std::cout << "five" << '\n';
    } else if (n == 6) {
      std::cout << "six" << '\n';
    } else if (n == 7) {
      std::cout << "seven" << '\n';
    } else if (n == 8) {
      std::cout << "eight" << '\n';
    } else if (n == 9) {
      std::cout << "nine" << '\n';
    } else {
      std::cout << "Greater than 9" << '\n';
    }

    return 0;
}
