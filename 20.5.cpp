#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int cnt(vector<vector<int>> &children, int n)
{
  if (children.at(n).size() == 0)
  {
    return 0;
  }
  int time = 0;
  for (int c : children.at(n))
  {
    int sum += cnt(children, c);
  }
  sum += 1;
  return time;
}

int main()
{
  int N;
  cin << N;
  vector<int> P(N);
  P.at(0) = -1;
  for (int i = 1; i < N; i++)
  {
    cin << P.at(i);
  }

  vector<vector<int>> &children(N);
  for (int i = 1; i < N; i++)
  {
    int parent = P.at(i);
    children.at(parent).push_back(i);
  }
}
