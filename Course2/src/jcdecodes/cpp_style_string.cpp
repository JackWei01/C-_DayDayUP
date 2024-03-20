#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include  <iostream>
#include <vector>


using namespace std;


int func1(){
    //计算A+B的和
    int a = 10;
    int b = 20;
    int sum = a + b;

    int c{100}; //C++11初始化语法
    return sum;
}



int main() {        

    string str1 = "Hello, world!";
    string str2 = "I am Jacky.";


    // Concatenate two strings
    string str3 = str1 + " " + str2;

    // use copy() to generate str4 from str3
    string str4 = str3.substr(0, 5);

    cout << "The str4 is :" << str4 << endl;


    // string str4 = str3.copy(0, 5);
    // Print the concatenated string
    cout << str3 << endl;   

    // //但是不能直接将数组字符直接相加，因为数组字符是以字符的形式存储的，而字符串是以字符序列的形式存储的。
    // //所以，需要先将数组字符转换为字符串，再进行字符串的拼接。
    // char arr1[] = {'H', 'e', 'l', 'l', 'o', ',', 'w', 'o', 'r', 'l', 'd', '!'};
    // string str4 = arr1;
    // string str5 = "I am Jacky.";
    // string str6 = str4 + " " + str5;
    // cout << str6 << endl;







    // // Access individual characters of the string    
    // cout << "The first character of the string is: " << str3[0] << endl;    
    // cout << "The last character of the string is: " << str3[str3.length()-1] << endl;    

    // // Access a substring of the string
    // string str4 = str3.substr(0, 5);
    // cout << "The substring of the string is: " << str4 << endl;    

    // // Convert a string to uppercase
    // string str5 = "Hello, world!";
    // string str6 = "I am Jacky.";
    // string str7 = str5 + " " + str6;
    // string str8 = str7;
    // transform(str8.begin(), str8.end(), str8.begin(), ::toupper);
    // cout << "The uppercase string is: " << str8 << endl;    

    // // Convert a string to lowercase
    // string str9 = "Hello, world!";
    // string str10 = "I am Jacky.";
    // string str11 = str9 + " " + str10;
    // string str12 = str11;
    // transform(str12.begin(), str12.end(), str12.begin(), ::tolower);
    // cout << "The lowercase string is: " << str12 << endl;    

    // // Check if a string starts with a substring
    // string str13 = "Hello, world!";
    // string str14 = "Hello";
    // if (str13.find(str14) == 0) {
    //     cout << "The string starts with the substring." << endl;
    // } else {
    //     cout << "The string does not start with the substring." << endl;
    // }

    // // Check if a string ends with a substring
    // string str15 = "Hello, world!";
    // string str16 = "world!";
    // if (str15.rfind(str16) == str15.length() - str16.length()) {
    //     cout << "The string ends with the substring." << endl;
    // } else {
    //     cout << "The string does not end with the substring." << endl;
    // }

    return 0;
}