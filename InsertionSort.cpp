#include <iostream>
using namespace std;

int arr[20] ; //Membuat Array Dengan Panjang data 20
int n; // Membuat Variable Inoutan n

void input ()
{
    while (true)
    {
        cout << "Masukkan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <=20)
        {//membuat kondisi n tidak lebih dari 20
          break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Element.\n";
        }
    }
    
}