#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;
const int mod = 1000000007;

int sum1(int a, int b)
{
  int sum = 0;
  if (a == b)
  {
    return 0;
  }
  sum += a;
  return sum + sum1(a + 1, b);
}

int main()
{
  int a, b;
  a = 0;
  b = 5;
  int sum = 0;
  for (int i = a; i <= b; i++)
  {
    sum += a;
  }
  cout << sum1(a, b); //<< sum// << endl;
}
