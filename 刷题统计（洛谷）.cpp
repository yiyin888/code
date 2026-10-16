#include<stdio.h>
int main(){
long long a,b,n;
    long long z=1;
    int cnt=0;
    long long sum=0;
    scanf("%lld %lld %lld",&a,&b,&n);
     z=n/(5*a+2*b); 
    sum=(5*a+2*b)*z;
    if(n%(5*a+2*b)==0){
        printf("%lld",z*7);
    }else{
        for(cnt=1;cnt<=7&&sum<n;cnt++){
            if(cnt>=1&&cnt<=5){
                sum+=a;
            }else if(cnt>=6&&cnt<=7){
                sum+=b;
            }
            
        } 
           printf("%lld",z*7+cnt-1);
    }
    return 0;
}
