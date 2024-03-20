#include <iostream>

using namespace std;


//C++特性 传给函数的参数，默认情况下是值传递，即函数内修改参数的值，不会影响到函数外的值。
//如果需要修改参数的值，则需要使用引用传递。例如：数组名称表示的事第一个元素的地址，引用传递可以修改数组元素的值。

//值传递：   传递的是副本，修改副本的值，不会影响原值。
//引用传递： 传递的是指针，修改指针指向的值，会影响原值。

//函数声明
void printValue(int x);
void printReference(int& x);


//函数定义
void printValue(int x) {
    x = 100;
    cout << "in function, x = " << x << endl;
}

void printReference(int& x) {
    x = 200;
    cout << "in function, x = " << x << endl;
}


int main() {

//值传递
int x = 30;
printValue(x); // 值传递，x = 100
    cout << "After printValue(x), x = " << x << endl; // 10

printReference(x); // 引用传递，x = 200
cout << "After printReference(x), x = " << x << endl; // 20
  


return 0;

}