#include<stdio.h>
#include<math.h>
int power(int x){
    long long int p = 1;
    for(int i = 1 ; i <= x; i++){
        p *= 10;
    }
    return p;
}
int sum(long long int);
int prime(long long int);
int main(){
    int n;
    scanf("%d" , &n);
    long long int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%lld" , &arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]/10 == 0){
            if(prime(arr[i])==1){
                count++;
            }
        }
        else{
            if(prime(arr[i])==1){
                count++;
            }
            else{
                int s =arr[i];
                while(s/10!=0){
                    s = sum(s);
                    if(prime(s)==1){
                        count++;
                        break;
                    }
                }
            }
        }
    }
    float ans = (float) count / (float)n;
    printf("%.3f" , ans);

}
int sum(long long int x){
    int arr[9],j=0,i=8;
    while(x>0){
        arr[j]= x/power(i);
        x = x % power(i);
        i--;
        j++;
    }
    int sum = 0;
    for(int i = 0 ; i < 9 ; i++){
        sum+=arr[i];
    }
    return sum;
}
int prime(long long int a){
    int flag = 1;
    for(int i = 2 ; i <= sqrt(a);i++){
        if(a%i==0){
            flag = 0;
            break;
        }
    }
    return flag;
}