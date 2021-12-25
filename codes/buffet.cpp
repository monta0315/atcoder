#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n - 1);
  rep(i,n){
    cin >> a.at(i);
  }
  rep(i, n)
  {
    cin >> b.at(i);
  }
  rep(i, n-1)
  {
    cin >> c.at(i);
  }
  long ans = 0;
  for (int i = 1; i < n;i++)
  {
    if(a.at(i-1)+1==a.at(i)){
      ans += c.at(a.at(i-1)-1);
    }
  }
  rep(i,n){
    ans += b.at(i);
  }
  out(ans);
}
//i=1 a.at(i)=1=>ans+=b.at(a.at(i-1))=>
