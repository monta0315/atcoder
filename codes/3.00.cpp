#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  bool a = true;
  bool b = false;
  bool c = true;
  if (a)
  {
    cout << "At";
  }
  else
  {
    cout << "Yo";
  }

  if (!a && b)
  {
    cout << "Bo";
  }
  else if (!b || c)
  {
    cout << "Co";
  }

  if (a && b && c)
  {
    cout << "foo!";
  }
  else if (true && false)
  {
    cout << "yeah!";
  }
  else if (!a || c)
  {
    cout << "der";
  }

  cout << endl;
}
