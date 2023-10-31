#include <stdlib.h>
#include <stdio.h>

int main(){
    int t; 
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int n, m;
        scanf("%d", &n);
        scanf("%d", &m);

        if( n % m == 0){
            if((n / m) % 2 == 0){
                printf("Yes\n");
            } else {
                printf("No\n");
            }
            
        } else {
            printf("No\n");
        }
    }


    return 0;
}