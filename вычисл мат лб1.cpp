#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

double f(double x) {
    return pow((sin(x-8)),2) / 3 - (x - 2) / 5;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    cout << "решить уравнение: (sin(x-8))^2/3 - (x-2)/5 = 0" << endl;
    //метод половинного деления
    double a = 3.0;
    double b = 4.0;
    double e = 0.001;
    int n=0;
    while (b - a > 2 * e) {
        n += 1;
        double c = (a + b) / 2;
        if (f(a) * f(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    cout << "x~ = " << (a + b) / 2 << endl << "f(x~) = " << f((a + b) / 2) << endl<<
        "n (количество итераций) = "<< n <<endl;
}