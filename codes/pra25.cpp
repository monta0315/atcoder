#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N)
  {
    cin >> A.at(i);
  }
  bool ans = false;
  for (int tmp = 0; tmp < (1 << 20); tmp++)
  {
    bitset<20> s(tmp);
    int sum = 0;
    rep(i, N)
    {
      if (s.test(i))
      {
        sum += A.at(i);
      }
    }
    if (sum == K)
    {
      ans = true;
    }
  }
  if (ans)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
