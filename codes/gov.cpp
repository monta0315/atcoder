#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n)
  {
    cin >> h.at(i);
  }
  int cnt = 1;
  int max = h.at(0);
  for (int j = 1; j < n; j++)
  {
    if (h.at(j) >= max)
    {
      max = h.at(j);
      cnt++;
    }
  }
  cout << cnt << endl;
}
