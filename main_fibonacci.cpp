#include <iostream>
#include <conio.h>

using namespace std;

int main() {

  // f_n = f_n1 + f_n2

  /*
    f_n1 : fibonacci 1
    f_n2 : fibonacci 2

    fibonacci adalah 2 angka sebelum nya akan di jumlahkan

    contoh :

    f_n = 3

    maka rumus nya :
    f_n = f_n1 + f+n2
    f_n = 1 + 2
    f_n = 3

    maka menghasilkan nilai deretan [1 1] atau f(n) = 1 1 2

    atau

    fibo(6) = 1 1 2 3 5 8
    total n = 6

    note : angka sebelumnya akan di jumlahkan seperti 1 + 1 lalu 1 + 2 lalu 2 + 3 lalu 3 + 5
  */

  /*
    rumus loop :

    loop {
      f(n) = (f-1) + (f-2)
    }

    contoh :
    jika kita punya f(3) :
    f(3) = f(3-1) + f(3-2)
    f(3) = 2 + 1
    2 + 1 = f(3)

    contoh 2 :
    f(5) = 1 1 2 3 5
    f(5) = f(4) + f(3)
    f(5) = 2 + 3
    2 + 3 = f(5)
  */

  int n;
  int f_n;
  int f_n1;
  int f_n2;

  cout << "--- Program Deret Fibonacci --- \n" << endl;
  cout << "Masukan nilai ke-n : ";
  cin >> n;

  f_n1 = 1;
  f_n2 = 0;

  f_n = f_n1 + f_n2;
  cout << f_n << " ";

  /*
    cout << f_n2 << " ";
    cout << f_n1 << " ";
  */
  // kode itu atas jika ingin mulai dari 0 tapi fungsi [f_n = f_n1 + f_n2;] dan [cout << f_n << " ";] harus di komentarkan atau di hapus

  for (int i = 1; i < n; i++) {
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;

    cout << f_n << " ";
  }

  cout << "\n";

  getch();
  return 0;
}
