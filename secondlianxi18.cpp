//姓名：牛思佳
//date:2022.3.12
//输出两个数中的较大数
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
        cout<<x<<endl;
    else
    {
        if(x==y)
        cout<<"These numbers are equal"<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}
