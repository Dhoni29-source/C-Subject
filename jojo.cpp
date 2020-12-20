#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int p,M,m,N,check;
    vector<int>price;
    vector<int>ch;

    cout << "Masukkan jumlah menu dan harga : ";
    cin>>N;
    cin>>p; //N input jumlah makanan dan p input jumlah harga

    //cek variabel N
    if (N > 100000  || N < 1)
    {
        cout<<"N out of range";
        return 1;
    }
    
    //cek variabel p
    cout << "Masukkan harga makanan : ";
    if (p > 1000000000 || p < 1)
    {
        cout << "p  out of range";
        return 2;
    }

    //Mengurutkan harga makanan (m)
    for (int i=0; i<N; i++)
    {
        cin >> m;
        price.push_back(m);
    }

    //Akses data harga makanan yg sudah di urutkan (m) supaya bisa jawab pertanyaan jojo (M)
    cout << "Harga menu ke : ";
    for (int j=0; j<p; j++)
    {
        cin >> M;
        //cek variabel M
        if (M > 100000 || M < 1) // jgn lupa tanda =
        {
            cout << "M out of range";
            return 3;
        }
        else
        {
            check = price[M-1];
            ch.push_back(check);
        }
    }

    //Menampilkan data untuk menjawab pertanyaan si Jojo
    cout <<"Yaitu : ";
    for (int k=0; k<ch.size(); k++)
    {
        if (ch[k] < 0)
        {
            cout << 0;
        }
        else
        {
            cout << ch[k] <<" ";
        }
        
    }
    
}