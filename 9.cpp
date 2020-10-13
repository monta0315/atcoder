#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  int x, a, b;
  cin >> x >> a >> b;
  x++;
  cout << x << endl;
  x *= (a + b);
  cout << x << endl;
  x *= x;
  cout << x << endl;
  x -= 1;
  cout << x << endl;
}
