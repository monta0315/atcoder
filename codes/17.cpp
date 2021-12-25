#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  int n, s;
  cin >> n >> s;
  vector<int> a(n), p(n);
  int num = 0;
  rep(i, n)
  {
    cin >> a.at(i);
  }
  rep(i, n)
  {
    cin >> p.at(i);
  }
  rep(i, n)
  {
    rep(j, n)
    {
      if (a.at(i) + p.at(j) == s)
      {
        num++;
      }
    }
  }
  cout << num << endl;
}
