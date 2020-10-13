#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

float prob(int i,int k){
  int cnt = 0;
  while (i < k)
  {
    i *= 2;
    cnt++;
  }
  return cnt;
}

int main(){
  double n, k;
  cin >> n >> k;
  if(n<k){
    double p = 0;
    for (int i = 1; i <= n;i++)
    {
      double a = 1.0 / n;
      double b = pow(0.50, prob(i, k));
      p += a * b;
    }
    cout << fixed << setprecision(12) << p << endl;
  }else{
    double p = 0;
    for (int i = 1; i <= k; i++)
    {
      double a = 1.0 / n;
      double b = pow(0.50, prob(i, k));
      p += a * b;
    }
    p += (1.0 - k / n);
    cout << fixed<<setprecision(12)<<p << endl;
  }
}
//ゲームに勝つ確率は2通りある
//１ 最初に振ったサイコロの目がk以上→(n-k)/n しかしn>kである前提
//2 n>k前提で最初に振ったサイコロがk未満の確率k/n これに加えて

//(100000-5)/100000
