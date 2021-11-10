#include<iostream>

using namespace std;

// int rekursifpenjumlahan(int n){
//   if(n == 1){
//     return(n);
//   }else{
//     return(n + rekursifpenjumlahan(n-1));
//   }
// }

// int main(){

//   int jumlah_perulangan;
//   cin >> jumlah_perulangan;

//   cout << rekursifpenjumlahan(jumlah_perulangan) << endl;

//   return 0;
// }

bool palindrom(string kata, int a, int z){
  if(z <= 0){
    return true;
  }else if(kata[a] != kata[z]){
    return false;
  }else if(a < z+1){
    return palindrom(kata, a+1, z-1);
  }
  return true;
}

int main(){
  string katates;
  getline(cin, katates);
  int x = katates.length();

  if(palindrom(katates, 0, x-1)){
    cout << "yes it is palindrome";
  }else{
    cout << "absolutely not palindrome";
  }

  return 0;
}