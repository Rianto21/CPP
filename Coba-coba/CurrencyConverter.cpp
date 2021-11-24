#include<bits/stdc++.h>

using namespace std;

int main(){

  printf("WELCOME TO CURRENCY CONVERTER\n1. USD-IDR\n2. IDR-USD\n3. USD-EUR\n4. EUR-USD\n"
  "5. EUR-IDR\n6. IDR-EUR\n7. Exit\nPick Option:");
  int option;
  float nominal;
  cin >> option;
  if(option >= 1 and option <= 6){
    printf("Input Nominal: ");
    cin >> nominal;
    if(option == 1){
      printf("USD = %.2f\nIDR = %.2f\nThank you for using our program!", nominal, nominal*14300);
    }
    if(option == 2){
      printf("IDR = %.2f\nUSD = %.2f\nThank you for using our program!", nominal, nominal*0.000070);
    }
    if(option == 3){
      printf("USD = %.2f\nEUR = %.2f\nThank you for using our program!", nominal, nominal*0.89);
    }
    if(option == 4){
      printf("EUR = %.2f\nUSD = %.2f\nThank you for using our program!", nominal, nominal*1.12);
    }
    if(option == 5){
      printf("EUR = %.2f\nIDR = %.2f\nThank you for using our program!", nominal, nominal*16022);
    }
    if(option == 6){
      printf("IDR = %.2f\nEUR = %.2f\nThank you for using our program!", nominal, nominal*0.000062);
    }
  }else if(option == 7){
    printf("THANK YOU! SEE YOU NEXT TIME!");
  }else{
    printf("Wrong Input");
  }
  return 0;
}