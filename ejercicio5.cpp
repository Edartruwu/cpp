#include <iostream>
#include <string>

using namespace std;

string determinarDepartamento(int primerDigito) {
  return (primerDigito == 1) ? "TUMBES" : (primerDigito == 2) ? "AREQUIPA" : (primerDigito == 3) ? "PUNO" : "Cualquier ciudad norteña";
}

bool horaEnIntervalo(int hora) { 
 return (hora >= 0 && hora <= 24);
}

int main() {
  string codigo;
  cout << "Ingrese el codigo de salida: " << endl;
  cin >> codigo;

  bool codigoValido = (codigo.length() == 4);

  int primerDigito = (codigoValido) ? codigo[0] - '0' : -1;
  int horaSalida = (codigoValido) ? stoi(codigo.substr(1, 2)) : -1;
  int cantidadParadas = (codigoValido) ? codigo[3] - '0' : -1;

  string departamento = (codigoValido) ? determinarDepartamento(primerDigito) : "Código inválido";
  
  cout << "Departamento de destino: " << departamento << endl;
  cout << "Hora de salida: " << ((codigoValido && horaEnIntervalo(horaSalida)) ? to_string(horaSalida): "-1")<< endl;
  cout << "Cantidad de paradas: " << cantidadParadas << endl;
}