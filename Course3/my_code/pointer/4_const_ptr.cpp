#include   <iostream>
using namespace std;


int main()
{



int num1{10};
//2.被指向的对象不可改变
const int *int_ptr1{&num1};

num1 = 20; //编译通过
cout << *int_ptr1 << endl;              


// *int_ptr = 20;// error: read-only variable is not assignable
// cout << *int_ptr1 << endl;   

int int_arr1v[] {1,2,3,4};

const int *int_ptr2{int_arr1v};
cout << *(int_ptr2+1) << endl; //ok

int_ptr2 = int_ptr2 +1;
cout << *int_ptr2 << endl; //ok


//1.指针本身不可改变
int num2{10};

 int * const int_ptr3{&num2};

 *int_ptr3 = 20;
cout << *int_ptr3 << endl;    
// int_ptr3 = &num1; // error: cannot assign to variable 'int_ptr3' with const-qualified type 'int *const'



//3.指针本身和被指向对象都不可改变

 int num3{10};

 const int * const int_ptr4{&num3};

//  *int_ptr4 = 20;  //报错
//  int_ptr4 = &num1;//报错
// cout << *int_ptr4 << endl;   


    return 0;

}




