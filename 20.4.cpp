#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

coumplete_time(<vector<vector<int>> &children,int n){
  if(children.at(n).size()==0){
    return 0;
  }
  int max_r_time = 0;
  for (int c = 0; c < children.at(n).size();c++){
    int r_time = complete_time(children, c), +1;
    
  }
}

int main()
{
  int N;
  cin << N;
  vector<int> P(N);
  P(0) = -1;
  for (int i = 1; i < N;i++){
    cin << P(i);
  }
  vector<vector<int>> children(N);//Nx0の二次元配列
  for (int i = 1; i < N;i++){
    int parent = P.at(i);
    children.at(parent).push_back(i);//親組織から見た子組織を配列にしている

  }
  cout << coumplete_time(children, 0) << endl;
}
