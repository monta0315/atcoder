#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  int a, b;
  cin >> a >> b;
  cout << max(max(2 * a - 1, 2 * b - 1), a + b) << endl;
}
