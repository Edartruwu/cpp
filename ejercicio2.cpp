#include "iostream"
#include "string"

using namespace std;

string toBasex(int n, int base) {
  string result = "";
  while (n > 0) {
    int remainder = n % base;
    result = to_string(remainder) + result;
    n /= base;
  }
  return (result == "") ? "0" : result;
}

int main() {
  string Primer_Nombre;
  string Apellido;  
  int Edad;
  int Año_de_Nacimiento;

  cout << "Ingresa tu primer nombre: ";
  cin >> Primer_Nombre;
  cout << "Ingresa tu Apellido: ";
  cin >> Apellido; 
  cout << "Ingresa tu Edad: ";
  cin >> Edad;
  cout << "Ingresa tu Año de nacimiento: ";
  cin >> Año_de_Nacimiento;

  char Primera_Letra = Primer_Nombre.at(0);
  char Segunda_Letra = Apellido.at(0);

  int Ascii1 = static_cast<int>(Primera_Letra);
  int Ascii2 = static_cast<int>(Segunda_Letra);

  string Valor1 = toBasex(Ascii1, 2);
  string Valor2 = toBasex(Ascii2, 3);
  string Valor3 = toBasex(Edad, 2);
  string Valor4 = toBasex(Año_de_Nacimiento, 4);

  if (((Año_de_Nacimiento > 2000) && (Año_de_Nacimiento < 2010)) &&
      ((Edad > 16) && (Edad < 31))) {
    cout << "Los datos encriptados son: ";
    cout << Valor1 << Valor2 << Valor3 << Valor4 << endl;

  } else {
    cout << "no es aplicable";
  }
}