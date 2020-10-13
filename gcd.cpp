#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int gcd(int x, int y)
{
  return (x % y) ? gcd(y, x % y) : y;
}

int main()
{
  int n;
  vector<int> a(n);
  rep(i, n)
  {
    cin >> a.at(i);
  }
  rep(i, n)
  {
    int num = s.at(i);
    s.at(i) = 0;
  }
}
//最大公約数の最大値
//１個消してそれ以外の最大公約数を求めてそれと同じものにする
//一個ずつ消してそれ以外で最大公約数を求めた最大値？？
//やってみる
