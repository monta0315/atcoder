#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  long a, b, k;
  cin >> a >> b >> k;
  if(k<a){
    cout << a - k << " " << b << endl;
  }else if(k<a+b){
    cout << 0 << " " << b - (k - a) << endl;
  }else{
    cout << 0 << " " << 0 << endl;
  }
}
//ケース分けする　=>kがaより小さい時は自分の分だけ食う
//kがaより大きくa+bより小さい場合は0,b-(k-a)を出力
//kがa+bより大きい場合は００を出力して終わり！
