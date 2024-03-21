#include <iostream>

using namespace std;

void swap_ab1(int *a,int *b);//中间变量 
void swap_ab2(int *a,int *b);//不用中间变量


void swap_ab1(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void swap_ab2(int *a,int *b)
{ 
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}


int main()
{
    int a{0};int b{1};  

    cout << "before swap a:" << a << "b:" << b <<endl;

    // swap_ab1(&a,&b);
    swap_ab2(&a,&b);


    cout << "after swap a:" << a << "b:" << b <<endl;



    return 0;
}