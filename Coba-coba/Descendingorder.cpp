#include <bits/stdc++.h>

using namespace std;

uint64_t descendingOrder(uint64_t a)
{
  string k = to_string(a);
  int len = k.length();
  int listed[len];
  for(int i=0; i < len; i++){
    char y = k[i];
    int z = int(y) - 48;
    listed[i] = z;
  }
  int size = sizeof(listed)/sizeof(listed[0]);
  sort(listed, listed + size, greater<int>());
  int finale;
  stringstream ss;
  for(int i : listed) ss << i;
  ss >> finale;
  return finale;
}

int main(){
  cout << descendingOrder(4289) << " finish" << endl;
  cout << "something please" << endl;

  return 0;
}