#include <iostream>

using namespace std;
//contoh
void tampil_kata(){ // ini adalah fungsi
    cout << "hello" << endl; // ini adalah program yang dijalankan apabila kita memanggil fungsi tersebut
}
//karena c++ itu mengeksekusi program dari atas ke bawah, maka fungsinya harus di letakan di atas atau 
//kalo mau meletakkan fungsinya di bawah kita bisa gini
void tampil(); // ini untuk memanggil fungsi yang di bawah
int kembalian_angka();
bool kembalian_bool();
float kembalian_float();
void cetak_kata(string kata);
void cetak_perjumlahan(int a, int b);
int tambah(int a, int b); // parameternya boleh beda asal type datanya sama  karena itu hanya acuan
int main()
{
    cout << "function" << endl;
    cout << "-------------" << endl;
    //function / fungsi adalah suatu bagian dari program yang dipergunakan untuk mengerjakan suatu tugas tertentu yang menghasilkan 
    //suatu nilai untuk dikembalikan ke program pemanggil dan letaknya dipisahkan dari bagian program yang menggunakannya.
    //int main() ini adalah sebuah function, yaitu function utama dari program c++
    //penulisan seperti fu nction utama c++ namun karena ini adalah function utama jadi
    //tidak perlu di panggil lagi, contoh pemanggilan function : namaFungsi()
    //dipisahkan artinya kita membuat fungsi itu di luar fungsi utamananya
    cout << "----------------- penulisan fungsi" << endl;
    tampil_kata(); //pemanggilan fungsi
    tampil();
    cout << "ini adalah int yg di kembalian : " << kembalian_angka() << endl;
    cout << "ini adalah bool yg di kembalian : " << kembalian_bool() << endl;
    cout << "ini adalah float yg di kembalian : " << kembalian_float() << endl;
    // ini 2 nilai yang mau di tambahkan
    int angka_1 = 10;
    int angka_2 = 20;
    cout << "----------------- fungsi dengan parameter" << endl;
    // lalu masukkan ke 2 nilai ini ke fungsi
    //tambah(angka_1, angka_2); // cara memasukkan nilai ke parameter
    //ini tidak akan di cetak ke console karena belum di cout
    cout << angka_1 << " + " << angka_2 << " = " << tambah(angka_1,angka_2) << endl;
    // ini adalah fungsi yg sangat sederhana, mungkin akan lebih baik langsung membuatnya tanpa fungsi
    //namun bagaimana kalau kita akan menambahkan banyak penjumalahan?
    //kita tidak mungkin membuatnya satu per-satu,
    // maka dengan adanya fungsi kita dengan mudah mengganti parameternya saja;
    //contoh
    angka_1 = 5; // nilainya akan di timpa
    angka_2 = 5;// nilainya akan di timpa
    cout << angka_1 << " + " << angka_2 << " = " << tambah(angka_1,angka_2) << endl;
    //atau agar lebih mudah kita bisa menggunakan void untuk membuat coutnya
    angka_1 = 7;
    angka_2 = 9;
    cetak_perjumlahan(angka_1,angka_2); // mencetak dengan fungsi
    
    //cetak kata
    cetak_kata("ini adalah kata yang akan di cetak");
    
    return 0;
}
void tampil(){ //ini fungsi yang di letakan di bawah
    cout << "hai" << endl;
}
//ada 2 jenis fungsi yaitu fungsi dengan mengembalikan sebuah nilai / atau tanpa dikembalikan
//tanpa kembalian yaitu menggunakan awalan void
//kalau mengembalikan nilai walannya berupa nilai type data yang mau di dikembalikan
//contoh kalau kita mengeluarkan nilai angka maka menggunakan int
//jika menggunakan kembalian maka akan harus menggunakan return
int kembalian_angka(){
    return 12;
}

bool kembalian_bool(){
    return true;
}

float kembalian_float(){
    return 19.5;
}


// fungsi dengan parameter
// jika dalam fungsi memiliki masukkan yang tidak di ketahui / memiliki banyak 
// Parameter ini akan menyimpan nilai yang diinputkan ke fungsi 
//contoh fungsi untuk mencetak string namun string tidak di ketahui / mau di diinputkan
void cetak_kata(string kata){
    cout << "kata yang di masukkan ke parameter : " << kata << endl;
}


//contoh fungsi untuk mengembalikan 2 nilai yang di tambahkan namun 2 nilai ini tidak di ketahui angkanya

int tambah(int nilai_1, int nilai_2){ //nilai_1 dan nilai_2 yang bertipe int itu Parameter
    int hasil = nilai_1 + nilai_2; // proses menghitung nilai
    return hasil; // mengembalikan nilai hasil
}
// membuat void cout untuk menampilkan keterangan cout perjumlahannya

void cetak_perjumlahan(int angka_1, int angka_2){
    cout << angka_1 << " + " << angka_2 << " = " << tambah(angka_1,angka_2) << endl; // mengambil fungsi di dalam fungsi
}

