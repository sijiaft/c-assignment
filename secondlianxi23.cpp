//姓名：牛思佳
//date:2022.3.12
#include <iostream>

using namespace std;

int main()
{
    int a,ma,mi;
    cin>>a;
    ma=a,mi=a;
    cin>>a;
    if(a>ma)
        ma=a;
    if(a<mi)
        mi=a;
    cin>>a;
    if(a>ma)
        ma=a;
    if(a<mi)
        mi=a;
    cin>>a;
    if(a>ma)
        ma=a;
    if(a<mi)
        mi=a;
    cin>>a;
    if(a>ma)
        ma=a;
    if(a<mi)
        mi=a;
    cout<<"最大值为："<<ma<<endl;
    cout<<"最小值为："<<mi<<endl;

    return 0;
}
