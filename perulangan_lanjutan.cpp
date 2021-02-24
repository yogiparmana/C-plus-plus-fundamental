#include <iostream>

using namespace std;

int main()
{
   cout << "Pengulangan lanjutan x latihan" << endl;
    cout << "-----------------" << endl;
    
    
     cout << "----------- perulangan 2 dimensi" << endl;
   //pengulangan 2 dimensi yaitu baris dan kolom
   //000
   //000
   //
   //contoh pengulangan 2 dimensi
   for(int i = 1; i <= 5; i++){ // ini untuk baris 
       for(int j = 1; j <= 4; j++){ // ini untuk kolom | 5 baris 4 kolom
          cout <<"baris ke " << i << " kolom ke " << j << "| ";  
       }
       cout << endl;
   }
   cout << endl;
   
   
   cout << " ------------ perulangan 3 dimensi" << endl;
   //perulangan 3 dimensi yaitu baris kolom 1 isi
   /*
| 1| 1| 1| | 1| 1| 2| | 1| 1| 3| -> baris
| 1| 2| 1| | 1| 2| 2| | 1| 2| 3| 
| 1| 3| 1| | 1| 3| 2| | 1| 3| 3| 
    isi         isi         isi
| 2| 1| 1| | 2| 1| 2| | 2| 1| 3| 
| 2| 2| 1| | 2| 2| 2| | 2| 2| 3| 
| 2| 3| 1| | 2| 3| 2| | 2| 3| 3| 
    isi         isi         isi
| 3| 1| 1| | 3| 1| 2| | 3| 1| 3| 
| 3| 2| 1| | 3| 2| 2| | 3| 2| 3| 
| 3| 3| 1| | 3| 3| 2| | 3| 3| 3| 
    isi         isi         isi
    
kolom
   */
   for(int i = 1; i<=3; i++){ // baris
       for(int j = 1; j<=3; j++){ //kolom
           for(int k = 1; k<=3; k++){ //isi (kolom baris)
            cout <<"| " << i << "| " << j << "| " << k << "|\t";
            
            }
            cout<<endl;
        }
        cout << endl;
}

   cout << " ------------ perulangan 3 dimensi ++ " << endl;
   
    // lebih dari 3 dimensi sama kayak 3 dimensi tapi isinya 
    /*
| 1| 1| 1| 1|   | 1| 1| 1| 2|   | 1| 1| 1| 3|   
| 1| 1| 2| 1|   | 1| 1| 2| 2|   | 1| 1| 2| 3|   
| 1| 1| 3| 1|   | 1| 1| 3| 2|   | 1| 1| 3| 3|   
    isi1            isi1            isi1
| 1| 2| 1| 1|   | 1| 2| 1| 2|   | 1| 2| 1| 3|   
| 1| 2| 2| 1|   | 1| 2| 2| 2|   | 1| 2| 2| 3|   
| 1| 2| 3| 1|   | 1| 2| 3| 2|   | 1| 2| 3| 3|   
  isi1            isi1            isi1
| 1| 3| 1| 1|   | 1| 3| 1| 2|   | 1| 3| 1| 3|   
| 1| 3| 2| 1|   | 1| 3| 2| 2|   | 1| 3| 2| 3|   
| 1| 3| 3| 1|   | 1| 3| 3| 2|   | 1| 3| 3| 3|   
  isi1            isi1            isi1
                    isi 2
                    
| 2| 1| 1| 1|   | 2| 1| 1| 2|   | 2| 1| 1| 3|   
| 2| 1| 2| 1|   | 2| 1| 2| 2|   | 2| 1| 2| 3|   
| 2| 1| 3| 1|   | 2| 1| 3| 2|   | 2| 1| 3| 3|   
  isi1            isi1            isi1
| 2| 2| 1| 1|   | 2| 2| 1| 2|   | 2| 2| 1| 3|   
| 2| 2| 2| 1|   | 2| 2| 2| 2|   | 2| 2| 2| 3|   
| 2| 2| 3| 1|   | 2| 2| 3| 2|   | 2| 2| 3| 3|   
  isi1            isi1            isi1
| 2| 3| 1| 1|   | 2| 3| 1| 2|   | 2| 3| 1| 3|   
| 2| 3| 2| 1|   | 2| 3| 2| 2|   | 2| 3| 2| 3|   
| 2| 3| 3| 1|   | 2| 3| 3| 2|   | 2| 3| 3| 3|   
  isi1            isi1            isi1
                    isi2

| 3| 1| 1| 1|   | 3| 1| 1| 2|   | 3| 1| 1| 3|   
| 3| 1| 2| 1|   | 3| 1| 2| 2|   | 3| 1| 2| 3|   
| 3| 1| 3| 1|   | 3| 1| 3| 2|   | 3| 1| 3| 3|   
  isi1            isi1            isi1
| 3| 2| 1| 1|   | 3| 2| 1| 2|   | 3| 2| 1| 3|   
| 3| 2| 2| 1|   | 3| 2| 2| 2|   | 3| 2| 2| 3|   
| 3| 2| 3| 1|   | 3| 2| 3| 2|   | 3| 2| 3| 3|   
  isi1            isi1            isi1
| 3| 3| 1| 1|   | 3| 3| 1| 2|   | 3| 3| 1| 3|   
| 3| 3| 2| 1|   | 3| 3| 2| 2|   | 3| 3| 2| 3|   
| 3| 3| 3| 1|   | 3| 3| 3| 2|   | 3| 3| 3| 3|   
  isi1            isi1            isi1
                    isi3
    */

   for(int i = 1; i<=3; i++){ // baris
       for(int j = 1; j<=3; j++){ //kolom
           for(int k = 1; k<=3; k++){ // 1 isi (kolom, baris)
                for(int l = 1; l <=3; l ++){ // 2 isi(kolom, baris)
                         cout <<"| " << i << "| " << j << "| " << k << "| " << l << "|\t"; 
                }
                cout << endl;
            
            }
            cout<<endl;
        }
        cout << endl;
}

cout << "--------------fariasi loop" << endl;
//loop bisa dibuat variasi seperti membuat segitiga atau bintang atau yang lainnya tergantung sebagaimana bagusnya kita memahami for loop itu sendiri
//contoh fariasi

cout << "fariasi 1" << endl;
   for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<=i; j++){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;

   cout << "fariasi 2.1" << endl; //decrment
   for(int i = 0; i<=3; i++){ 
       for(int j = 3; j>=i; j--){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;

   cout << "fariasi 2.2" << endl;// increment
   for(int i = 0; i<=3; i++){ 
       for(int j = i; j<=3; j++){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;
   
   
   cout << "fariasi 3.1" << endl; //dengan spasi
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            cout << " ";
       }
        for(int k = 4; k>i; k--){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;
   
   cout << "fariasi 3.2" << endl; //dengan calculate
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            cout << "  ";
       }
        for(int k = 3; k>=(2*i-3); k--){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;
   
    cout << "fariasi 4.1" << endl; // dengan space
     for(int i = 0; i<=3; i++){ 
       for(int k = i; k<3; k++){ 
            cout << " ";
       }
       for(int j = 0; j<=i; j++){ 
            cout << "o ";
       }
      
       cout << endl;
   }
   cout << endl;
   
     cout << "fariasi 4.2" << endl; // dengan calculate
      for(int i = 0; i < 5; i++){
        for(int j = 4; j > i; j--){
         cout << "  ";
        }
        for(int k = 0; k<(2*i-1); k++){
         cout << "o "; 
        }
   cout << endl;
   }
      cout << endl;
   

   
       cout << "fariasi 5.1" << endl; //decremet
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            cout << "  ";
       }
        for(int k = 3; k>=i; k--){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;
      cout << "fariasi 5.2" << endl; //incrment
     for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            cout << "  ";
       }
        for(int k = i; k<=3; k++){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;
   
            cout << "fariasi 6.1" << endl; // decrement
     for(int i = 0; i<=3; i++){ 
      for(int k = 3; k>i; k--){ 
            cout << "  ";
       }
       for(int j = 0; j<=i; j++){ 
            cout << "o ";
       }
       
       cout << endl;
   }
   cout << endl;
   
         cout << "fariasi 6.2" << endl; // incrment
     for(int i = 0; i<=3; i++){ 
      for(int k = i; k<3; k++){ 
            cout << "  ";
       }
       for(int j = 0; j<=i; j++){ 
            cout << "o ";
       }
       
       cout << endl;
   }
   cout << endl;
   
       cout << "fariasi 7.1" << endl; // dengan calculate
      for(int i = 1; i < 4; i++){
        for(int j = 4; j > i; j--){
         cout << "  ";
        }
        for(int k = 0; k<(2*i-1); k++){
         cout << "o "; 
        }
   cout << endl;
   }   
   for(int i = 0; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            cout << "  ";
       }
        for(int k = 3; k>=(2*i-3); k--){ 
            cout << "o ";
       }
       cout << endl;
   }
      cout << endl;
      
       cout << "fariasi 7.2" << endl; //dengan spasi
     for(int i = 0; i<=3; i++){ 
       for(int k = i; k<3; k++){ 
            cout << " ";
       }
       for(int j = 0; j<=i; j++){ 
            cout << "o ";
       }
      
       cout << endl;
   }
        for(int i = 1; i<=3; i++){ 
       for(int j = 0; j<i; j++){ 
            cout << " ";
       }
        for(int k = 4; k>i; k--){ 
            cout << "o ";
       }
       cout << endl;
   }
   cout << endl;
   
   
   
   cout << "fariasi 8" << endl;
      for(int i = 0; i<=3; i++){ 
       for(int j = i; j<=3; j++){ 
            cout << "o ";
       }
           for(int k = 1; k<=1; k++){ 
            cout << "  ";
       }
       for(int j = 0; j<=(2*i); j++){ 
            cout << "o ";
       }

          for(int j = 1; j<=1; j++){ 
            cout << "  ";
       }
        for(int k = i; k<=3; k++){ 
            cout << "o ";
       }
      
       cout << endl;
   }
   for(int i = 1; i<=3; i++){ 
       for(int j = 0; j<=i; j++){ 
            cout << "o ";
       }
         for(int j = 1; j<=1; j++){ 
            cout << "  ";
       }
        for(int k = (2*i-3); k<=3; k++){ 
            cout << "o ";
            
       }
        for(int k = 1; k<=1; k++){ 
            cout << "  ";
       }
       for(int j = 0; j<=i; j++){ 
            cout << "o ";
       }
       cout << endl;
   }
   
   cout << endl;
   
   cout << "--------------perulangan dengan kondisi" << endl;
   //perulangan juga bisa memiliki kondisi 
   //seperti saat kita membuat perulangan angka ganjil
   cout << "Membuat bilangan ganjil" << endl;
   for(int i = 0; i < 10; i++){
       //kondisi
       if(i%2 != 0){
           cout << i <<" ";
       }
   }
   
      cout << endl;
   
      cout << "Membuat bilangan genap" << endl;
   for(int i = 0; i < 10; i++){
       //kondisi
       if(i%2 == 0){
           cout << i <<" ";
       }
   }
   
      cout << endl;
   
     cout << "fariasi 4.3" << endl; // dengan if
      for(int i = 0; i < 5; i++){
        for(int j = 4; j > i; j--){
         cout << "  ";
        }
        for(int k = 0; k<i; k++){
            if(k!=0){
            for(int l = 0; l < 2; l ++){
                 cout << "o "; 
            }
            }else{
                 cout << "o "; 
            }
        }
   cout << endl;
   }
   
   cout << endl;


   
   return 0;
}
