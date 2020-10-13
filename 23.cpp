#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> cnt(N, 0);
  int max = 0;
  rep(i, N)
  {
    cin >> A.at(i);
    cnt.at(A.at(i))++;
    if (A.at(i) > max)
    {
      max = A.at(i);
    }
  }

  sort(cnt.begin(), cnt.end());
  cout << max << " " << cnt.at(N - 1) << endl;
}
