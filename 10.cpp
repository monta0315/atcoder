#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  int a, b;
  cin >> a >> b;
  cout << "A:";
  rep(i, a)
  {
    cout << "]";
  }
  cout << endl;
  cout << "B:";
  rep(j, b)
  {
    cout << "]";
  }
  cout << endl;
}
