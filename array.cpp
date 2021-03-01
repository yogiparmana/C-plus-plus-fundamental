#include <iostream>

using namespace std;

int main()
{
    cout << "Array" << endl;
    cout << "-------------" << endl;
    //array digunakan untuk menyimpan banyak data
    //contoh tanpa array
    // string namaMurid1 = "Ayu";
    // string namaMurid2 = "Bunga";
    // string namaMurid3 = "Cyntia";
    // string namaMurid4 = "Deni";
    // string namaMurid5 = "Elisa";
    //gimana kalo murid ada 100 atau 1000? 
    //maka agar lebih efisien kita gunakan array
    string nama_array_murid[5]; // inisialisasi array dengan jumlah data 
    cout << "---------- memasukkan data ke array\n";
     nama_array_murid[0] = "Ayu"; //[0] ini adalah index, index dimulai dari 0,
     //jika jumlah datanya 5 maka indexnya 0-4, 
     nama_array_murid[1] = "Bunga";
     nama_array_murid[2] = "Cyntia";
     nama_array_murid[3] = "Deni";
     nama_array_murid[4] = "Elisa";
     //sama dong kayak yang di atas, kalo datanya ada 100 masak harus buat nama_array_murid[100]
     //kita bisa membuat looping untuk mengisi datanya
     //contoh membuat 10 data
     int nilai_array_murid[10];
     for (int i = 0; i < 10; ++i)
     {
         cout << "masukan nilai murid ke [" << i+1 << "] : "; // keterangan input
         cin >> nilai_array_murid[i]; // i adalah angka yang akan di looping mulai dari 0-9
     }
     //maka kita akan menginputkan data sebanyak 10x
     //kalo mau input ada 100 tinggal looping aja seratus kali

     //atau bisa langsung di masukkan
     int absen_array_murid[5] = {1,2,3,4,5}; //1 memiliki index 0

     cout << "---------- menampilkan array\n";
     // cara menampilkan array
     cout << "nama :" << nama_array_murid[0] << endl; 
     //bagaimana kalo datanya ada banyak? ya looping aja
     
     for (int i = 0; i < 5; ++i)
     {
         cout << "nama murid ke [" << i+1 << "] : " << nama_array_murid[i] << endl; //menampilkan array nama_array_murid 
     }
      for (int i = 0; i < 5; ++i)
     {
         cout << "absen murid ke [" << i+1 << "] : " << absen_array_murid[i] << endl; //menampilkan array nama_array_murid 
     }
     // terus bagaimana kalo banyak datanya tidak diketahui? masak harus meriksa satu per satu?
     //bisa gunakan nama_array.length
     int length = sizeof(nilai_array_murid) / sizeof(nilai_array_murid[0]); // ini untuk menghitung banyak ada
     for (int i = 0; i < length; ++i)
     {
         cout << "nilai murid ke [" << i+1 << "] : " << nilai_array_murid[i] << endl; //menampilkan array nama_array_murid 
     }


    
    return 0;
}
