/*
s is the pattern string to be searched.
a is the preprocessor array.
a.size() should be >= s.size()
Example:
if s = "ababc"
then,
a = {-1, -1, 0, 1, -1}
*/
void construct_kmp_array(int a[],char s[])
{
  int i,j;
  a[0]=-1;
  for(i=1;s[i]!='\0';i++)
  {
    a[i]=-1;
    j=i-1;
    while(j>=0)
    {
      if(s[a[j]+1]==s[i])
      {
	a[i]=a[j]+1;
	break;
      }
      else
	j=a[j];
    }
  }
}
