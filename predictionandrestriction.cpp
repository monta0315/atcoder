#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
#define out(s) cout << s << endl
typedef long long ll;
using Graph = vector<vector<int>>;



int solve(int r,int s,int p,char t){
  if(t=='r'){
    return p;
  }else if(t=='s'){
    return r;
  }else{
    return s;
  }
}

int solve2(int r, int s, int p, char t){
  if (t == 'r')
  {
    return r;
  }
  else if (t == 's')
  {
    return s;
  }
  else
  {
    return p;
  }
}

    int main()
{
  int n, k, r, s, p;
  cin >> n >> k >> r >> s >> p;
  vector<char> t(n);
  rep(i,n){
    cin >> t.at(i);
  }
  long ans = 0;
  vector<bool> h(n);
  rep(i, n)
  {
    if(i<k){
      ans += solve(r, s, p, t.at(i));
      h.at(i) = true;
    }
    else if (i < 2 * k)
    {
      if(t.at(i)==t.at(i-k)){
        h.at(i) = false;
      }
      else
      {
        ans += solve(r, s, p, t.at(i));
        h.at(i) = true;
      }
    }
    else
    {
      if (t.at(i) == t.at(i - k))
      {
        if(h.at(i-2*k)==true&&t.at(i)==t.at(i-2*k)){
          ans += solve(r, s, p, t.at(i));
          h.at(i) = true;
        }else{
          h.at(i) = false;
        }
      }
    }
    out(ans);
  }
  out(ans);
}
//とりあえずforをn回回し、t.at(i)に対して勝てる手の値を加算する
//n>kになった時、k回前と同じ手を出せない=>出した手を保存しておく必要がある？
//出した手保存用の配列を作成する
//N>kになった際にまず勝つ手を選択し、次にi-k目の手を参照し、違った場合スルー、同じだった場合1を代入する
//k回前が１だった場合、勝てる手を出せる
