#include<stdio.h>

int main()
{
    int num1 , num2 , hcf = 1;
    printf("enter a number");
    scanf("%d",&num1);
    printf("enter the second number");
    scanf("%d",&num2);
    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    
    printf("The HCF: %d", hcf);
    
    return 0;
}
