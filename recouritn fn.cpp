#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int facto(int x);
    printf("%d",facto(x));
    
}

int facto( int x){

    int temp;
    if (x==0){
        return 1;
    }
    else{
        temp*= x*facto(x-1);
        printf(" hello world") ;
        return temp;
    }
}