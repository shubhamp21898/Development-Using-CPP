#include<iostream>
using namespace std;

int FactorialI(int iNo)
{
    int ifact=1;

    while(iNo!=0)
    {
        ifact=ifact*iNo;
        iNo--;
    }
    return ifact;
}
int FactorialR(int iNo)
{
  static  int ifact=1;

    if(iNo!=0)
    {
        ifact=ifact*iNo;
        iNo--;
        FactorialR(iNo);
    }
    return ifact;
}
int main()
{
    int x=0;

    cout<<"Enter number \n";
    cin>>x;

    int iret=FactorialR(x);

    cout<<"Factorialof is :"<<iret<<"\n";

    return 0;
}