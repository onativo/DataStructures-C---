#include <iostream>

using namespace std;

int main(){
int number1;
int number2;

cout << "Digite um número: ";
cin >> number1;
cout << "Digite um número: ";
cin >> number2;

int sum = number1 + number2;
int sub = number1 - number2;
int mul = number1 * number2;
int div = number1 / number2;
float fdiv = (float)number1 / (float)number2;
int res = number1 % number2;
}