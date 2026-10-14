#include<stdio.h>
int main(){
int l;
int m;
    int i=0;
    int sum=0;
    scanf("%d %d",&l,&m);
    int arr[l+1];
    for(int cnt=0;cnt<=l;cnt++){
            arr[cnt]=1;
    }
    int q,w;
    for(i=0;i<m;i++){
        scanf("%d %d",&q,&w);
        for(;q<=w;q++){
            if(arr[q]==1){
                arr[q]=0;
                sum++;
            }
        }
    }
    printf("%d",l+1-sum);
   

    return 0;
}
