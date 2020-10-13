#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  int n, a;
  cin >> n >> a;
  int x;
  rep(i, n)
  {
    string op;
    cin >> op >> x;
    ;
    if (op == "+")
    {
      a += x;
    }
    else if (op == "-")
    {
      a -= x;
    }
    else if (op == "*")
    {
      a *= x;
    }
    else if (op == "/" && x != 0)
    {
      a /= x;
    }
    else
    {
      cout << "error" << endl;
      break;
    }
    cout << i + 1 << ":" << a << endl;
  }
}
