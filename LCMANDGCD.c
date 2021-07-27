#include<stdio.h>
int main(){
    int a,b,num1,num2,remainder,gcd,lcm;
    printf("Enter 2 number");
    scanf("%d%d",&num1,&num2);
    a=num1;
    b=num2;

    if(a==0){
        gcd =b;
    }
    else if(b==0){
        gcd=a;
    }
    else{
        remainder = a%b;
        while(remainder != 0){
            a=b;
            b=remainder;
            remainder = a%b;
        }
        gcd =b;
    }
    lcm = (num1*num2)/gcd;
    printf("Greatest common divisor of %d and %d  = %d\n",num1,num2,gcd);
     printf("least common multiple of %d and %d  = %d\n",num1,num2,lcm);
     return 0;

}
