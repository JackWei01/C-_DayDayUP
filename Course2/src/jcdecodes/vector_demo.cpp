#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


int main()
{
    // vector <int> nums_list1{100};
    // vector <int> nums_list2(3,100);

    // int wuhu{10};
    // char strs[]{'a','v'};

    // cout << nums_list1[0] << endl;
    // // cout << nums_list1.at(1) << endl; //会报错


    // cin >> nums_list2.at(1);
    // cout << nums_list2.at(1) << endl;

    //传统 数组
    int c_plus_list[5]={1,2,3,4,5};
    int c_plus_list2[5]{1,2,3,4,5};
    int c_plus_list3[]{1,2,3,4,5};
    int c_plus_list4[5]{1};


    //传统数组的遍历
    cout << "传统数组的遍历,错误的方法" << endl;
    for(int i{0};i<sizeof(c_plus_list);i++) 
        cout << c_plus_list[i] << "," ; //输出的却是 1,2,3,4,5,0,491727616,-1319895124,1,2,3,4,5,32767,-136147320,32767,1,2,3,4
    
    cout  << endl;


    // 原因是 sizeof(c_plus_list) 返回整个数组的大小（以字节为单位），
    // sizeof(c_plus_list[0]) 返回数组中单个元素的大小（以字节为单位）。
    // 通过将数组的大小除以单个元素的大小，可以得到数组的长度

    cout << "正确的遍历方法" << endl;
    int length = sizeof(c_plus_list) / sizeof(c_plus_list[0]);
    for(int i{0};i<length;i++) 
        cout << c_plus_list[i] << "," ; 
    
    cout << "-------------------------" << endl;
    
    //类似 python的遍历
    cout << "类似 python的遍历" << endl;
    for(int temp_num:c_plus_list)
        cout << temp_num << "," ;

    cout << "-------------------------" << endl;

    vector <int> ages{1,3,4,5,6};
    for(auto temp_age:ages)
    {
        cout << temp_age << endl;
    }
    











    return 0;
}

