#include <iostream>
#include <cmath>
using namespace std;
int main()
{
string pytanie1;
bool a = true;
while (a == 1)
{
cout << "Co chcesz obliczyc?" << endl;
cout << "Trójkąt Równoramienny? (A) | Trójkąt prostokątny (B) | Trójkąt Równoboczny (C)" << endl;
cin >> pytanie1;
if (pytanie1 == "A")
{
  int h, b, a, h2, a2;
  cout << "     @" << endl;
  cout << "   @ | @" << endl;
  cout << "  @  |h @ a" << endl;
  cout << " @   |    @" << endl;
  cout << "------------" << endl;
  cout << "Podaj h" << endl;
  cin >> h;
  cout << "Podaj a" << endl;
  cin >> a;
  h2 = pow(h, 2);
  a2 = pow(a, 2);
  h = a2 - h2;
  cout << sqrt(h) * 2 << endl;

}
if (pytanie1 == "B")
{

  float a, b, c;
  cout << "Podaj A" << endl;
  cin >> a;
  cout << "podaj B" << endl;
  cin >> b;
  string pytanie;
  cout << "|. "<< endl;
  cout << "| . "<< endl;
  cout << "|  . "<< endl;
  cout << "|   .  ? (1)"<< endl;
  cout << "|    . "<< endl;
  cout << "|     . "<< endl;
  cout << "--------"<< endl;
  cout << "  ? (2) " << endl;
  cout << " " << endl;
  cout << "1 czy 2?" << endl;
  cin >> pytanie;
  if (pytanie == "1")
  {
  c = pow(a, 2) + pow (b, 2);
  cout << "C = √" << c << endl;
  cout << sqrt(c);
  }

  if (pytanie == "2")
  {
  c = pow (a, 2) - pow (b, 2);
  cout << "C^2 = " << c << endl;
  cout << sqrt(c);
  }
  cout << " " << endl;
}
if (pytanie1 == "C")
{
  int h,h2, wynik;
  cout << "     @" << endl;
  cout << "    @ @" << endl;
  cout << "   @   @" << endl;
  cout << "  @     @" << endl;
  cout << " @       @" << endl;
  cout << "@         @" << endl;
  cout << "@@@@@@@@@@@" << endl;
  cout << "Podaj h" << endl;
  cin >> h; //12
  h2 = h * 2; //24
  cout << h2 << endl;
  cout << h2 << " /3 " << " = " << h2 / 3 << endl;
  cout << "A = " << h2 / 3 << "√3" << endl;
}
}

  return 0;
}
