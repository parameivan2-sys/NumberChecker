#include <stdio.h>
int main(){


    int  number;
    printf("Enter any number:");
    scanf("%d", &number);
    if(number % 2 ==0){
        printf("%d Even Number!",number);
    }else{
        printf("%d odd Number!",number);
    }
}
