#include <iostream>
using namespace std;

int pow1(int a , int b){
    if(b==1){
        return a;
    }
    else return a*pow1(a , b-1);
}
// Function to check if a number is prime
int isPrime(int num) {
    if(num==1&&num==0){
        return 0;
    }
    else{
        int z=1;
        for(int i=2;i<=(num/i);i++){
            if(num%i==0){
                z=0;
                break;
            }
        }
        if(z){
            return 1;
        }
        else return 0;
    }
}
// Function to convert number expressed as binary into decimal
int bin_to_dec(int arr[], int len) {
    int sum=0;
    for(int i=0;i<len;i++){
        sum=sum+arr[i]*pow1(2 , len-1-i);
    }
    return sum;
}
// Function to reverse the digits of the number
int reverse(int num){
    int r =0;
    while(num>0){
        r=r*10+(num%10);
        num=num/10;
    }
    return r;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(isPrime(i)==1){
            a[count]=arr[i];
            count++;
        }
    }
    int z= bin_to_dec(a,count);
    if(z==reverse(z)){
        printf("%d\n%d" , 1 , reverse(z));
    }
    else printf("%d\n%d" , 0 , reverse(z));
   return 0;
}