#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int main()
{
  vector<int> data(5);
  rep(i, 5)
  {
    cin >> data.at(i);
  }
  bool ans = false;
  for (int j = 1; j < 5; j++)
  {
    if (data[j] == data[j - 1])
    {
      ans = true;
    }
  }
  if (ans == true)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
