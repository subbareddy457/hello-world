#include<stdio.h>

void main()

{

int num;
printf("enter a num :");

scanf("%d",&num);

if(num<0)

{

printf("the num is negetive\n");

num=-num;

}

printf("value of num is : %d\n",num);
return 0;
}

