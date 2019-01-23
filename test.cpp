#include <iostream>

using namespace std;

int main()
{
  for (auto i = 0; i <= 10; i++) cout << i;
  cout << endl;
  for (auto i = 0; i <= 10; ++(i)) cout << i;
  cout << endl;
  for (auto i = 0; i < 11; i++) cout << i;
  cout << endl;
  for (auto i = 0; i < 11; ++i) cout << i;
}
