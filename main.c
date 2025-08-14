#include<stdio.h>
 int main()
 {
 int a,b,c,max,smax;
 printf("Enter 3 nums:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
 if(a>c)
 {
 max=a;
 if(b>c)
 smax=b;
 else
 smax=c;
 }
 else
 {
 max=c;
 smax=a;
 }
 }
 else
 {
 if(b>c)
 {
 max=b;
 if(a>c)
 smax=a;
 else
 smax=c;
 }
 else
 {
 max=c;
 smax=b;
 }
 }
 printf("max = %d\nSecond max = %d",max,smax);
 return 0;
 }