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

// c++ code
#include <bits/stdc++.h>
using namespace std;
 
// A function to print all prime
// factors of a given number n
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}
 
/* Driver code */
int main()
{
    int n = 315;
    primeFactors(n);
    return 0;
}



