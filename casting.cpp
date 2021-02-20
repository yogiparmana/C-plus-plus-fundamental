#include <iostream>

using namespace std;

int main()
{
    cout << "casting" << endl;
    cout << "-----------" << endl;
   
   
   //--------------------------Casting-----------------------
   //casting adalah mengubah type data agar bisa di operasikan
   
   int a = 10;
   float b = 10.5;
   //int hasil = a + b; //eroor karena hasil adalah int sedangkan jawabannya berupa float
   //maka
   
   int hasil = a + (int)b; // float b akan di convert ke int 
   
   //penulisan casting yaitu di depan variable di tambah kurung () diisi dengan pengubah type data
   
   
   cout << "hasil dari " << a << "+"<< b << "=" << hasil << endl;
   //hasilnya adalah 10+10.5=20 karena float sudah jadi int maka akan .5 akan hilang
    // hasilnya akan 20 dan ini salah karena hasil yang sebenarnya adalah 20.5 jadi kita salah dalam pemilihan variable hasil menjadi float
    float hasilbenar = (float)a + b;
    cout << "hasil benar dari " << a << "+" << b << "=" << hasilbenar;
 
    
}
