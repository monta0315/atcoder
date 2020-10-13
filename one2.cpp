#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int ans = 0;
Graph g;
vector<bool> seen;

void dfs(int start, int n)
{
  vector<int> todo;
  int cnt = 0;
  for (int next : g.at(start))
  {
    if (g.at(next))
    {
      continue;
    }
    else
    {
      seen.at(next) = true;
      cnt++;
      for (int do : g.at(start))
      {
        if (!seen.at(do))
        {
          todo.push_back(do);
        }
      }
      if (cnt == n)
      {
        ans++;
      }
      dfs(next, n);
      seen.assign(n, false);
      dfs()
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  seen.assign(n, false);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g.at(a).push_back(b);
    g.at(b).push_back(a);
  }
  ans = 0;
  seen.at(0) = true;
  dfs(0, n);
}
