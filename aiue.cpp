#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int search(vector<int> c)
{
  vector<int> d(5);
  rep(i, 5)
  {
    d.at(i) = c.at(i) % 10;
  }
  int min = 1000;
  int num;
  rep(i, 5)
  {
    if (min > d.at(i) && d.at(i) % 10 != 0)
    {
      min = d.at(i);
      num = i;
    }
  }
  return num;
}

int main()
{
  vector<int> time(5);
  rep(i, 5)
  {
    cin >> time.at(i);
  }

  int last = search(time);
  int ans = time.at(last);
  rep(i, 5)
  {
    if (i != last)
    {
      if (time.at(i) % 10 != 0)
      {
        int t = time.at(i) % 10;
        t = 10 - t;
        time.at(i) += t;
      }
      ans += time.at(i);
    }
  }
  cout << ans << endl;
}
//120+110+60+90+101=
//それ以外の４つの数字の一の位を繰り上げる。
//全部たす
