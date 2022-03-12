//姓名：牛思佳
//date:2022.3.12
//输出三个整数的和、平均值、乘积、最小值和最大值
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,s,ch,ma,mi;
    float ave;
    cout<<"Input three different integers:"<<endl;
    cin>>a>>b>>c;
    s=a+b+c;
    cout<<"Sum is"<<s<<endl;
    ave=(a+b+c)/3*1.0;
    cout<<"Average is"<<ave<<endl;
    ch=a*b*c;
    cout<<"Product is"<<ch<<endl;
    if(a>=b)
    {
        if(a>=c)
            {
                if(b>=c)
                    mi=c,ma=a;
                else
                    mi=b,ma=a;
            }
        else
            mi=b,ma=c;

    }
    else
    {
        if(b>=c)
         {
             if(a>=c)
                mi=c,ma=b;
             else
                mi=a,ma=b;
         }
        else
            mi=a,ma=c;
    }
    cout<<"Smallest is"<<mi<<endl;
    cout<<"Largest is"<<ma<<endl;

    return 0;
}
