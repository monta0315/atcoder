#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  vector<int> l(5);
  int k;
  rep(i, 5)
  {
    cin >> l.at(i);
  }
  cin >> k;
  rep(i, 4)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (l.at(j) - l.at(i) > k)
      {
        cout << ":(" << endl;
        exit(0);
      }
    }
  }
  cout << "Yay!" << endl;
}
