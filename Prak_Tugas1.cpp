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
  void setAttribute(string na, int ta, string ju, string ko, string pen, int hal);
    this->Penulis = na;
    this->Tahun = ta;
    this->Judul = ju;
    this->Kota = ko;
    this->Penerbit = pen;
    this->Halaman = hal;
  
  void showAttribute();
  
  
};
