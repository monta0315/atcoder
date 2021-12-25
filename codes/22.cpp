#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> P(N);
  rep(i, N)
  {
    int a, b;
    cin >> a >> b;
    P.at(i) = make_pair(b, a);
  }
  sort(P.begin(), P.end());
  rep(i, N)
  {
    int c, d;
    tie(c, d) = P.at(i);
    cout << d << " " << c << endl;
  }
}
