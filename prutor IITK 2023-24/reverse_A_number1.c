#include<stdio.h>
int power(int x){
    if(x==0){
        return 1;
    }
    else{
        return 10*power(x-1);
    }
}
int main(){
    int n , z , l, count = 0 , count1 = 0;
    scanf("%d" , &n);
    l=n;
    while(l > 0){
        l = l /10;
        count1++;
    }
    if(count1<=4){
        if(n==0){
            printf("%d" , 0);
        }
        else{
            int arr[4];
            z = n;
            while(z>0){
                if(z%10==0){
                    count++;
                }
                else{
                    break;
                }
                z = z/10;
            }
            n = n / power(count);
            for(int i=count;i< 4 ; i++){
                if(n>0){
                    arr[i] = n % 10;
                    n = n/10;
                }
                else{
                    arr[i]=0;
                }
            }
            for(int i = count ; i < 4 ; i++){
                printf("%d" , arr[i]);
            }
        }
    }
    else{
        printf("please enter a valid number of no of digits less than or equal to 4");
    }
    return 0;
}