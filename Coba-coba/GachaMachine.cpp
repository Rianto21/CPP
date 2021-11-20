#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<string> hasil_gacha;

  int gacha_times;
  cin >> gacha_times;

  for(int i = 0; i < gacha_times; i++){
    int random_number = (rand() % 100 + 1);
    if(random_number <= 60){
      hasil_gacha.push_back("Bintang1");
      cout << "Mendapatkan Hero Bintang 1\n";
    }else if(random_number <= 80){
      hasil_gacha.push_back("Bintang2");
      cout << "Mendapatkan Hero Bintang 2\n";
    }else if(random_number <= 95){
      hasil_gacha.push_back("Bintang3");
      cout << "Mendapatkan Hero Bintang 3\n";
    }else if(random_number <= 99){
      hasil_gacha.push_back("Bintang4");
      cout << "Selamat! Kamu Mendapatkan Hero Bintang 4\n";
    }else{
      hasil_gacha.push_back("Bintang5");
      cout << "Luar Biasa!!! Kamu Berhasil Mendapatkan Hero Bintang 5\n";
    }
  }

  cout << "Jumlah Hero Bintang 1:"<< count(hasil_gacha.begin(), hasil_gacha.end(), "Bintang1") << "\n";
  cout << "Jumlah Hero Bintang 2:"<< count(hasil_gacha.begin(), hasil_gacha.end(), "Bintang2") << "\n";
  cout << "Jumlah Hero Bintang 3:"<< count(hasil_gacha.begin(), hasil_gacha.end(), "Bintang3") << "\n";
  cout << "Jumlah Hero Bintang 4:"<< count(hasil_gacha.begin(), hasil_gacha.end(), "Bintang4") << "\n";
  cout << "Jumlah Hero Bintang 5:"<< count(hasil_gacha.begin(), hasil_gacha.end(), "Bintang5") << "\n";

  return 0;
}