#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  vector<tuple<string, int,int>> s(n);
  rep(i,n){
    string a;
    int b;
    cin >> a >> b;
    s.at(i) = make_tuple(a, b*-1, i + 1);
  }
  all(s);
  rep(i,n){
    string d;
    int e, f;
    tie(d, e, f) = s.at(i);
    cout <<  f << endl;
  }
}
