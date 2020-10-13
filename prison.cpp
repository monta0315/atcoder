#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> l(m),r(m);
  rep(i,m){
    cin >> l.at(i) >> r.at(i);
  }
auto ans = 0;
vector<map<int, int>> o(n);
for (int i = 1;i<=m;i++){
  for (int j = r.at(i); j <= l.at(i);j++){
    if(o.count(j)){
      o[j]++;
    }
    else{
      o.at(j) = 1;
    }
  }
}
for (int k = 1; k <= n;k++){
  auto a = o.at(k);
  if(a==m){
    ans++;
  }
}
  cout << ans << endl;
}
//vector<map>を用いて
