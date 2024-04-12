#include "iostream"

using namespace std;

int main() {
  int num;
  int price;

  cout << "inserte el tipo de pizza;" << endl;
  cin >> num;
  cout << "inserte el precio de la pizza;" << endl;
  cin >> price;

  switch (num) {
    case 1:
      cout << "el precio con el descuento sería: " << (price - (price * 0.10))
           << endl;
      break;
    case 2:
      cout << "el precio con el descuento sería: " << (price - (price * 0.15))
           << endl;
      break;
    case 3:
      cout << "el precio con el descuento sería: " << (price - (price * 0.20))
           << endl;
      break;

    default:
      break;
  }
}