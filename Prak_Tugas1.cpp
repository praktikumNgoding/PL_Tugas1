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
        cout << "\n  Indeks buku ke-" << Indeks << endl; Sleep(jeda/10);
        cout << "\tPenulis  : " << this->Penulis << endl; Sleep(jeda/9);
        cout << "\tTahun    : " << this->Tahun << endl; Sleep(jeda/8);
        cout << "\tJudul    : " << this->Judul << endl; Sleep(jeda/7);
        cout << "\tKota     : " << this->Kota << endl; Sleep(jeda/6);
        cout << "\tPenerbit : " << this->Penerbit << endl; Sleep(jeda/5);
        cout << "\tHalaman  : " << this->Halaman << endl; Sleep(jeda/4);
        Sleep(jeda*2);
    }
};

void initTek(){ //kategori Teknologi
    Book Tek[5];
    Tek[0].setAtr(1, "Dr. Deni Darmawan, S.Pd., M.Si", 2011, "Teknologi Pembelajaran", "Jakarta", "Remaja Rosdakarya", 112);
    Tek[1].setAtr(2, "Murhada. S.Kom., M.M.", 2011, "Pengantar Teknologi Informasi", "Jakarta", "Mida Karya", 262);
    Tek[2].setAtr(3, "Herry Purnomo, S.Kom, M.T.", 2014, "Pengenalan Informatika Teknik", "Makassar", "Andi", 212);
    Tek[3].setAtr(4, "Farhanitrate, S.T., M.T.", 2012, "Teknologi sebagai Tradisi", "Medan", "Deepublish", 92);
    Tek[4].setAtr(5, "Prerajulization, S.T., M.T.", 2008, "Organisasi dan Arsitektur Komputer", "Surabaya", "Sinamita", 319);
    cout << "Kategori Teknologi :";
    for (int i=0 ; i<5 ; i++){
        Tek[i].showAtr();
    }
}

void initFil(){ //kategori Filsafat
    Book Fil[5];
    Fil[0].setAtr(1, "Dr. Stephen Palmquis", 2014, "Pohon Filsafat", "Kediri", "Wedatama Widya Sastra", 120);
    Fil[1].setAtr(2, "Prof. Dr. Agung Suganjar", 2003, "Filsafat Hukum", "Medan", "Digitama Karya", 140);
    Fil[2].setAtr(3, "Dr. Reza Ahmadi", 2010, "Filsafat Politik untuk Indonesia", "Jakarta", "Gading Sastra", 143);
    Fil[3].setAtr(4, "Prof Dr. Zainal Abidin", 2005, "Filsafat Manusia", "Semarang", "Katawama", 201);
    Fil[4].setAtr(5, "Dr. Kemal Zainudin", 2011, "Filsafat Pra-skolastik", "Malang", "Gatingka", 94);
    cout << "\nKategori Filsafat :";
    for (int i=0 ; i<5 ; i++){
        Fil[i].showAtr();
    }
}

void initSej(){ //kategori Sejarah
    Book Sej[5];
    Sej[0].setAtr(1, "Prof. Dr. Sasongko Purbo, M.A.", 2003, "Sejarah Para Khalifah", "Jakarta", "Gading Sastra", 90);
    Sej[1].setAtr(2, "Sugeng Saestu ", 2004, "Sejarah Banten", "Jakarta", "Gatingka", 125);
    Sej[2].setAtr(3, "Andi Susilo S.Pd., M.Si", 2009, "Sejarah Peradaban Dunia Kuno", "Malang", "Satria Karya", 237);
    Sej[3].setAtr(4, "Ginanjar Sukirman", 2006, "Sejarah Wayang Purwa", "Malang", "Mida Sastra", 183);
    Sej[4].setAtr(5, "Dr. Tatang Sutarman", 2001, "Sejarah Melayu", "Jakarta", "Digitama Karya", 277);
    cout << "\nKategori Sejarah :";
    for (int i=0 ; i<5 ; i++){
        Sej[i].showAtr();
    }
}

void initAga(){ //kategori Agama
    Book Aga[5];
    Aga[0].setAtr(1, "Aa Gym", 2007, "Tanda-tanda ikhlas seorang Hamba", "Jakarta", "MQS Pustaka Grafika", 41);
    Aga[1].setAtr(2, "Tasirun Sulaiman", 2010, "13 Misteri di Kota Mekkah", "Jakarta", "Shanju Sastra", 91);
    Aga[2].setAtr(3, "Drs. Nur Hadi", 2014, "Dahsyatnya Ikhlas", "Tangerang", "Dian Rakyat", 142);
    Aga[3].setAtr(4, "Drs. Nuhlil Ahmad", 2012, "Buku Pintar Agama Islam", "Medan", "Zepta Sastra", 72);
    Aga[4].setAtr(5, "Dr. Haji Umi Saifulloh", 2006, "Agama dan Sains", "Cibubur", "Lyto", 80);
    cout << "\nKategori Agama :";
    for (int i=0 ; i<5 ; i++){
        Aga[i].showAtr();
    }
}

void initPsi(){ //kategori Psikologi
    Book Psi[5];
    Psi[0].setAtr(1, "Prof. Dr. Sofyan T. R.", 2007, "Psikologi Kepribadian", "Cilembu", "Dian Pustaka", 84);
    Psi[1].setAtr(2, "Norman D Sundberg", 2014, "Psikologi Pendidikan", "Jakarta", "DDL Junction", 96);
    Psi[2].setAtr(3, "Dr. Kaelany", 2010, "Psikologi Sosial", "Sigura-gura", "Zepetto", 120);
    Psi[3].setAtr(4, "Dr. Fattah Hanurawan", 2003, "Psikologi Komunikasi", "Sigamalama", "Satria Karya", 72);
    Psi[4].setAtr(5, "Dr. Istiqomah Wibowo", 2008, "Analisis Tulisan Tangan", "Malang", "Sukino Karya", 51);
    cout << "\nKategori Psikologi :";
    for (int i=0 ; i<5 ; i++){
        Psi[i].showAtr();
    }
}

void initPol(){ //kategori Politik
    Book Pol[5];
    Pol[0].setAtr(1, "Dr. Niko Prahendra, M.Si", 2003, "Ilmu Politik", "Jonggol", "Megakarya", 210);
    Pol[1].setAtr(2, "Jeremy Susan", 2009, "Komunikasi Politik", "Cibinong", "Gading Sastra", 123);
    Pol[2].setAtr(3, "Dr. Yon Abadi", 2005, "Politik Ideologi Pendidikan", "Jakarta", "Sinamita", 351);
    Pol[3].setAtr(4, "Prof. Ahmad Fuadi", 2014, "Teori Politik Modern", "Surabaya", "Pionir Massa", 209);
    Pol[4].setAtr(5, "Jessica Veranda", 2013, "Dasar-dasar Ilmu Politik", "Malang", "Digitama Karya", 91);
    cout << "\nKategori Politik :";
    for (int i=0 ; i<5 ; i++){
        Pol[i].showAtr();
    }
}

void initFik(){ //kategori Fiksi
    Book Fik[5];
    Fik[0].setAtr(1, "Rangga Almahendra", 2013, "Warna Langit", "Gresik", "Mahagita", 102);
    Fik[1].setAtr(2, "Heri Sutarman", 2016, "Aku Menolak Hukuman Mati", "Solo", "Voldemort", 332);
    Fik[2].setAtr(3, "Andela Yuwono", 2012, "Dalam Mihrab Cinta", "Surabaya", "Gagasmedia", 212);
    Fik[3].setAtr(4, "Adhisty Zara", 2017, "The Diviners", "Malang", "Nusantara Abadi", 97);
    Fik[4].setAtr(5, "Phillip Pulman", 2015, "Evermore", "Jakarta", "Mitra Pemuda", 159);
    cout << "\nKategori Fiksi :";
    for (int i=0 ; i<5 ; i++){
        Fik[i].showAtr();
    }
}

void intro(){
    cout << "Daftar Koleksi Buku Perpustakaan X\n" << endl;
}

int main(){
    Sleep(jeda);
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
