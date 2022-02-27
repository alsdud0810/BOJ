#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int temp=100000000;
    while(1){
        if (n/temp>0) break;
        temp/=10;
    }
    int result=0;
    int cnt=0;
    while(1){
        
        temp/=10;
        if (temp==0) break;
        cnt++;
    }
    int count=1;
    while(1){
        result+=9*pow(10,count-1);
        if (count==cnt){
            result+=
        }
    }
}