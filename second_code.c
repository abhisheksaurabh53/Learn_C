#include<stdio.h>
#include<string.h>
int main()
{
    char c[30]="aaabbbcddeaddtthzzzaa",a;
    int count;int l=strlen(c);int i=0,j=0;
    

     
        while(c[i]!='\0')
        {
        while(c[i]-c[i+1]==0) 
        {i++;j++; } 

         count=j+1;
        printf("%c%d",c[i-j],count);
        i++;
        j=0;
        
    
        }
    return 0;
}