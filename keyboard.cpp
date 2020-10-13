#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;
int main(){
  char s, t;
  cin >> s >> t;
  if(s=='Y'){
    cout << (char)toupper(t) << endl;
  }else{
    cout << t << endl;
  }
}
