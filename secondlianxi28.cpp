//������ţ˼��
//date:2022.3.12
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    cout<<a/10000<<"   ";
    a=a%10000;
    cout<<a/1000<<"   ";
    a=a%1000;
    cout<<a/100<<"   ";
    a=a%100;
    cout<<a/10<<"   ";
    a=a%10;
    cout<<a;
    return 0;
}
