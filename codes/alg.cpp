#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int r, d, x;
  cin >> r >> d >> x;
  double ans;
  rep(i,10){
    ans = r * x - d;
    cout << (long)ans << endl;
    x = ans;
  }
}
