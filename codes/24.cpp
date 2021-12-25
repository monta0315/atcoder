#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;


struct Clock
{
  int hour;
  int minute;
  int second;

  void set(int h, int m, int s)
  {
    hour = h;
    minute = m;
    second = s;
  }

  string to_str()
  {
    string ret;
    if (hour < 10)
    {
      ret += "0";
    }
    ret += to_string(hour); //to_string()は引数内の数値型を文字に変える
    ret += ":";
    if (minute < 10)
    {
      ret += "0";
    }
    ret += to_string(minute);
    ret += ":";

    if (second < 10)
    {
      ret += "0";
    }
    ret += to_string(second);

    return ret;
  }

  void shift(int diff_second)
  {
    if (diff_second < 0 && diff_second >= -86400)
    {
      hour += diff_second / 3600;
      minute += (diff_second % 3600) / 60;
      second += (diff_second % 3600) % 60;
    }
    else if (diff_second >= 0 && diff_second <= 86400)
    {
      hour += diff_second / 3600;
      minute += (diff_second % 3600) / 60;
      second += (diff_second % 3600) % 60;
    }
    if (second < 0)
    {
      second += 60;
      minute -= 1;
    }
    else if (second >= 60)
    {
      second -= 60;
      minute += 1;
    }
    if (minute < 0)
    {
      minute += 60;
      hour -= 1;
    }
    else if (minute >= 60)
    {
      minute -= 60;
      hour += 1;
    }
    if (hour < 0)
    {
      hour += 24;
    }
    else if (hour >= 24)
    {
      hour -= 24;
    }
  }
};

int main()
{
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  //Clock構造体のオブジェクト宣言
  Clock clock;
  clock.set(hour, minute, second);
  cout << clock.to_str() << endl;
  clock.shift(diff_second);
  cout << clock.to_str() << endl;
}
