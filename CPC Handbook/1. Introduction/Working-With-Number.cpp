#include<bits/stdc++.h>

using namespace std;

int main()
{
  // Large Number
  int M = 25;
  long long Tot = pow(25, 11);
  cout << Tot << "\n";
  
  // Floating Point
  double x = 0.3 * 3 + 0.1;
  double y = 0.2 * 4 + 0.2;
  printf("%.15f %.15f", x, y);
  if (abs(x-y) < 1e-9){
    cout << "\nMaybe they're equal";
  }else{
    cout << "\nIDK maybe not";
  }
  return 0;
}
