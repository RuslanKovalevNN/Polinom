#include <iostream>
#include "tpolynomial.h"

using namespace std;

int main()
{
	int* arr = new int[3];
    for (int i = 0; i < 3; i++)
        arr[i] = i+2;
    int* mas = new int[3];
    for (int i = 0; i < 3; i++)
        mas[i] = i + 1;

    TMonomial A(3, arr, 1);
    TMonomial B(3, mas, 2);
    cout  << A << "\n";
    cout  << B << '\n';

    TPolynomial P1(3);
    P1 += A;
    P1 += B;
    cout << P1 << '\n';

    TPolynomial P2(P);
    cout  << P2 << '\n';

    cout << P1 == P2 << "\n";

    TPolynomial P3(3);
    P3 = P + P2;
    cout  << P3 << '\n';
  
  return 0;
}