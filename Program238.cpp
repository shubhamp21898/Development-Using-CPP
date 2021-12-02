#include<iostream>
using namespace std;

/*int SumI(int Arr[],int isize)
{
    int iSum=0,i=0;
//       1    2      3
    for(i=0;i<isize;i++)
    {
        iSum=iSum+Arr[i];//4

    }
    return iSum;
}*/

int SumR(int Arr[],int isize)
{
    static int iSum=0,i=0;

    if(i<isize)
    {
        iSum=iSum+Arr[i];
        i++;
        SumR(Arr,isize);
    }
    return iSum;
}

int main()
{
    int iLength=0,i=0,iret=0;
    int *p=NULL;

    cout<<"Enter number of elements\n";
    cin>>iLength;

    p=new int[iLength];

    cout<<"Enter elements\n";

    for(i=0;i<iLength;i++)
    {
        cin>>p[i];
    }

    iret=SumR(p,iLength);

    delete[]p ;
    return 0;
}