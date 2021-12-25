#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main(){
  int n, l;
  cin >> n >> l;
  int sum = 0;
  vector<int> s(n+1);
  int min = 10000;
  int cnt = 0;
  while(cnt!=n){
    sum += l;
    cnt++;
    if(abs(l)<min){
      min = abs(l);
    }
    l++;
  }
  if (sum < 0)
  {
    cout << sum+min << endl;
  }
  else
  {
    cout << sum - min << endl;
  }
}
