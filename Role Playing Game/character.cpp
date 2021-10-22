#include<iostream>

using namespace std;

void PrintName(string pname){
  cout << "Hello! " << pname << " Wellcome to CRPG" << endl;
}

unsigned long long Fibbonaci(int numbern){
  unsigned long long n2n1[2] = {0,1};
  unsigned long long  n = 0;
  for(int i = 0; i < numbern; i++){
    n = n2n1[0] + n2n1[1];
    n2n1[0] = n2n1[1];
    n2n1[1] = n;
  }
  return n;
}

int main()
{
  cout << "Wellcome To RolerBlade!" <<endl;
  string name; 
  cout << "Type your player name: ";
  getline(cin, name);
  PrintName(name); 

  cout << Fibbonaci(100) << endl;

  return 0;
}