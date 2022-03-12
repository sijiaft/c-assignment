//姓名：牛思佳
//date：2022.3.11
//计算两个数的和、乘积、差和商
#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y,z;
    float d;//x表示和，y表示乘积，z表示差，d表示商
    cout<<"请输入两个数"<<endl;
    cin>>a>>b;
    x=a+b;
    y=a*b;
    z=a-b;
    d=a*1.0/b;
    cout<<"两数之和为："<<x<<endl;
    cout<<"两数之积为："<<y<<endl;
    cout<<"两数之差为："<<z<<endl;
    cout<<"两数之商为："<<d<<endl;
    return 0;
}
