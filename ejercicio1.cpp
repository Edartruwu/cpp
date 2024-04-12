#include "iostream"

using namespace std;

int main() {
  int A, B, C;

  cout << "Ingrese lado A del triangulo: ";
  cin >> A;
  cout << "Ingrese lado B del triangulo: ";
  cin >> B;
  cout << "Ingrese lado C del triangulo: ";
  cin >> C;

  if ((A + B > C) && (A + C > B) && (B + C > A)) {
    cout << "si es un triangulo";
    if ((A == B && B == C)) {
      cout << " y es un triangulo equilatero" << endl;
    } else if ((A != B && B != C && A != C)) {
      cout << " y es un triangulo escaleno" << endl;
    } else {
      cout << " y es un triangulo isoceles" << endl;
    }
  } else {
    cout << "no es un triangulo" << endl;
  }
}