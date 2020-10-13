#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  vector<int> p(n);
  vector<int> cnt(200010, 0);
  rep(i, n)
  {
    cin >> p.at(i);
  }
  int min = 0;
  rep(i, n)
  {
    cnt.at(p.at(i))++;
    if(p.at(i)==min){
      int m = min;
      while (cnt.at(m) != 0)
      {
        m++;
      }
      min = m;
    }
    cout << min << endl;
  }
}
//カウント用の配列を用意する
//minを初期値０として用意しておく
//p.at(i)とminを比較し、等しかったら、minの値を変える
//等しくなかったらminの値を出力し、改行する
//変え方として、cntを今のminの値から走らせて、最初に0になった値に変更する
