#include<stdio.h>
int maxDifference(char* s) {
    int n = sizeof(s);
    int z;
    for(int i=0;i<n-1 ; i++){
        z=0;
        for(int j=0;j<n-1-i;j++){
            if(s[i]>s[i+1]){
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                z=1;
            }
        }
        if(z==0){
            break;
        }
    }
    int a[n],b[n];
    for(int i=0;i<n;i++){
        a[i]=0;
        b[i]=0;
    }
    int count1=0,count2=0,count=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            if(count%2==0){
                a[count1]=count;
                count1++;
                count=1;
            }
            else{
                b[count2]=count;
                count2++;
                count=1;
            }
        }
    }
    if(count%2==0){
        a[count1]=count;
        count1++;
    }
    else{
        b[count2]=count;
        count2++;
    }
    int z1=a[0],z2=b[0];
    for(int i=1;i<count1;i++){
        if(z1>a[i]){
            z1=a[i];
        }
    }
    for(int i=1;i<count2;i++){
        if(z2<b[i]){
            z2=b[i];
        }
    }
    return z2-z1;
}
int main(){
    char ch[101];
    scanf("%s" , ch);
    printf("%d" , maxDifference(ch));
}