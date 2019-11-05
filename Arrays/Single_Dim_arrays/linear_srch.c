//Program for linear search
#include<stdio.h>
int main()
{
int a[10],i,srch,flag=0;

//Initialisiing searching number
printf("Enter 10 elements: \n");
for(i=0;i<10;++i)
{
printf("Enter a[%d] value :",i);
scanf("%d",&a[i]);
}
//initialising searching number
printf("Enter searching number : ");
scanf("%d",&srch);

//searching operation
for(i=0;i<10;++i)
{
if(srch==a[i])
{
printf("%d is found at a[%d]",srch,i);
flag=1;
break;
}
}

if(flag==0)
{
printf("%d is not found \nsearch failed!",srch);
}

}
