#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;

int main()
{
  bitset<8> a("00011011");
  bitset<8> b("00110101");

  auto c = a & b;
  cout << c << endl;
  cout << (c << 4) << endl;   //左に４つシフト
  c ^= bitset<8>("11010000"); //xor
  //cout << c << endl;
  bitset<4> s;
  s.set(0, 1); //0番目のビットを1にする
  //cout << s << endl;
  if (s.test(3))
  {
    cout << "4th bit is 1" << endl;
  }
  else
  {
    //cout << "4th bit is 0" << endl;
  }
  for (int tmp = 0; tmp < (1 << 3); tmp++)
  {
    bitset<3> s(tmp);
    cout << s << endl;
  }
}
