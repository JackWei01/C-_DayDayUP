#include <iostream>
#include <string>
#include <vector>
using namespace std;

//函数原型  
//全部使用值传递
void change_string(string str);
void change_vector(vector<int> vec);
void print_vector(vector<int> vec);

void change_string(string str)
{
    str = "Hello MY USA!";
    cout << "The string in function is: " << str << endl;
}

void change_vector(vector<int> vec)
{
    vec.push_back(100);
    cout << "The Vector in function is: " ;
    print_vector(vec);
    // cout << "The size of vector in function is: " << vec.size() << endl;
    cout << "The last element of vector in function is: " << vec.back() << endl;

}

void print_vector(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{   string str1 = "Hello China!";
    vector<int> vec1 = {1,2,3,4,5};

    cout << "The string in main is: " << str1 << endl;
    print_vector(vec1);

    change_string(str1);
    change_vector(vec1);

    cout << "The string in main after change_string is: " << str1 << endl;
    cout << "The last element of vector in main after change_vector is: " << vec1.back() << endl;
    print_vector(vec1);


    return 0;
}