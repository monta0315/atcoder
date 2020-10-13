#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  long w, h, x, y;
  cin >> w >> h >> x >> y;
  if(x==w*0.5||y==0.5*h){
    if (x == w * 0.5 && y == 0.5 * h){
      cout << (double)w * h * 0.5 <<
      '1' << endl;
      exit(0);
    }
    else{
      cout << (double)w * h * 0.5 << '0' << endl;
    }
    exit(0);
  }
  cout << w * h * 0.5 << '1'<<endl;

}
//直線を総当たりして台形の面積の公式から求めていく
//場合分けとして、傾き０の時の直線で面積が半分になるか考える
//与えられたxがwの1/2,またはhがyの1/2の時、半分になる面積を出力する
//それ以外の場合(本番)→傾きベースで求めていく
//直線を通る一点が分かっているため、傾きの範囲は0<a<yになる
