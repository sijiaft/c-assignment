//������ţ˼��
//date:2022.3.12
#include <iostream>

using namespace std;

int main()
{
    int weight,height,BMI;
    cout<<"��ֱ�����һ��Ϊ��λ�����غ���Ӣ��Ϊ��λ�����"<<endl;
    cin>>weight>>height;
    BMI=weight*703/height/height;
    cout<<"BMI="<<BMI<<endl;
    //BMI VALUES
    //Uderweight:less than 18.5
    //Normal:between 18.5 and 24.9
    //Overweight:between 25 and 29.9
    //Obese:30 or greater
    return 0;
}
