#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  string s;
  cin >> s;
  ll sum = 0;
  int n = s.size();
  for (int bit = 0; bit < (1 << n - 1); bit++)
  {
    ll total = 0;
    rep(i, n - 1)
    {
      total *= 10;
      cout << s.at(i) << endl;
      total += s.at(i) - '0';
      if (bit & (1 << i))
      {
        sum += total;
        total = 0;
      }
    }
    total *= 10;
    total += s.back() - '0';
    sum += total;
  }
  cout << sum << endl;
}
