#include<stdio.h>
int factorial(int z){
    float x = (float) z;
    if(x==1){
        return 1;
    }
    else{
        float i = 1;
        while(x>1){
            x = x/i;
            i++;
        }
        if(x!= 1){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int min(int a){
    int x = a;
    while(x>=a){
        if(factorial(x)==1){
            break;
        }
        x++;
    }
    return x;
}
int count(int x){
    int count = 0;
    if(x==1){
        count=1;
        return count;
    }
    else{
        int i =1;
        while(x!=1){
            x = x/i;
            count++;
            i++;
        }
        return count;
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n][2];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    for(int i = 0 ; i < n ;i++){
        int count1 = 0;
        int z = count(min(arr[i][0]));
        for(int j = min(arr[i][0]);j<=arr[i][1] ; j=j*z){
            count1++;
            z++;
        }
        printf("%d\n" , count1);
    }
}