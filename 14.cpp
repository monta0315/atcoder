#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  vector<int> vec(3);
  rep(i, 3)
  {
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  cout << vec.at(2) - vec.at(0) << endl;
}
