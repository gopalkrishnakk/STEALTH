#include<stdio.h>
void main()
{
 char ch;
 int n;
 do
 {
 printf("Enter your Number:");
 scanf("%d",&n);
 if(n%2)
 printf("\nEntered number is odd");
 else
 printf("\nEntered number is even");
printf ("\nDo you want to repeat the operation Y/N: ");
scanf (" %c", &ch);
}
while(toupper(ch)=='Y');
}
