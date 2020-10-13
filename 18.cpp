#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  rep(i, m)
  {
    cin >> a.at(i) >> b.at(i);
  }
  vector<vector<char>> data(n, vector<char>(n, '-'));
  rep(i, m)
  {
    a.at(i)--;
    b.at(i)--;
    data.at(a.at(i)).at(b.at(i)) = 'o';
    data.at(b.at(i)).at(a.at(i)) = 'x';
  }
  rep(i, n)
  {
    rep(j, n)
    {
      cout << data.at(i).at(j);
      if (j == n - 1)
      {
        cout << endl;
      }
      else
      {
        cout << " ";
      }
    }
  }
}
