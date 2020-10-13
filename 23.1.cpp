#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  map<int, int> cnt;
  rep(i, N)
  {
    cin >> A.at(i);
  }
  for (int x : A)
  {
    if (cnt.count(x))
    {
      cnt.at(x)++;
    }
    else
    {
      cnt[x] = 1;
    }
  }

  int max = 0;
  int ans = -1;

  for (int x : A)
  {
    if (max < cnt.at(x))
    {
      max = cnt.at(x);
      ans = x;
    }
  }
  cout << ans << " " << max << endl;
}
