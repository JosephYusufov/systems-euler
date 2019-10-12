#include <stdio.h>
#include <stdlib.h>




int problem1(){
    int x = 999;
    int result = 0;
    while(x){
        if((x % 3) * (x % 5)){
            result += x;
        }
        x--;
    }
    return result;
}

int problem5(){
    int ans = 0;
    
}
int main(){
    printf("%d", problem1());
}
