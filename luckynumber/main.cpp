#include <iostream>
#include <math.h>
using namespace std;

int countNumber(int a)
{
    int m = sqrt(a);
    int i,j,k,l;
    for(i=0;i<=m;i++)
        for(j=0;j<=m;j++)
            for(k=0;k<=m;k++)
            {
                l=pow(3,i)*pow(5,j)*pow(7,k);
                if(l==a)
                return 1;
            }
    return 0;
}
int main()
{
    int a=0,n=0;
    do
    {
        cout<<"������һ��3��1000000000000������:"<<endl;
        cin>>a;
    }while(a<3||a>1000000000000);
    for(int num=3;num<=a;num++)
    {
        if(countNumber(num)==1)
            n++;
        else
            continue;

    }
    cout <<"С�ڵ���"<<a<<"��lucky number�ĸ���Ϊ��"<<endl<< n << endl;
    return 0;
}
