#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
int sum(vector<int> scores)
{
  int sum = 0;
  rep(i, scores.size())
  {
    sum += scores.at(i);
  }
  return sum;
}

void output(int sum_a, int sum_b, int sum_c)
{
  cout << sum_a * sum_b * sum_c << endl;
}

vector<int> input(int N)
{
  vector<int> vec(N);
  rep(i, N)
  {
    cin >> vec.at(i);
  }
  return vec;
}
int main()
{
  int N;
  cin >> N;
  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);

  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);

  output(sum_A, sum_B, sum_C);
}
