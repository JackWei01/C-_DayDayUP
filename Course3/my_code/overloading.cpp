#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(int x);
void print(double x);
void print(char x);
void print(string x);
void print(bool x);
void print(float x);
void print(vector <string> x);









int main() {

    int a = 10;
    double b = 3.14;
    char c = 'a';
    string d = "Hello, world!";
    bool e = true;
    float f = 2.5;
    vector <string> g = {"apple", "banana", "orange"};

    print(a);
    print(b);
    print(c);
    print(d);
    print(e);
    print(f);    
    print(g);



return 0;
}




void print(int x) {
    cout << "int: " << x << endl;
}

void print(double x) {
    cout << "double: " << x << endl;    
}

void print(char x) {
    cout << "char: " << x << endl;
}

 void print(string x) {
    cout << "string: " << x << endl;
}

void print(bool x) {
    cout << "bool: " << x << endl;    
}

void print(float x) {   
    cout << "float: " << x << endl;    
}   

void print(vector <string> x) {
    cout << "vector <string>: ";
    // for(int i=0; i<x.size(); i++) {
    //     cout << x[i] << " ";
    // }

    for (string i : x) 
    cout << i << " ";
    cout << endl;
}