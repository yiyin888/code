#include<stdio.h>
int main(){
int n=0;
    scanf("%d",&n);
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int k=0;k<n;k++){
        cnt=0;
        for(int j=0;j<k;j++){
            if(a[j]<a[k]){
                cnt++;
            }
        }
        if(k>0){
            putchar(' ');
        }
      printf("%d",cnt);
    }  
    return 0; 
}
