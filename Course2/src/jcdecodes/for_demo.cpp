#include <iostream>
using namespace std;

//实现99乘法表

/*
1*1=1 1*2=2 1*3=3 1*4=4 1*5=5 1*6=6 1*7=7 1*8=8 1*9=9
2*2=4 2*3=6 2*4=8 2*5=10


*/



int main(){

    for (int i{1};i<10;i++){
        for(int j{i};j<10;j++){
            cout << i << "*" << j << "=" << i*j << " ";
        }
        cout << endl;
    }


    return 0;
}