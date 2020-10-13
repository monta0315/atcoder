#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  int x;
  string t;
  cin >> x;
  if (x == 1)
  {
    int price;
    int num;
    cin >> price >> num;
    cout << price * num << endl;
  }
  else
  {
    string t;
    int price;
    int num;
    cin >> t >> price >> num;
    cout << t << "!" << endl;
    cout << price * num << endl;
  }
}
