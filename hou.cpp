#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int complete_time(vector<vector<int>> &p, int x)
{
  if (p.at(x).size() == 0)
  {
    return 0;
  }
  int max_receive_time = 0;
  for (int c : p.at(x))
  {
    //子組織Cのもとに揃った時刻＋１＝親組織が報告書を受け取る時間
    int receive_time = complete_time(p, c) + 1;
    //受け取った時刻の最大値=揃った時刻
    max_receive_time = max(max_receive_time, receive_time);
  }
  return max_receive_time;
}

int main()
{
  int n;
  cin >> n;
  Graph p(n);
  //p.at(0) = -1;
  for (int i = 1; i < n; i++)
  {
    int a;
    cin >> a;
    p.at(a).push_back(i);
  }
  cout << complete_time(p, 0) << endl;
}
