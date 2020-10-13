#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int a, b;
  cin >> a >> b;
  if(a>=13){
    cout << b << endl;
  }else if(a<=5){
    cout << 0 << endl;
  }else{
    cout << b / 2 << endl;
  }
}
