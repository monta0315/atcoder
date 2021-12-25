#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n, x;
  cin >> n >> x;
  vector<int> l(n);
  rep(i,n){
    cin >> l.at(i);
  }
  vector<int> d(n + 10);
  d.at(0) = 0;
  for (int i = 1; i <= n ; i++)
  {
    d.at(i) = d.at(i - 1) + l.at(i - 1);
    if(d.at(i)>x){
      cout << i  << endl;
      exit(0);
    }
  }
  cout << n + 1 << endl;
}
//配列dを用意し、数列式通りに値を代入していく
//di>xになったタイミングで終了し、iを跳ねた回数として出力する
//i=N+1になった瞬間、終了し、N+1を出力する
