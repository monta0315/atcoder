#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  vector<int> w(n);
  float s1 = 0;
  rep(i, n)
  {
    cin >> w.at(i);
    s1 += w.at(i);
  }
  s1=s1 / 2.0;
  float s2 = 0;
  int x = 0;
  while (s2 < s1)
  {
    s2 += w.at(x);
    x += 1;
  }
  x = x - 1;//中間地点
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  for (int i = 0; i < n; i++)
  {
    if(i<=x){
      a += w.at(i);
    }else{
      b += w.at(i);
    }
  }
  rep(i,n){
    if(i<x){
      c += w.at(i);
    }else{
      d += w.at(i);
    }
  }
  cout << min(abs(a-b),abs(c-d))<< endl;
}
//wの和を求める
//wの和の半分をちょうど超えるiを求める
