#include<bits/stdc++.h>

using namespace std;

int main(){
  
  // Flow Control
  // if you need to collect all input

  int sum = 0, value = 0;
  while (cin>>value) // it never stop until you hit end of file if it txt or make an error
  {
    sum += value;
  }
  cout << "Total Input is: " << sum << endl;

  return 0;
}