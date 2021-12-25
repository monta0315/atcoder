#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

vector<string> field;
const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};
int h, w;

void dfs(int y, int x, vector<vector<bool>> &r)
{
  r.at(y).at(x) = true;
  rep(i, 4)
  {
    int now_y = y + dy.at(i);
    int now_x = x + dx.at(i);

    if (now_y > h || now_x > w || now_y < 0 || now_x < 0)
    {
      continue;
    }
    else if (field.at(now_y).at(now_x) == '#')
    {
      continue;
    }
    if (r.at(now_y).at(now_x))
    {
      continue;
    }
    dfs(now_y, now_x, r);
  }
}

int main()
{
  int x, y, g_x, g_y;
  cin >> h >> w;
  field.resize(h);
  rep(i, h)
  {
    cin >> field.at(i);
  }
  rep(i, h)
  {
    rep(j, w)
    {
      if (field.at(i).at(j) == 's')
      {
        x = j;
        y = i;
      }
      else if (field.at(i).at(j) == 'g')
      {
        g_x = j;
        g_y = i;
      }
    }
  }

  rep(i, h)
  {
    rep(j, w)
    {
      cout << field.at(i).at(j);
    }
    cout << endl;
  }

  cout << x << y << endl
       << g_x << g_y << endl;

  //vector<vector<bool>> r(510, vector<bool>(510, false));
  //dfs(y, x, r);
  //if (r.at(g_y).at(g_x))
  {
      //cout << "Yes" << endl;
  }
  //else
  {
    //cout << "No" << endl;
  }
}
