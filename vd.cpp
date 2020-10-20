#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n;
  cin >> n;
  vector<int> x(n);
  int max = 0;
  rep(i, n)
  {
    int a;
    cin >> a;
    x.at(i)=a;
    if(abs(a)>max){
      max = abs(a);
    }
  }
  long man = 0;
  double yu = 0;
  rep(i, n)
  {
    man += abs(x.at(i));
    yu += x.at(i) * x.at(i);
  }
  cout << man << endl;
  cout <<fixed<<setprecision(15)<< sqrt(yu) << endl;
  cout << max << endl;
}
