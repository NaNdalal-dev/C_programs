//Program for Binary search
#include<stdio.h>
int main()
{
int a[10],i,mid,left,right,srch,flag=0;
printf("Enter 10 elements in sorted order: \n");
for(i=0;i<10;++i)
{
printf("Enter a[%d] value :",i);
scanf("%d",&a[i]);

}
left=0;
right=i-1;

printf("Enter searching element : ");
scanf("%d",&srch);

        while(left<right)
            {
                mid=(left+right)/2;
                    if(srch==a[mid])
                        {
                            printf("%d is found at a[%d] ",srch,mid);
                            break;
                        }
                    else if(srch>a[mid])
                        {
                            left=mid+1;

                        }
                    else
                        {
                            right=mid-1;
                        }

            }


if(left>right)
{
printf("%d not found\n search failed!");
}

}
