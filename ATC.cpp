#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

bool check(char s)
{
  if (s == 'A')
  {
    return true;
  }
  else if (s == 'T')
  {
    return true;
  }
  else if (s == 'C')
  {
    return true;
  }
  else if (s == 'G')
  {
    return true;
  }
  else
  {
    return false;
  }
}

int count(string s, int num)
{
  int cnt = 0;
  for (int i = num; i < s.size(); i++)
  {
    if (check(s.at(i)))
    {
      cnt++;
    }
    else
    {
      return cnt;
    }
  }
  return cnt;
}

int main()
{
  string s;
  cin >> s;
  int max = 0;
  int num = 0;
  rep(i, s.size())
  {
    if (check(s.at(i)))
    {
      num = count(s, i);
      if (num > max)
      {
        max = num;
      }
      i += num;
    }
  }
  //先頭から見ていき、ATCGのどれかが出てきたらカウントを始める
  //chack=true
  //ATCGが途切れたらカウントをやめる
  cout << max << endl;
}
