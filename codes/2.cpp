#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  long double a, b, c, d;
  cin >> a >> b >> c >> d;
  long double e = a * c;
  long double f = b * d;
  long double g = a * d;
  long double h = b * c;
  long double i = max(max(e, f), max(g, h));
  cout << fixed << setprecision(0) << i << endl;
  //printf("%llf%d", i);
}
