//Progream for Insertion sort
#include<stdio.h>
int main()
{
//Declaring variables
int a[100],i,j,size,temp;

//Accepting the array size
printf("Enter the size of the array : ");
scanf("%d",&size);

//Accepting the Array elements
printf("Enter %d Elements :\n",size);
for(i=0;i<size;++i)
{
scanf("%d",&a[i]);
}
//printing the Array elements
printf("Entered elements are : \n");
for(i=0;i<size;++i)
{
printf("%d ",a[i]);
}
//insertion logic block
for(i=1;i<size;++i)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
 {
 a[j+1]=a[j];
 j--;
 }
a[j+1]=temp;
}

//printing elements after sorting
printf("\nElements after insertion sort :\n");
for(i=0;i<size;++i)
{
printf("%d ",a[i]);
}

}
