#include <iostream>
//方法一
using namespace std;//默认使用std 的命名空间，但是会将std的所有函数名加载进来，后期代码复杂时可能还会有命名冲突

// 方法二 用到什么 写什么
using std::cout;
using std::cin;
using std::endl; 

// argc 代表argument count，参数数量
// argv 代表argumen vector，参数列表  

//note ./2.main_type 即使不加任何参数，其命令本身4也算是一个参数！
int main(int argc, char** argv)
{
    cout << "参数数量：" << argc << endl;
    cout << "==========================" << endl;
    for (int i = 0;i < argc;i++)
    // {
        cout << "参数:" << argv[i] << endl;
    // }
    return 0;
}

// 调用方式
// ./program arg1 arg2