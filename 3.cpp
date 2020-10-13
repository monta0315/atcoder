#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;
const int mod = 1000000007;

ll powmod(int x, int y)
{
  int res = 1;
  rep(i, y)
  {
    res = res * x % mod;
  }
  return res;
}

int main()
{
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << 0 << endl;
    exit(0);
  }
  ll ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);
  ans %= mod;
  
  cout << ans << endl;
}
