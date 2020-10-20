#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;

void solve(int x){
  for (int s = 2; s <= sqrt(x);s++){
    if(x%s==0){
      solve(x + 1);
    }
  }
  cout << x << endl;
  exit(0);
}

int main(){
  int x;
  cin >> x;
  if(x==2){
    cout << 2 << endl;
    exit(0);
  }
  solve(x);
}
//とりあえず iをx以上の数スタートでwhile文でやる
//while文の中でfor文をルートi　変数をsとする回す
//もしsでiが割れたらfor文をbreak
//ルートiまで割れなかったらそれを出力
