#include <iostream>

using namespace std;

int main()
{
   cout << "Pengulangan" << endl;
    cout << "-----------" << endl;
    
    
     cout << "----------- for" << endl;
   //pengulangan dalam bahasa pemrogramman umumnya ada 3 pengulangan
   //pengulangan menggunakan -------------------- for
   //contoh pengulangan 5x
   for(int i = 0; i < 5; ++i){
       cout << i << endl; //01234 karena int i dimulai dari o
       //kenapa 0 karena umumnya for digunakan untuk menampilkan isi array
       //karena index array di mulai dari 0
       // angka 5 adalah jumlah banyaknya pengulangan
   }
   cout << endl;
   
   //agar dimulai 1 langsung saja isikan int i = 1 dan juga < di kasih = atau 5 di ganti jadi 6agar mengulang 5x 
    for(int i = 0; i <= 5 /*i  < 6*/; ++i){
       cout << i << endl; //01234 karena int i dimulai dari o
       //kenapa 0 karena umumnya for digunakan untuk menampilkan isi array
       //karena index array di mulai dari 0
       // angka 5 adalah jumlah banyaknya pengulangan
   }
   cout << endl;
   //contoh pengulangan 5 tapi decrement
   for(int i = 5; i > 0 ; i--){
       cout << i << endl; // 54321 karena int i dimulai dari 5 
   }
   
   
     cout << "----------- do while" << endl;
     //pengulangan menggunakan -------------------- while do
     int i = 0;
     do{
         i++; //i + 1
         cout << i << endl; // cetak i 
         
     }while(i < 5); // sampai i lebih kecil dari 5
     // hasil 12345
     cout << endl;
     i = 5; //ubah i = 5
     //---------------while
     while(i > 0){ //cek apakah i lebih besar dari 0 jika true
         cout << i << endl; //cetak i
         i--; //i kurang 1
     }
     

   
   return 0;
}
