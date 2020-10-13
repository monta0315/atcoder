#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  string s;
  cin >> s;
  int n = s.size(); //数字の個数-1→隙間に入れるため
  for (int bit = 0; bit < (1 << n - 1); bit++)
  {
    bitset<9> a(bit);
    cout << a << endl;
    rep(i, 10)
    {
      if (a.set(i))
      {
        s.at(i)
      }
    }
  }
}
