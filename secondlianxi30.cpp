//姓名：牛思佳
//date:2022.3.12
#include <iostream>

using namespace std;

int main()
{
    int weight,height,BMI;
    cout<<"请分别输入一磅为单位的体重和以英尺为单位的身高"<<endl;
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
