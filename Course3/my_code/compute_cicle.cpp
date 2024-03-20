#include <iostream>
#include <cmath>

using namespace std;


const double pi = 3.14159265358979323846;

// Function should be defined before used
// 1.小型程序 可以遵循县定义函数再调用的原则
// 2.使用函数原型，告诉编译器函数定义必要的信息，也称为前向声明，放在程序开始的地方，或者放在头文件中

double compute_cicle(double r);


// double compute_cicle(double r) {
//     return pi * r *r;

// }

int main() {
    double r{};

    cout << "Enter the radius of the cicle: ";
    cin >> r;
    double s = compute_cicle(r);
    cout << "The cicle of radius " << r << " is " << s << endl;

    return 0;
}


double compute_cicle(double r) {
    return pi * r *r;

}