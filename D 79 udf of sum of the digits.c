#include <stdio.h>
#include <stdlib.h>
int add(int n){
    int sum=0;
for(int i=n;i>0;i/=10){
    int digit=i%10;
     sum+=digit;
}
return sum;
}

int main()
{
    int n;
    printf("Enter the digit: ");
    scanf("%d",&n);
    printf("The sum of the digits is: %d",add(n));
    return 0;
}
