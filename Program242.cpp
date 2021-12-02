#include<iostream>
#include<stdio.h>
using namespace std;

int CountCapI(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str >='A')&&(*str<='Z'))
        {
        iCnt++;
        
        }
        str++;
    }
    return iCnt;
}
int CountCapR(char *str)
{
  static  int iCnt=0;

    if(*str!='\0')
    {
        if((*str >='A')&&(*str<='Z'))
        {
        iCnt++;
         
        }
        str++;
         CountCapR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    cout<<"Enter string\n";
    scanf("%[^'\n]s",Arr);

    int iret=CountCapR(Arr);

    cout<<"Capital letters are :"<<iret<<"\n";

    return 0;
}