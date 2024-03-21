#include <iostream>
using namespace std;

int *max_xy(int *x,int *y)
{


    return (*x > *y) ? x : y;
}



int main(){
    int a = 10;int b= 20;

    cout << *max_xy(&a,&b) << endl;
    cout << max_xy(&a,&b) << endl;
    

    return 0;
}