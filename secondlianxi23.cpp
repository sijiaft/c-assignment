//������ţ˼��
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
    cout<<"���ֵΪ��"<<ma<<endl;
    cout<<"��СֵΪ��"<<mi<<endl;

    return 0;
}
