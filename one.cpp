#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v)
{
  //Vは始点
  seen.at(v) = true; //Vを訪問済みにする

  for (auto next_v : G.at(v))
  {
    //範囲for文,autoでnext_vを定義して、G[v]の中を走らせる
    if (seen.at(next_v))
      continue; //next_vが探索済みだったらスルー

    dfs(G, next_v); //再帰的に探索
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  Graph G(m);
  rep(i, m)
  {
    int a, b;
    cin >> a >> b;
    G.at(a - 1).push_back(b - 1);
    G.at(b - 1).push_back(a - 1); //無向グラフだから
  }
  //seen.assign(n, false);
  //dfs(G, 0);
  rep(i, m)
  {
    for (int x : G.at(i))
    {
      cout << x + 1;
    }
    cout << endl;
  }
}
