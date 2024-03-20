#include <iostream>


//argc 代表 参数数量
//argv 代表 参数列表

int main(int argc,char ** argv){
    std::cout << argc << std::endl;
    for (int i=0;i<argc;i++)
    {
        std::cout << argv[i] << std::endl;
    }
    return 0;

}

//调用方式
// ./program arg1 arg2