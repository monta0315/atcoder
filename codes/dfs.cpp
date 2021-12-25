#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  vector<vector<int>> data(4, vector<int>(4));
  rep(i, 3)
  {
    rep(j, 4)
    {
      cin >> data.at(i).at(j);
    }
  }
  rep(i, 3)
  {
    rep(j, 4)
    {
      cout << data.at(i).at(j);
    }
    cout << endl;
  }
  cout << data.size() << data.at(0).size() << endl;
}
