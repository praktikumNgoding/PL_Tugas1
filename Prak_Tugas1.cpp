#include <iostream>
#include <windows.h>
using namespace std;
int jeda = 420;

class Book{
    int Indeks;
    string Penulis;
    int Tahun;
    string Judul;
    string Kota;
    string Penerbit;
    int Halaman;

public:
    //method
    void setAtr(int in, string na, int ta, string ju, string ko, string pen, int hal){
        this->Indeks = in;
        this->Penulis = na;
        this->Tahun = ta;
        this->Judul = ju;
        this->Kota = ko;
        this->Penerbit = pen;
        this->Halaman = hal;
    }

    void showAtr(){
        cout << "\n  Indeks buku ke-" << Indeks << endl; Sleep(jeda/8);
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
    Tek[0].setAtr(1, "Dr. Deni Darmawan, S.Pd., M.Si", 2011, "Teknologi Pembelajaran", "Jakarta", "Remaja Rosdakarya", 112);
    Tek[1].setAtr(2, "Murhada. S.Kom., M.M.", 2011, "Pengantar Teknologi Informasi", "Jakarta", "Mida Karya", 262);
    Tek[2].setAtr(3, "Herry Purnomo", 2014, "Pengenalan Informatika Teknik", "Makassar", "Andi", 212);
    Tek[3].setAtr(4, "Agung Sudjatmiko", 2012, "Teknologi sebagai Tradisi", "Medan", "Deepublish", 92);
    Tek[4].setAtr(5, "Farhanitrate", 2008, "Organisasi dan Arsitektur Komputer", "Surabaya", "Sinamita", 319);
    cout << "Kategori Teknologi :";
    for (int i=0 ; i<5 ; i++){
        Tek[i].showAtr();
    }
}

void initFil(){ //kategori Filsafat
    Book Fil[5];
    Fil[0].setAtr(1, "Dr. Stephen Palmquis", 2014, "Pohon Filsafat", "Kediri", "Wedatama Widya Sastra", 120);
    Fil[1].setAtr(2, "Agung Suganjar", 2003, "Filsafat Hukum", "Medan", "Digitama Karya", 140);
    Fil[2].setAtr(3, "Reza Ahmadi", 2010, "Filsafat Politik untuk Indonesia", "Jakarta", "Gading Sastra", 143);
    Fil[3].setAtr(4, "Zainal Abidin", 2005, "Filsafat Manusia", "Semarang", "Katawama", 201);
    Fil[4].setAtr(5, "Kemal Zainudin", 2011, "Filsafat Pra-skolastik", "Malang", "Gatingka", 94);
    cout << "\nKategori Filsafat :";
    for (int i=0 ; i<5 ; i++){
        Fil[i].showAtr();
    }
}

void initSej(){ //kategori Sejarah
    Book Sej[5];
    Sej[0].setAtr(1, "Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Sej[1].setAtr(2, "Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Sej[2].setAtr(3, "Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Sej[3].setAtr(4, "Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Sej[4].setAtr(5, "Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Sejarah :";
    for (int i=0 ; i<5 ; i++){
        Sej[i].showAtr();
    }
}

void initAga(){ //kategori Agama
    Book Aga[5];
    Aga[0].setAtr(1, "Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Aga[1].setAtr(2, "Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Aga[2].setAtr(3, "Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Aga[3].setAtr(4, "Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Aga[4].setAtr(5, "Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Agama :";
    for (int i=0 ; i<5 ; i++){
        Aga[i].showAtr();
    }
}

void initPsi(){ //kategori Psikologi
    Book Psi[5];
    Psi[0].setAtr(1, "Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Psi[1].setAtr(2, "Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Psi[2].setAtr(3, "Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Psi[3].setAtr(4, "Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Psi[4].setAtr(5, "Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Psikologi :";
    for (int i=0 ; i<5 ; i++){
        Psi[i].showAtr();
    }
}

void initPol(){ //kategori Politik
    Book Pol[5];
    Pol[0].setAtr(1, "Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Pol[1].setAtr(2, "Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Pol[2].setAtr(3, "Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Pol[3].setAtr(4, "Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Pol[4].setAtr(5, "Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Politik :";
    for (int i=0 ; i<5 ; i++){
        Pol[i].showAtr();
    }
}

void initFik(){ //kategori Fiksi
    Book Fik[5];
    Fik[0].setAtr(1, "Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
    Fik[1].setAtr(2, "Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
    Fik[2].setAtr(3, "Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
    Fik[3].setAtr(4, "Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
    Fik[4].setAtr(5, "Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
    cout << "\nKategori Fiksi :";
    for (int i=0 ; i<5 ; i++){
        Fik[i].showAtr();
    }
}

void intro(){
    cout << "Daftar Koleksi Buku Perpustakaan X\n" << endl;
}

int main(){
    intro();
    initTek();
    initFil();
    initSej();
    initAga();
    initPsi();
    initPol();
    initFik();

    return 0;
}
