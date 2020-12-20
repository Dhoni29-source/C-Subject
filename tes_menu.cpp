#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int p,M,m,N,check; 
    vector<int>price;
    vector<int>ch;

    cout<<"Original program created by Dhoni Ikhsan Widodo \nNIM: 11180970000024"<<endl;
    cout<<"Mohon maaf jika masih ada kekurangan dalam program ini"<<endl;
    cout<<"\nPermasalahan :"<<endl;
    cout<<"Jojo pergi ke restoran. Ada (N) makanan yang terdaftar di menu, dan makanan nya diurutkan berdasarkan harganya. Sekarang Jojo bertanya-tanya ada berapa makanan di sana dengan harga (p). jadi dia akan memberi Anda pertanyaan (M)" <<endl;
    cout<<"\nMasukkan jumlah menu dan harga makanan yang mau dilihat (dalam range 1 - 100000)"<<endl;
    cout<<"Masukkan Jumlah menu dan harga :";
    cin>>N>>M;
    
    if (N > 100000 || N < 1)
    {
        cout << "N out of range";
        return 1;
    }
    
    if (M > 100000 || M < 1)
    {
        cout << "M out of range";
        return 2;
    }

    cout<<"Masukkan Harga :";    
    for(int i=0; i<N; i++)
    {
        cin>>p;
        if (p > 1000000 || p < 1)
        {
            cout<<"P out of range";
            return 3;
        }
        price.push_back(p);
    }

    // Akses data dari harga menu yg sudah di input
    cout<<"Harga menu ke : ";
    for(int j=0; j<M; j++)
    {
        cin>>m;
        check = price[m-1];
        ch.push_back(check);
    }
    
    // Menampilkan hasil data yg diakses dari data harga menu
    cout <<"yaitu : ";
    for(int k=0; k<ch.size(); k++)
    {
        if (ch[k] < 0)
        {
            cout << 0;
        }
        else
        {
            cout<<ch[k]<<" ";
        }
        
    }
   
}
 
 
  

