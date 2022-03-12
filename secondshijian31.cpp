//姓名：牛思佳
//date:2022.3.12
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"请输入每天开的总英里数"<<endl;
    cin>>a;
    cout<<"请输入每加仑汽油的价格"<<endl;
    cin>>b;
    cout<<"请输入每加仑汽油可以开的平均公里数"<<endl;
    cin>>c;
    cout<<"请输入每日的停车费"<<endl;
    cin>>d;
    cout<<"请输入每日的通行费"<<endl;
    cin>>e;
    cout<<"每日开车的费用"<<(a*b/c)+d+e<<endl;
    return 0;
}
