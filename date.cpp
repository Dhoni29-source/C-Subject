#include "std_lib_facilities.h"

// enum merupakan sebuah fungsi untuk membuat type data yang kita inginkan
enum Bulan{
    Januari=1, Februari,Maret,April,Mei,Juni,Juli,September,Oktober,November,Desember
    };

class Tanggal{
    public:
        Tanggal(int h, Bulan b, int t); //deklarasi bikin constructor dgn nama yg sama sesuai class (dlm class harus ada constructor)
        
        // helper function 
        //untuk getter function
        int getHari(){return hari;} // {} untuk mengambil nilai dari class yg private
        Bulan getBulan(){return bulan;}
        int getTahun(){return tahun;}

        // untuk setter function
        void setHari(int h);
        void setBulan(Bulan b);
        void setTahun(int t);

        // // untuk adder 
        // void tambah1Hari(); 

   private:
        int hari, tahun;
        Bulan bulan;
    };

// constructor
Tanggal::Tanggal(int h, Bulan b, int t){
        if (!(h>=1 && h<=30)) error("Hari harus diantara 1 sampai 30");
        hari = h;
        bulan = b;
        tahun = t;
    }

// operator tanggal
ostream& operator<<(ostream& os, Tanggal& tanggal){
    os << "(" << tanggal.getHari() << "," << tanggal.getBulan() << "," << tanggal.getTahun() << ")";
    return os;
    }

// function dgn tipe data bool untuk cek tanggal yang di input 
bool cekTanggal(){
    int dd, mm, yyyy;
    cout <<"Informasi cek tanggal" << endl;
    cout <<"Masukkan tanggal bulan tahun (dd mm yyyy) = "; cin>>dd>>mm>>yyyy; // input tanggal nya
    const int jumlahHari[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    // statement if yang difungsikan untuk cek tanggal yang di input apakah valid atau tidak valid
    if(yyyy>0)
      {
        if(mm==1 || mm==3 || mm==5|| mm==7|| mm==8||mm==10||mm==12 && dd>0 && dd<=31)
        cout<<"Tangal Valid";
        else
      
        if(mm==4 || mm==6 || mm==9|| mm==11 && dd>0 && dd<=30)
           cout<<"Tanggal Valid";
        else
           if(mm==2)
              {
              if((yyyy%400==0 || (yyyy%100!=0 && yyyy%4==0)) && dd>0 && dd<=29)
              cout<<"Tanggal Valid";
              else if(dd>0 && dd<=28)
              cout<<"Tanggal Valid";
              else
              cout<<"Tanggal tidak valid";
              }
        else
            cout<<"Tanggal tidak valid";
    }
        else
        cout<<"Tanggal tidak valid";
    return 1;
} 

    void Tanggal::setHari(int h){
        if (!(h>1 && h<=30)) error("Hari sampai 30 aja");
        hari = h;
        }

    void Tanggal::setBulan(Bulan b){
        bulan = b;
        }

    void Tanggal::setTahun(int t){
        tahun = t;
        }

int main(){
    cekTanggal(); //Call function cekTanggal untuk validasi tanggal secara realita

    Tanggal hariIni{1,Januari,2021};
    cout << "\n\nJika tanggal saat ini = " << hariIni << endl;
    hariIni.setHari(2);
    
    Tanggal bulanIni{1,Januari,2021};
    bulanIni.setBulan(Februari);
    
    Tanggal tahunIni{1,Januari,2021};
    tahunIni.setTahun(2022);

    cout << "\nMaka :" << endl;   
    cout << "Tanggal Selanjutnya = " << hariIni << endl;
    cout << "Bulan Selanjutnya = " << bulanIni << endl;
    cout << "Tahun Selanjutnya = " << tahunIni << endl;
    
}