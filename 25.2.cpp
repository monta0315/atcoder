#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

//AとB共通して含まれる要素からなる集合を返す
bitset<50> intersection(bitset<50> A, bitset<50> B)
{
  return A & B;
}
//AとBのうち少なくとも一方に含まれる要素からなる集合を返す
bitset<50> union_set(bitset<50> A, bitset<50> B)
{
  return A | B;
}
//AとBのうちどちらか一方にだけ含まれる要素からなる集合を返す
bitset<50> symmetric_diff(bitset<50> A, bitset<50> B)
{
  return A ^ B;
}
//Aから値Xを取り除く
bitset<50> subtract(bitset<50> A, int x)
{
  bitset<50> X(x);
  for (int s = 0; s < 50; s++)
  {
    if (X.test(s))
    {
      A.set(s + 1, 0);
    }
  }
  return A;
}
//Aに含まれる要素に1を加える(要素49の場合0になる)
bitset<50> increment(bitset<50> A)
{
  bitset<50> s;
  rep(i, 49)
  {
    if (A.test(i))
    {
      s.set(i + 1, 1);
    }
  }
  if (A.test(49))
  {
    s.set(0, 1);
  }
  return s;
}
// Aに含まれる要素から1を引く(ただし、要素0が含まれる場合は49になるものとする)
bitset<50> decrement(bitset<50> A)
{
  bitset<50> s;
  for (int i = 1; i <= 49; i++)
  {
    if (A.test(i))
    {
      s.set(i - 1, 1);
    }
  }
  if (A.test(0))
  {
    s.set(49, 1);
  }
  return s;
}

//集合Sの内容を昇順に出力する
void print_set(bitset<50> S)
{
  vector<int> cont;
  rep(i, 50)
  {
    if (S.test(i))
    {
      cont.push_back(i);
    }
  }
  rep(i, cont.size())
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << cont.at(i);
  }
  cout << endl;
}

// Sに値xを加える
bitset<50> add(bitset<50> S, int x)
{
  S.set(x, 1); // xビット目を1にする
  return S;
}

int main()
{
  bitset<50> A, B;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    A = add(A, x);
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; i++)
  {
    int x;
    cin >> x;
    B = add(B, x);
  }

  // 操作
  string com;
  cin >> com;

  if (com == "intersection")
  {
    print_set(intersection(A, B));
  }
  else if (com == "union_set")
  {
    print_set(union_set(A, B));
  }
  else if (com == "symmetric_diff")
  {
    print_set(symmetric_diff(A, B));
  }
  else if (com == "subtract")
  {
    int x;
    cin >> x;
    print_set(subtract(A, x));
  }
  else if (com == "increment")
  {
    print_set(increment(A));
  }
  else if (com == "decrement")
  {
    print_set(decrement(A));
  }
  //cout << endl;
  //cout << A << endl;
  //cout << B << endl;
}

}
