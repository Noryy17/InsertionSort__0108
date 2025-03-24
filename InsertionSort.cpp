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

    cout << endl; //Membuat jarak per baris program
    cout << "=======================" << endl; //Membuat Tampilan susunan data Element Array
    cout << "Masukkan Element Array"  << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i +1) << ":";
    }


}