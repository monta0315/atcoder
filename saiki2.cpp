#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(v) sort(v.begin(), v.end())
typedef long long ll;
using Graph = vector<vector<int>>;

//aからbまでの総和を返したい
int sum_range(int a, int b)
{
  //a~bまでの総和を計算する
  if (a == b)
  {
    return 0;
  }
  int s = sum_range(a, b - 1);
  return s + b;
}
//配列の総和を返したい
int array_sum(vector<int> &A int i)
{
  int i = 0;
  //配列の総和を計算する→0番目からA.size()番目までの要素の和を計算する
  if (i == A.size())
  {
    return 0;
  }
  int s = array_sum(A, i + 1);
  return s + A.at(i);
}

int main()
{
  int s = 0;
  vector<int> A(5, 2);

  cout << array_sum(A) << endl;
}
