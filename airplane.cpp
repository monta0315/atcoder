#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int sum(int a,int b){
  return a + b;
}

int main(){
  int p, q, r;
  cin >> p >> q >> r;
  cout << min(sum(p, q), min(sum(p, r), sum(q, r))) << endl;
}
