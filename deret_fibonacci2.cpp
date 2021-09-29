#include <iostream>
#include <conio.h>

using namespace std;

int main() {

  int n, i;
  int f_n, f_n1, f_n2;

  cout << "Masukan nilai ke-n : ";
  cin >> n;

  i = 1;
  f_n1 = 1;
  f_n2 = 0;
  f_n = f_n1 + f_n2;

  if (n <= 0) {
    cout << "Masukan nilai n di atas angka 0 !" << endl;
  } else if (n > 1) {
    cout << f_n << " ";
  }

  if (n >= 1) {
    do {
      f_n = f_n1 + f_n2;
      f_n2 = f_n1;
      f_n1 = f_n;

      cout << f_n << " ";

      i++;
    } while (i < n);
  }

  getch();
  return 0;
}

/*
  Creator : Firza Aditya
  Program : Fibonacci with Do While loop
  Date : 22/09/2021
*/
