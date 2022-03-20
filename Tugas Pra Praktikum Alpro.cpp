#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    
    float a, b, x;
    int pilih;
    
    while(true)
    {
        cout << "---------------------------------" << endl;
        cout << "----- PROGRAM KALKULATOR ----- \n" << endl;
        cout << "Menu Operasi:" << endl;
        cout << "1. Penambahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "0. Keluar \n" << endl;
        cout << "Pilihan menu nomor : ";
        cin >> pilih;
    
        if(pilih == 1)
        {
            cout << "\n --- Operasi Penambahan --- \n" << endl;
            cout << "Bilangan pertama : ";
            cin >> a;
            cout << "Bilangan kedua : ";
            cin >> b;
            cout << "\n";
        
            x = a + b;
            cout << "Hasil " << a << " + " << b << " = " << x;
            cout << "\n";
            continue;
        }
        if(pilih == 2)
        {
            cout << "\n --- Operasi Pengurangan --- \n" << endl;
            cout << "Bilangan pertama : ";
            cin >> a;
            cout << "Bilangan kedua : ";
            cin >> b;
            cout << "\n";
        
            x = a - b;
            cout << "Hasil " << a << " - " << b << " = " << x;
            cout << "\n";
            continue;
        }
        if(pilih == 3)
        {
            cout << "\n --- Operasi Perkalian --- \n" << endl;
            cout << "Bilangan pertama : ";
            cin >> a;
            cout << "Bilangan kedua : ";
            cin >> b;
            cout << "\n";
        
            x = a * b;
            cout << "Hasil " << a << " x " << b << " = " << x;
            cout << "\n";
            continue;
        }
        if(pilih == 4)
        {
            cout << "\n --- Operasi Pembagian --- \n" << endl;
            cout << "Bilangan pertama : ";
            cin >> a;
            cout << "Bilangan kedua : ";
            cin >> b;
            cout << "\n";
        
            x = a / b;
            cout << "Hasil " << a << " : " << b << " = " << x;
            cout << "\n";
            continue;
        }
        if(pilih > 4)
        {
            cout << "\nInputan yang anda masukkan salah";
            cout << "\n";
            continue;
        }
        if(pilih == 0)
        cout << "\n";
            break;
    }
    cout << "Anda telah keluar dari program\n";
    return 0;
}

