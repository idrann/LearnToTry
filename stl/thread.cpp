#include<iostream>
#include<thread>


int func_int(int n)
{
    std::cout<<"fun_int"<<n<<std::endl;
    return 0;
}

int func_string(const std::string& s)
{
    std::cout<<"fun_string"<<s<<std::endl;
    return 0;
}

int main()
{
    std::thread t1(func_int, 1);
    std::thread t2(func_string, "hello");
    t1.join();
    t2.join();
    return 0;
}
