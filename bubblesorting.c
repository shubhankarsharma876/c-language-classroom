#include<stdio.h>
int main(){
    int i,j,temp,n;
    printf("Enter the length of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("\n after sorting \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
}
}