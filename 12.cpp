#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  string s;
  cin >> s;
  int sum = 1;
  int l = s.length();
  for (int i = 1; i < l; i = i + 2)
  {
    if (s[i] == '+')
    {
      sum += 1;
    }
    else
    {
      sum -= 1;
    }
  }
  cout << sum << endl;
}
