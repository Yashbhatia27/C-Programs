#include<stdio.h>
#include<math.h>

int prime(int k,int i)
{
if(k==1) return 0;
if(k%i==0)
{
   while(k%i==0)
   {
    printf("%d ",i);
k=k/i;   }
}
 return prime(k,i+1);
}

int main()
{
 printf("Name-yash bhatia\nRoll no.-20103164\nBranch-CSE\n");
 printf("Enter a positive number\n");
 int n,j;
 scanf("%d",&n);
 int k=n;
 printf("Prime factors of %d without using recursion are : ",n);
for(j=2;j<=(n);j++)
{
    if(n%j==0){
        while(n%j==0){
            printf("%d ",j);n=n/j;
        }
    }
}
printf("\nPrime factors of %d using recursion are : ",k);
prime(k,2);
return 0;
}

