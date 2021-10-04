#include<stdio.h>
long int multiplyNumbers(int n);
int main()
 {printf("Nmae-Yash Bhatia\nRoll No.-20103164\nBranch-CSE\n");
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d using recursion is = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n)
 {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
