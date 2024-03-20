#include <iostream>

using namespace std;

//构造函数原型
//打印数字
//修改数组元素  此时使用const修饰数组名，防止修改数组元素 此时若发生修改，则编译器会报错
void printArray(const int arr[], int size) ;//打印数组元素,函数内部不会修改数组元素，故const省略
void modifyArray( int arr[], int size, int index, int value) ; //可以const 防止修改

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);

    modifyArray(arr, size, 2, 10); //修改数组元素

    cout << "After modify: ";
    printArray(arr, size);

    return 0;   
}



//打印数字
void printArray(const int arr[], int size) {
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    //尝试修改数组元素
    // arr[0] = 10; //编译器报错，数组名为const，不能修改元素
}

//修改数组元素
void modifyArray(  int arr[], int size, int index, int value)
{
    arr[index] = value;

    
}