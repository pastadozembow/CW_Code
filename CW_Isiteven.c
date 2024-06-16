#include <stdbool.h>
#include <stdio.h>
int ndivided;

bool is_even(double n){
    ndivided = n;
    if (ndivided != n){
        return false;
    }
    int r = ndivided % 2;
    if(r == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(void){
    for (int i = -40; i <= 40; i++)
    {
        bool result = is_even(i);
        if(result == true){
            printf("%d", i);
            printf("true");
            printf("\n");
        }
        else{
            printf("%d", i);
            printf("false");
            printf("\n");
        }
    }
    

    
}
