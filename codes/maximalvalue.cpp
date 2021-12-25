#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int solve(int a,int b,int c){
  vector<int> s(3);
  s.at(0) = a;
  s.at(1) = b;
  s.at(2) = c;
  all(s);
  int p = s.at(1);
  return p;
}

int main(){
  int n;
  cin >> n;
  vector<int> b(n),a(n);
  rep(i,n-1){
    cin >> b.at(i);
  }
  a.at(0) = b.at(0);
  a.at(1) = b.at(0);
  long ans = 0;
  if(n<=3){
    for (int i = 1; i < n-1;i++){
      if(b.at(i)>b.at(i-1)){
        a.at(i + 1) = b.at(i);
      }else{
        a.at(i + 1) = b.at(i - 1);
      }
    }
    rep(i, n)
    {
      ans += a.at(i);
    }
    out(ans);
  }
  else{
    for (int i = 1; i < n - 1;i++){
      if(i<n-2){
        //3つの数字渡して真ん中の値を返す関数に投げる
        ans += solve(b.at(i - 1), b.at(i), b.at(i + 1));
      }
      else
      {
        ans += max(b.at(i), b.at(i - 1));
      }
    }
    ans += a.at(0);
    ans += a.at(1);
    out(ans);
  }
}
