#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  typedef long long ll;
  typedef double db;
  typedef string str;

  int M = 25;
  ll N = pow(25, 5);
  cout << N << "\n";

  str s = "Mikliery Mansion";
  cout << s << " " << s.size() << " " << typeid(N).name() << "\n";

  db x = 0.3 * 3 + 0.1;
  printf("%.12f", x);
  return 0;
}
