#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int num1{10};
    // int *num2{&num1}; 方法1:定义+初始化
    int *num2;  //方法2:先定义
    num2 = &num1;//     后赋值

    cout << "num1: " <<  num1 << endl;
    cout << "num2: " <<  *num2 << endl;

    cout << "----------------------------" << endl;

    *num2 = 100;
    cout << "num1: " <<  num1 << endl;
    cout << "num2: " <<  *num2 << endl;

    string str1{"wuhuqifei!"};
    string *str2{&str1};

    cout << "str1: " <<  str1 << endl;
    cout << "str2: " <<  *str2 << endl;


    vector <string> v1{"wu","hu","qi","fei"};
    vector <string> *v2{&v1};

    for (auto temp_v:*v2)
        cout << temp_v << endl;
    
    (*v2).at(0) = "WUHUHU!";

    cout << v1[0] << endl;










    return 0;
}