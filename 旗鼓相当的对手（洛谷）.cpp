#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
    int i=0;
    int j=0;
    int cnt=0;
    scanf("%d",&n);
    int a[n][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(abs(a[i][0]-a[j][0])<=5&&abs(a[i][1]-a[j][1])<=5&&abs(a[i][2]-a[j][2])<=5&&abs(a[i][0]+a[i][1]+a[i][2]-a[j][0]-a[j][1]-a[j][2])<=10){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
