#include <stdio.h>
#include <stdlib.h>
int vowcount(char ch[],int n){
int count =0;
for(int i=0;i<n&& ch[i] != '\0';i++){
    if(ch[i]=='a' ||ch[i]=='e' ||ch[i]=='o' ||ch[i]=='u'|| ch[i]=='i' ||ch[i]=='A' ||ch[i]=='E' ||ch[i]=='I' ||ch[i]=='O' ||ch[i]=='U')
        count++;
}
return count;
}

int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    char ch[n];
    printf("Enter the string: ");
    scanf("%s",ch);

    printf("The number of vowels are: %d",vowcount(ch,n));
    return 0;
}
