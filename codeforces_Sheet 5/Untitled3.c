#include<stdio.h>
#include<string.h>
int main()
{ char s[1005];
  int k,j;
  scanf("%s",s);
  for(char i=48; i<58; i++)
  {   k=0;
      for(j=0;j<strlen(s);j++)
      {
          if(s[j]==i)
          {
              k++;
          }
      }
      printf("%d ",k);
  }
  return 0;
}
/*#include<stdio.h>
int main(){
    int n,num,sum = 0;
    scanf("%d", &n);
    while(n>0)
    {
        num=n%10;
        sum+=num;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1)
    {
        printf("one");
    }
    else if(a==2)
    {
        printf("two");
    }
    else if(a==3)
    {
        printf("three");
    }
    else if(a==4)
    {
        printf("four");
    }
    else if(a==5)
    {
        printf("five");
    }
    else if(a==6)
    {
        printf("six");
    }
    else if(a==7)
    {
        printf("seven");
    }
    else if(a==8)
    {
        printf("eight");
    }
    else if(a==9)
    {
        printf("nine");
    }
    else
    {
        printf("Greater than 9");
    }
return 0;
}*/
