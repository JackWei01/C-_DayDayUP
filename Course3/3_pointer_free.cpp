#include  <iostream>

using namespace std;


int main(){


    int  arrylist_1[]={1,2,3} ;
    int  arrylist_2[]{1,2,3} ;

    int *arry_ptr1{arrylist_1};
    int *arry_ptr2{&arrylist_1[0]};

    cout << &arrylist_1 << endl;
    cout << arry_ptr1 << endl;
    cout << arry_ptr2 << endl;

    
    cout << *arry_ptr1 << endl;
    cout << *arry_ptr1 << endl;

    







    




    return 0;
}