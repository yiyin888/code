#include<stdio.h>
int main(void){
    int m,t,s,ans;
    scanf("%d %d %d",&m,&t,&s);
    if(s>=m*t){
        ans=0;
    }else{
        ans=(int)(m-s*1.0/t);
    }
    printf("%d",ans);
    
    return 0;
}

