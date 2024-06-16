#include <stdbool.h>
#include <stdio.h>
int MilesToGo = 50;
int AverageDistancePerGallon = 25;
int GallonsLeft = 2;
bool result;

bool Willyoumakeit(int MilesToGo, int AverageDistancePerGallon, int GallonsLeft){
    if(AverageDistancePerGallon * GallonsLeft >= MilesToGo){
        return true;
    }
    else{
        return false;
    }
}
int main(void){
    result = Willyoumakeit(MilesToGo, AverageDistancePerGallon, GallonsLeft);
    if(result == true){
        printf("true");
    }
    else{
        printf("false");
    }
    
}