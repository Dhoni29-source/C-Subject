#include <iostream>
using namespace std;

int main(){
    char S[1000];
    int C[10000],T,N;

    cout << "Masukkan nilai T :" ; cin >> T;
    if (T > 10 || T < 1)
    {
        cout << "T out of range";
        return 1;
    }

    for (int k=0; k<T; k++)
    {
        cout << "Masukkan nilai N :" ; cin >> N;
        if (N > 1000 || N < 1)
        {
            cout << "N out of range";
            return 2;
        }
        for (int i = 0; i < N; i++)
        {
            cin >> S[i] >> C[i];
        }

        int disc = 0;
        for (int i=0; i<N; i++)
        {
            for (int j=i+1; j<N; j++)
            {
                if ((S[i] == S[j]) && (C[i] == C[j])){
                    if (S[i] != 0) disc += 10;
                    S[i] = '0';
                    S[j] = '0';
                    C[i] = '0';
                    C[j] = '0';
                }
            }
        }   
        cout << "Disc =" << disc <<endl;
    }
    return 0;
}