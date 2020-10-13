#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int sum(int N)
{
  if (N == 0)
  {
    return 0;
  }

  int s = sum(N - 1);
  return s + N;
}

int sum_range(int a, int b)
{
  //ベースケース
  if (b == a)
  {
    return 0;
  }
  //a~bまでの総和を計算したい
  //再帰ステップ
  int sum = sum_range(a, b - 1);
  return sum + b;
}

int array_sum_from_i(vector<int> &data,int i){
  if(i==data.size()){
    return 0;
  }
  return array_sum_from_i(data, i + 1) + data.at(i);
}

int array_sum(vector<int> &data){
  array_sum_from_i(data, 0);

}

int main()
{
  cout << sum_range(2, 6) << endl;
}
