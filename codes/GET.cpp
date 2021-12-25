#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

void check(vector<char> &s, int a, int b)
{
  int num = 0;
  for (int i = a - 1; i < b - 1; i++)
  {
    if (s.at(i) == 'A' && s.at(i + 1) == 'C')
    {
      num++;
      //cout << i;
    }
  }
  cout << num << endl;
}

int main()
{
  int n, q;
  cin >> n >> q;
  vector<char> s(n);
  rep(i, n)
  {
    cin >> s.at(i);
  }
  vector<int> l(q), r(q);
  rep(i, q)
  {
    cin >> l.at(i) >> r.at(i);
  }
  rep(i, q)
  {
    check(s, l.at(i), r.at(i));
  }
}
