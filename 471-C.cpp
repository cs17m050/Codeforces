#include<stdio.h>
#include<iostream>
using namespace std;
unsigned long long int pow(unsigned long long int x,int k)
{

    return -1;
}
int main()
{
    int i,j;
    int pr[]={3,5,7,11,13,17,19,23,29,31,37};
    unsigned long long int x,y,z,tmp;

    for(j=0;j<11;j++)
    {
        cout<<"Prime :"<<pr[j]<<endl;
        x=1;
        while(y!=-1)
        {
            x++;
            y=pow(x,pr[j]);
        }
        x--;
        cout<<x<<endl;
    }

    return 0;
}
