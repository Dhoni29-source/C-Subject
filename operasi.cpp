/*
      Operasi Berbasis Objek
      Microsoft Visual Studio Express 2012
      [RS]
*/
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

//deklarasi struct bernama Input
struct Input
{
      float data;
}obj1, obj2; //objek dari struct Input

//deklarasi struct untuk Hasil
struct Hasil
{
      float jumlah,kurang,kali,bagi;
}result; //objek dari struct Hasil
//Catatan : Objek digunakan untuk mengakses anggota struct

//fungsi untuk melakukan input dan menyimpan ke dalam FILE
void input(Input obj1, Input obj2)
{
     
      /*- ofstream adalah stream class untuk menulis pada FILE
        - dataInput1 dan dataInput2 merupakan objek dari ofstream
        - data yang diinput disimpan dalam "Input1.txt" dan "Input2.txt"
      */
      ofstream dataInput1("Input1.txt");
      ofstream dataInput2("Input2.txt");

      cout<<"\nMasukkan bilangan pertama : "; cin>>obj1.data;
      cout<<"Masukkan bilangan kedua : "; cin>>obj2.data;

      //Menyimpan ke dalam FILE
      dataInput1.write((char *)&obj1, sizeof(obj1));
      dataInput2.write((char *)&obj2, sizeof(obj2));

      //menutup FILE
      dataInput1.close();
      dataInput2.close();
}

//fungsi untuk melakukan penghitungan
void hitung(Input obj1, Input obj2)
{
      //pendeklarasian variabel
      float bil1, bil2;
      Hasil result;

      ofstream dataHasil("Hasil.txt");

      //ifstream : stream class untuk membaca FILE(Input1.txt)
      ifstream bukaInput1("Input1.txt");
      bukaInput1.read((char *)&obj1, sizeof(obj1));

      //operasi penugasan, bil1 = nilai “data” pada obj1
      bil1 = obj1.data;

      ifstream bukaInput2("Input2.txt");
      bukaInput2.read((char *)&obj2, sizeof(obj2));

      //operasi penugasan, bil1 = nilai “data” pada obj2
      bil2 = obj2.data;

      //hasilnya disimpan dalam objek struct -> "result"
      result.jumlah = bil1 + bil2;
      result.kurang = bil1 - bil2;
      result.kali = bil1 * bil2;
      result.bagi = bil1 / bil2;

      //menulis hasil berupa objek ke dalam FILE
      dataHasil.write((char *)&result, sizeof(result));

      //menutup FILE
      bukaInput1.close();
      bukaInput2.close();
      dataHasil.close();
}

//fungsi untuk menampilkan hasil
void hasil(Hasil result)
{
      ifstream bukaHasil("Hasil.txt");
     
      /*membaca data berupa objek yang ada dalam FILE "Hasil.txt")*/
      bukaHasil.read((char *)&result, sizeof(result));
     
      //menampilkan hasil pengaksesan FILE
      cout<<"\nHASIL : "<<endl;
      cout<<"-------"<<endl;
      cout<<"Hasil penjumlahan = "<<result.jumlah<<endl;
      cout<<"Hasil pengurangan = "<<result.kurang<<endl;
      cout<<"Hasil perkalian   = "<<result.kali<<endl;
      cout<<"Hasil pembagian   = "<<result.bagi<<endl;
     
      //menutup FILE
      bukaHasil.close();
}

//fungsi main
int main()
{
      cout<<"OPERASI ARITMATIKA ANTARA DUA FILE"<<endl;
      cout<<"=================================="<<endl;
     
      //pemanggilan fungsi
      input(obj1, obj2);
      hitung(obj1, obj2);
      hasil(result);

      _getche();
      return 0;
}