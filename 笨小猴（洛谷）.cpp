#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    char n[100];
    scanf("%99s",n);
    int zlong=strlen(n);
    char* t=(char*)malloc(zlong+1);
    strcpy(t,n);
    int a[zlong];
    for(int i=0;i<zlong;i++){
        a[i]=0;
    }
    for(int i=0;i<zlong;i++){
        for(int j=0;j<zlong;j++){
            if(n[i]==t[j]){
                a[i]++;
            }
        }
    }
    free(t);
    int maxn=a[0];
    int minn=a[0];
    for(int i=0;i<zlong;i++){
        maxn=(a[i]>maxn)? a[i]:maxn;
        minn=(a[i]<minn)? a[i]:minn;
    }
    if(maxn-minn<2){
        printf("No Answer\n0");
    }else {
        int t=1;
        for(int i=2;i<=sqrt(maxn-minn);i++){
            if((maxn-minn)%i==0){
                t=0;
                break;
            }
        }
        if(t==1){
            printf("Lucky Word\n%d",maxn-minn);
        }else if(t==0){
            printf("No Answer\n0");
        }
    }

    return 0;
}S
