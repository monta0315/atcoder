#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;
const int mod = 1000000007;

int sum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  int s = sum(n - 1);
  return s + n;//それまでのsum(n-1)と今のnを前に呼び出された方に送る
}

int main()
{
  cout << sum(3) << endl;
}
