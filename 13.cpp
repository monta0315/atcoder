#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  int n;
  cin >> n;
  vector<int> A(n); //int a[100];
  int sum = 0;
  rep(i, n)
  {
    cin >> A.at(i); //cin >> a[i];
  }
  rep(j, n)
  {
    sum += A.at(j);
  }
  int ave = sum / n;
  rep(k, n)
  {
    cout << abs(A[k] - ave) << endl;
  }
}
