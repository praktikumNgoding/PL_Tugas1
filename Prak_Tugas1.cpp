#include <iostream>
using namespace std;

class Book{
  //atribut buku NaTaJuKoPen
  string Penulis;
  int Tahun;
  string Judul;
  string Kota;
  string Penerbit;
  int halaman;

public:
  //method
  void setAtr(string na, int ta, string ju, string ko, string pen, int hal){
    this->Penulis = na;
    this->Tahun = ta;
    this->Judul = ju;
    this->Kota = ko;
    this->Penerbit = pen;
    this->Halaman = hal;
  }
  
  void showAtr(){
  
  }
};

void initTek(){
  Book Tek[5];
  Tek[0].setAtr("Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
  Tek[1].setAtr("Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
  Tek[2].setAtr("Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
  Tek[3].setAtr("Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
  Tek[4].setAtr("Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
  cout << "Kategori Teknologi :";
  for (int i=0 ; i<5 ; i++){
    Tek[i].showAtr(i);
  }
  
  
}

int main(){
 
  return 0;
}
