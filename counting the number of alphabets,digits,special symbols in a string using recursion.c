#include<stdio.h>
#include <string.h>
 int main()
{   printf("Name-Yash Bhatia\nBranch-CSE\nRoll no.-20103164\n");
    char s[1000]; 
    int i,alphabets=0,digits=0,specialcharacters=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alphabets++;
        else if(s[i]>=48 && s[i]<=57)
         digits++;
        else
         specialcharacters++;
 
 	}
 	
     
    printf("number of alphabets in the given string is = %d\n",alphabets);
    printf("number of digits in the given string is = %d\n",digits);
    printf("number of special characters in the given string is = %d", specialcharacters);
    
 
    return 0;
}


// C++ code for biginers

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    char str[100];
    int i;
    int Alphabets=0,num=0,special=0,space=0;
    cout<<"Please enter the string \n";
    gets(str); 
    for(i=0; str[i] != '\0'; i++){
        //check for Aphabets
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {  //check Alphabets
                Alphabets++;
    }else if(str[i]>='0' && str[i]<='9') {  //check numbers
                num++;
    }

    else if(str[i]==' '){//ceck space
                space++;
    }
    else{
        special++;
    }
    }
    cout<<"\nAlphabet letters: "<<Alphabets;

    cout<<"\nnumbers: "<<num;
      cout<<"\nSpace: "<<space;
    cout<<"\nSpecial characters: "<<special;
    getch();
    return 0;
}



