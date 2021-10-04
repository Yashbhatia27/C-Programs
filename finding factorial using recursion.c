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


// c++ iterative

#include <iostream>
using namespace std;

int main() {
    int n;
    long double factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
