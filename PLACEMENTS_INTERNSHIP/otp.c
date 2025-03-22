#include<stdio.h>
#include<math.h>

int numtoxor(int n){
    int sum=0;
    while(n>0){
        
        if(n%2==1){
            sum+=1;
        }
        n = n/2;
    }
    if(sum%2==0){
        return 0;
    }
    else{
        return 1;
    }
    
}

int main(){
    int arr[10],final[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        // printf("%d\n",arr[i]);
        final[i] = numtoxor(arr[i]);
        printf("%d",final[i]);
    }
    printf("\n");
    int sum1 = 0;
    for(int i=0;i<10;i++){
        sum1 += final[i]*pow(2,9-i);
    }
    printf("%d",sum1);
    
}