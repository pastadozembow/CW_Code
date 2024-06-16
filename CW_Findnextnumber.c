#include <stdio.h>
int numberOf1;
int highNumber;
int highNumberof1;
int next_higher(int n) {
    if(n == 0){
        return n;
    }
    if(n == 2147483647){
        return n;
    }
    numberOf1 = 0;
    highNumber = n + 1;
    highNumberof1 = 0;
    for (int i =  31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1){
            numberOf1++;
        }
    }
    while(highNumberof1 != numberOf1){
        highNumberof1 = 0;
        for (int i = 31; i >= 0; i--) {
            int k = highNumber >> i; 
            if (k & 1) 
                highNumberof1++;
        }
        if(highNumberof1 == numberOf1){
            return highNumber;
        }
        highNumber++;
        
    }
    return n;
}

int main(void){
    int actual = next_higher(2147483647);
    printf("%d", actual);
}