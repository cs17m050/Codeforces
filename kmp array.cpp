#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using  namespace  std;
typedef long long int ll;
void construct_kmp_array(int a[],char s[])
{
  int i,j;
  a[0]=-1;
  for(i=1;s[i]!='\0';i++){
    a[i]=-1;
    j=i-1;
    while(j>=0){
      if(s[a[j]+1]==s[i]){
	a[i]=a[j]+1;
	break;
      }
      else
	j=a[j];
    }
  }
}
int main(){
  int a[100],i;
  char s[100];
  scanf("%s",s);
  
  construct_kmp_array(a,s);
  for(i=0;i<20;i++){
    printf("%d ",a[i]);
  }
  return 0;
}
