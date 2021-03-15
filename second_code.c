#include<stdio.h>
#include<string.h>
int main()
{
    char c[30]="aaabbbcdde";
    int count;int l=strnlen(c);printf("%d",l);
    for(int i=0;i< l;i++)

    {   count=1;//i=count-1;
        for(int j=i+1;j<l;j++)
       { if (c[i]==c[j]) count++;

        }
        c[i+1]=(char)count;
    }
    return 0;
}