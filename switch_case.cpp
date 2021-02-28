#include <iostream>

using namespace std;
int main()
{
    cout << "switch case" << endl;
    cout << "-----------------\n";
    //switch case adalah percabangan kode program dimana kita membandingkan isi sebuah variabel dengan beberapa nilai
    //contoh
    //int number = 2; //langsung input atau
    int number;
    cout << "masukkan angka : ";
    cin >> number;
    switch(number){ //variable yg akan di switch / di periksa
        case 0: // jika number == 0
            cout << "number == 0"; //jalankan ini
            break; //break di gunakan untuk menstop / case yang selanjutnya di hentikan  jika casenya benar
        case 1: // jika number == 1
            cout << "number == 1"; //jalankan ini
            break; //break
        case 3: //jika number == 3
            cout << "number == 3"; //jalankan ini
            break; //break
        default: // jika variable tidak sama dengan case 
            cout << "number != 0,1,3"; //jalankan ini
            break;//break
    }


    return 0;
}
