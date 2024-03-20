#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_reference(int& num) {
    num = 100;
}

void pass_reference(string &str){
    str = "B";
    cout << "String in Fucntion: " << str << endl;
}

void pass_reference(vector<string>& vec){
    // vec.push_back("D");
    vec.at(0) = "S";
    cout << "Vector in Fucntion: " << vec[0] << endl;
}


void pass_reference(int* num) {
    *num = 200;

}

void pass_reference(string* str){
    *str = "C";
    cout << "String in Fucntion: " << *str << endl;
}







int main() {
    int num = 50;
    cout << "Before pass_reference: " << num << endl;
    pass_reference(num);
    cout << "After pass_reference: " << num << endl;

    int* ptr = &num;
    cout << "Before pass_pointer: " << *ptr << endl;
    pass_reference(ptr);
    cout << "After pass_pointer: " << *ptr << endl; 

    string str1 = "A";
    cout << "Before pass_reference: " << str1 << endl;
    pass_reference(str1);
    cout << "After pass_reference: " << str1 << endl;

    string* ptr2 = &str1;
    cout << "Before pass_pointer: " << *ptr2 << endl;
    pass_reference(ptr2);
    cout << "After pass_pointer: " << *ptr2 << endl;
    vector<string> vec{"A", "B", "C"};
    cout << "Before pass_reference Vector is: " << vec[0] << endl;
    pass_reference(vec);
    cout << "After pass_reference Vector is: " << vec[0] << endl;

    

return 0;
}