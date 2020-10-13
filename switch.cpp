#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> k(n), p(m);
  vector<vector<int>> s(m, vector<int>(m));
  int k_max = 0;
  rep(i, m)
  {
    cin >> k.at(i);
    rep(j, m)
    {
      cin >> s.at(i).at(j);
    }
  }
  rep(i,m){
    cin >> p.at(i);
  }
  int ans = 0;
  for (int tmp = 0; tmp < (1 << 10); tmp++)
  {
    bitset<10> o(tmp);
    int cnt = 0;
    bool flag = true;
    for (int l = 0; l < m; l++)
    {
      //kの縦を移動
      for (int p = 0; p < k.at(l);p++){
        //sの横を移動
        if(o.test(s.at(l).at(p))){
          cnt++;
        }
      }
      if(cnt%2!=p.at(l)){
        flag = false;
      }
    }
    if(flag){
      ans++;
    }
  }
  cout << ans << endl;
}
//kが一番大きいものを基準に二進数全探索をする
//→bitset<kmax>o
//s.at(0)がo.at(s.at(i))が1ならcnt++する
//cnt/2がp.at(i)と等しいならflag=1
//等しくない場合flag=0にし、次のビットへ
