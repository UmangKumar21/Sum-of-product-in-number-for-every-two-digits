#include <stdio.h>
#include <stdlib.h>
int main() {
    char u[20];
    scanf("%s",&u);
    int n=strlen(u),i;
    int arr[20],t=0,in=0;
    for(i=0;i<n;i+=2){
        t=u[i]-'0';
        if(i+1<n){
            t=(t*10)+(u[i+1]-'0');
            arr[in++]=t;
        }
        else{
            arr[in++]=t;
        }
    }
    int sum=0;
    for(i=0;i<in;i+=2){
        sum+=arr[i]*arr[i+1];
    }
    if(in%2!=0){
        sum+=arr[in-1];
    }
    printf("%d",sum);
}
