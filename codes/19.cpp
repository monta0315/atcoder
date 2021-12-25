#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

void saiten(vector<vector<int>> &A, int &c, int &w)
{
  rep(i, 9)
  {
    rep(j, 9)
    {
      if (A.at(i).at(j) == (i + 1) * (j + 1))
      {
        c++;
      }
      else
      {
        A.at(i).at(j) = (i + 1) * (j + 1);
        w++;
      }
    }
  }
}

int main()
{
  vector<vector<int>> A(9, vector<int>(9));
  rep(i, 9)
  {
    rep(j, 9)
    {
      cin >> A.at(i).at(j);
    }
  }
  int ccnt = 0;
  int wcnt = 0;

  saiten(A, ccnt, wcnt);
  rep(i, 9)
  {
    rep(j, 9)
    {
      cout << A.at(i).at(j);
      if (j < 8)
      {
        cout << " ";
      }
      else
      {
        cout << endl;
      }
    }
  }
  cout << ccnt << endl;
  cout << wcnt << endl;
}
