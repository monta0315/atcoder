#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

int main()
{
  char b;
  cin >> b;
  if (b == 'A')
  {
    cout << 'T' << endl;
  }
  else if (b == 'T')
  {
    cout << 'A' << endl;
  }
  else if (b == 'C')
  {
    cout << 'G' << endl;
  }
  else
  {
    cout << 'C' << endl;
  }
}
