#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  string s;
  cin >> s;
  rep(i,3){
    if(s.at(i)==s.at(i+1)){
      cout << "Bad" << endl;
      exit(0);
    }
  }
  cout << "Good" << endl;
}
