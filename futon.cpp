#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h){
    cin>>s.at(i);
  }
  int cnt = 0;
  rep(i,h){
    rep(j,w){
      if(s.at(i).at(j)=='.'){
        //左チェック
        if(j>0&&s.at(i).at(j-1)=='.'){
          cnt++;
        }
        //右隣チェック
        if(j<w-1&&s.at(i).at(j+1)=='.'){
          cnt++;
        }
        //上チェック
        if(i>0&&s.at(i-1).at(j)=='.'){
          cnt++;
        }
        if(i<h-1&&s.at(i+1).at(j)=='.'){
          cnt++;
        }
      }
    }
  }
  cout << cnt / 2 << endl;
}
//H*Wの二次元配列を全探索する。
//１つ１つ見ていき、まずその場所が散らかっていないかチェックする
//もし散らかっていないなら左隣、右隣、上、下をチェックし、散らかっていなかったらcnt++
//多分敷ける数は二倍になると思われるゆえ、出力の際はcntを半分にする必要ある？
