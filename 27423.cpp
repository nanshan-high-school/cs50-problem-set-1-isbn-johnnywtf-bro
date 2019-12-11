#include <iostream>
using namespace std;
int main() {
    int isbn;
    do {
    cout << "ISBN:";
    cin >> isbn;
} while (isbn < 0); 
    int num = isbn % 10 * 1;
    int num1 = isbn / 10 % 10 * 2;
    int num2 = isbn / 10 /10 % 10 * 3;
    int num3 = isbn / 10 / 10 / 10 % 10 * 4;
    int num4 = isbn / 10 / 10 / 10 / 10 % 10 * 5;
    int num5 = isbn / 10 / 10 / 10 /10 / 10 % 10 * 6;
    int num6 = isbn / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 7;
    int num7 = isbn / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 8;
    int num8 = isbn / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 9;
    int num9 = isbn / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 10;
    int result = num + num1 + num2 + num3 + num4 + num5 +num6 + num7 + num8 + num9 % 11;
    if (result > 10){
        cout << "X";
    } else {
        cout << result;
    }       
}
