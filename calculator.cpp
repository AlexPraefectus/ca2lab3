#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
int Calculator::Div (int a, int b) {
    return (int) a / b;
}
int Calculator::Pow (int a, int b){
    int res = a;
    for (int i = 0; i < b - 1; i++) {
        res *= a;
    }
    return res;
}
int Calculator::Mod (int a, int b){
    return a - (Calculator::Div(a, b) * b);
}
// just filling those lines
// and one more line
