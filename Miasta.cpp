#include <iostream>
using namespace std;
int main(){
float P_liczba, DR_liczba, main_liczba, DRmain_liczba, TRZmain_liczba, wynik;
string pytanie;
  loop_main:
  cout << "Podaj 1 Liczbe" << endl;
  cin >> P_liczba;
  cout << "Podaj 2 Liczbe" << endl;
  cin >> DR_liczba;
  main_liczba = P_liczba - DR_liczba;

  cout << P_liczba << " - " << DR_liczba << " = " << main_liczba << endl;
  DRmain_liczba = main_liczba * 3.14;
  cout << main_liczba << " * " << " π " << " = "  << DRmain_liczba << endl;
  TRZmain_liczba = DRmain_liczba * 6378;
  cout << "6378 * " << DRmain_liczba << " = " << 6378 * DRmain_liczba << endl;
  wynik = TRZmain_liczba / 180;
  cout << TRZmain_liczba << " / " << 180 << " = " <<  wynik << "km" << endl;

    cout << "Chcesz wyjsc? y/n" << endl;
    cin >> pytanie;
    if (pytanie == "y") {
      /* code */
      return 0;
    }
    else{
      goto loop_main;
    }
}
