#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int sum(int n)
{
  if (n == 0)
  {
    return 0;
  }

  int s = sum(n - 1);
  return s + n;
}

int sum_range(int a, int b)
{

  if (a == b)
  {
    return a;
  }

  return sum_range(a, b - 1) + b;
}
//i番目以降の要素の総和を計算する
int array_sum_from_i(vector<int> &data, int i)
{
  if (i == data.size())
  {
    return 0;
  }
  int s = array_sum_from_i(vector<int> & data, i + 1);
  return data.at(i) + s;
}
//dataの全ての要素の総和を計算する
int array_sum(vector<int> &data)
{
  return array_sum_from_i(data, 0);
}

bool has_divisor(int N, int i)
{
  if (i == N)
  {
    return false;
  } //ベースケース
  if (N % i == 0)
  {
    return true;
  } //iがNの約数な場合
  return has_divisor(N, i + 1);
}

bool is_prime(int N)
{
  if (N == 1)
  {
    return false;
  }
  if (N == 2)
  {
    return true;
  }
  else
  {
    return !has_divisor(N, 2);
  }
}

int main()
{
  //cout << sum(2) << endl;
  //cout << sum(3) << endl;
  cout << sum_range(5, 8) << endl;
  cout << is_prime(13) << endl;
}
