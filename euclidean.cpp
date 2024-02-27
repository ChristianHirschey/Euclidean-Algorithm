#include <iostream>

using namespace std;

int euclidean(int x, int y){
    int remainder = x % y;
    if(remainder != 0) return euclidean(y, remainder);
    else return y;
}

int main(){
    int num1, num2, temp;
    
    cout << "What is your first number?";
    cin >> num1;
    cout << "What is your second number?";
    cin >> num2;

    if(num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    else if(num1 == 0) {
        cout << "Your first number must be greater than 0!";
    }
    if(num1 > num2) {
        cout << "The Greatest Common Divisor (GCD) is " << euclidean(num1, num2);
        return 0;
    }
}