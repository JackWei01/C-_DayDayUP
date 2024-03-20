#include <iostream>

using namespace std;

//the type of int which range is  0 to ?
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    };
}

unsigned long long factorial_long(unsigned long long   n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    };


}
int main() {



    int n = 5;   // input number

    // cout << "Factorial of " << n << " is " << factorial(n) << endl;
    cout << "Factorial of " << n << " is " << factorial_long(n) << endl;

return 0;
};