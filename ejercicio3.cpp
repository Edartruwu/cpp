#include "iostream"

using namespace std;

int main() {
  int num;
  cout << "ingresa un numero del día: ";
  cin >> num;

  switch (num) {
    case 1:
      cout << "Es Lunes" << endl;
      break;
    case 2:
      cout << "Es Martes" << endl;
      break;
    case 3:
      cout << "Es Miercoles" << endl;
      break;
    case 4:
      cout << "Es Jueves" << endl;
      break;
    case 5:
      cout << "Es Viernes" << endl;
      break;
    case 6:
      cout << "Es Sabado" << endl;
      break;
    case 7:
      cout << "Es Domingo" << endl;
      break;

    default:
      cout << "no es un día de la semana" << endl;
      break;
  }
}







