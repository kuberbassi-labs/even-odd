#include <stdio.h>

int main(){
    int x;
    printf("Enter a number to check for even or odd : ");
    scanf("%d",&x);
    if( x%2 == 0){
        printf("%d is Even",x);
    }else{
        printf("%d is Odd",x);
    }
    return 0;
}