#include <iostream>

using namespace std;

int main()
{
    cout << "Operator" << endl;
    cout << "-----------" << endl;
    
    //-----------operator---------------
    //simbol untuk melakukan operasi
    
    //----------------Operator Aritmatika
    /*
Penjumlahan	+
Pengurangan	-
Perkalian	*
Pembagian	/
Sisa Bagi	%
    
    */
    cout << "----------------------aritmatika" << endl;
    int angka1,angka2;
    int hasil;
    
    angka1 = 10;
    angka2 = 20;
    
    //tambah
    hasil = angka1+angka2;
    cout << "Hasil dari " << angka1 << "+" << angka2 << "=" << hasil << endl;
    //kurang
    hasil = angka1-angka2;
    cout << "Hasil dari " << angka1 << "-" << angka2 << "=" << hasil << endl;
    //kali
    hasil = angka1 * angka2;
    cout << "Hasil dari " << angka1 << "x" << angka2 << "=" << hasil << endl;
    //bagi
    hasil = angka2 / angka1;
    cout << "Hasil dari " << angka2 << ":" << angka1 << "=" << hasil << endl;
    //modulus atau sisa bagi
    hasil = angka1 % angka2;
    cout << "Hasil dari " << angka1 << "mod" << angka2 << "=" << hasil << endl;
    
    
     cout << "----------------------penugasan" << endl;
    
    //----------------Operator penugasan (Assignment Operator) 
    // fungsinya untuk mengisi nilai
    
    /*
Pengisian Nilai	            =
Pengisian dan Penambahan	+=
Pengisian dan Pengurangan	-=
Pengisian dan Perkalian	    *=
Pengisian dan Pembagian	    /=
Pengisian dan Sisa bagi	    %=
    */
    
    int a,b,c;
    
    //=
    a = 1;
    b = 2;
     cout <<"a : " << a << ", b : "<< b << endl;
    //+=
    a+=b; // artinya a = a + b; 3
     cout << "a+=b : " << a << endl;
    a-=b; // artinya a = a - b; -1
     cout << "a-=b : " << a << endl;
    a*=b; // artinya a = a x b; 2
     cout << "a*=b : " << a << endl;
    a/=b; // artinya a = a / b; 0,5 / 1 karena int
     cout << "a/=b : " << a << endl;
    a%=b; // artinya a = a % b;  1
     cout << "amod=b : " << a << endl;
     
     //-----------operator bitwise dengan style penugasan
     //operasi berdasarkan biner
     /*
    AND	            &
    OR	            |
    XOR	            ^
    NOT/komplemen	~
    Left Shift	    <<
    Right Shift	    >>
    */
    a<<=b; // artinya a = a << b; menggunakan rumus biner | 0101010
     cout << "a<<=b : " << a << endl;
    a>>=b; // artinya a = a >> b; menggunakan rumus biner | 0101010
     cout << "a>>=b : " << a << endl;
    a&=b; // artinya a = a & b; menggunakan rumus biner | 0101010
     cout << "a&=b : " << a << endl;
    a|=b; // artinya a = a | b; menggunakan rumus biner | 0101010
     cout << "a|=b : " << a << endl;
    a^=b; // artinya a = a ^ b; menggunakan rumus biner | 0101010
     cout << "a^=b : " << a << endl;
     c = ~a;
     cout << "~a : " << c << endl;
     c = ~b;
     cout << "~b : " << c << endl;
    
    
    
    cout << "----------------------perbandingan" << endl;
    
    //----------------perbandingan
    //untuk membandingkan 2 buah nilai
    // menghasilkan true 1, dan false 0
    
    /*
Lebih Besar	            >
Lebih Kecil	            <
Sama Dengan	            ==
Tidak Sama dengan	    !=
Lebih Besar Sama dengan	>=
Lebih Kecil Sama dengan	<=
  */
  
  cout <<"a : " << a << ", b : "<< b << endl;
  c = a > b;
  cout << "a>b : " << c << endl;
  c = a < b;
  cout << "a<b : " << c << endl;
  c = a == b;
  cout << "a==b : " << c << endl;
  c = a != b;
  cout << "a!=b : " << c << endl;
  c = a >= b;
  cout << "a>=b : " << c << endl;
  c = a <= b;
  cout << "a<=b : " << c << endl;
  
 
 //---------------operator logika
 
 cout << "-------------------logika" << endl;
 
 /*
Logika AND	      true  && true = true, sisanya false
Logika OR	      false  || false = false, sisanya true
Negasi/kebalikan	!true = false, !false = true
*/

cout << a << "&&" << b << " : " << (a&&b) << endl;
cout << a << "||" << b << " : " << (a||b) << endl;
cout << "!" << a << " : " << !a << endl;
cout << "!" << b << " : " << !b << endl;


//---------------operator lain-lain

cout << "---------------------- operator lain-lain" << endl;

/*
Alamat memori	&	untuk mengambil alamat memori
Pointer	        *	untuk membuat pointer
Ternary	        ? :	untuk membuat kondisi
Increment	    ++	untuk menambah 1
Decrement	    --	untuk mengurangi 1

*/
int *d;
cout << "ambil tempat memori variable d : " << &d << endl;
cout << "apakah 1 = 2 ? : " << ((1 == 2) ? "iya" : "tidak") << endl;
int var = 7;
cout << var << " ditambahkan satu kali : " << ++var << endl;
cout << var << " dikurangkan satu kali : " << --var << endl;
cout << var << " ditambahkan satu kali : " << var++ << endl; //ditampilkan dlu baru di tambah jadinya akan tetap 
cout << "setelah di ditambah satu kali :" << var << endl; //hasil sebenarnya
cout << var << " dikurangkan satu kali : " << var-- << endl; //ditampilkan dlu baru di tambah jadinya akan tetap 
cout << "setelah di kurangi satu kali :" << var << endl; //hasil sebenarnya
 
    
}
