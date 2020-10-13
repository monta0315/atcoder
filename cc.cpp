#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  string s;
  cin >> s;
  int cnt = 0;
  int len = s.size();
  vector<char> a(len), b(len), S(len);
  rep(i, len)
  {
    if (i % 2 == 0)
    {
      a.at(i) = '0';
      b.at(i) = '1';
    }
    else
    {
      a.at(i) = '1';
      b.at(i) = '0';
    }
  }
  int num1 = 0;
  int num2 = 0;
  rep(i, len)
  {
    if (a.at(i) != s.at(i))
    {
      num1++;
    }
    if (b.at(i) != s.at(i))
    {
      num2++;
    }
  }
  cout << min(num1, num2) << endl;
}
