#include <iostream>
#include <windows.h>
using namespace std;
int jeda = 350;

class Book{
    //atribut buku NaTaJuKoPen
    string Penulis;
    int Tahun;
    string Judul;
    string Kota;
    string Penerbit;
    int Halaman;

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
  
    void showAtr(int index){
        cout << "\n  Index buku ke-" << index+1 << endl; Sleep(jeda/8);
        cout << "\tPenulis  : " << this->Penulis << endl; Sleep(jeda/7);
        cout << "\tTahun    : " << this->Tahun << endl; Sleep(jeda/6);
        cout << "\tJudul    : " << this->Judul << endl; Sleep(jeda/5);
        cout << "\tKota     : " << this->Kota << endl; Sleep(jeda/4);
        cout << "\tPenerbit : " << this->Penerbit << endl; Sleep(jeda/3);
        cout << "\tHalaman  : " << this->Halaman << endl; Sleep(jeda/2);
        Sleep(jeda);
    }
};

void initTek(){ //kategori Teknologi
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

void initFil(){ //kategori Filsafat
    Book Fil[5];
    Fil[0].setAtr("Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Fil[1].setAtr("Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Fil[2].setAtr("Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Fil[3].setAtr("Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Fil[4].setAtr("Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Filsafat :";
    for (int i=0 ; i<5 ; i++){
        Fil[i].showAtr(i);
    }
}
  
void initSej(){ //kategori Sejarah
    Book Sej[5];
    Sej[0].setAtr("Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Sej[1].setAtr("Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Sej[2].setAtr("Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Sej[3].setAtr("Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Sej[4].setAtr("Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Sejarah :";
    for (int i=0 ; i<5 ; i++){
        Sej[i].showAtr(i);
    }
}
  
void initAga(){ //kategori Agama
    Book Aga[5];
    Aga[0].setAtr("Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Aga[1].setAtr("Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Aga[2].setAtr("Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Aga[3].setAtr("Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Aga[4].setAtr("Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Agama :";
    for (int i=0 ; i<5 ; i++){
        Aga[i].showAtr(i);
    }
}
  
void initPsi(){ //kategori Psikologi
    
}
  
void initPol(){ //kategori Politik
    
}
  
void initFik(){ //kategori Fiksi
    
}
  
int main(){
 
    initTek();
    initFil();
    initSej();
    initAga();
    initPsi();
    initPol();
    initFik();
  
    return 0;
}
