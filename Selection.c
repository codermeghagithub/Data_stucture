#include<stdio.h>
void sorted(int  *arr,int s){
    for(int i=0;i<s;i++){
        printf("%d\t",arr[i]);
    }
}
void selectionsort(int *arr, int s){
    int minval;
    for(int i=0;i<s-1;i++){
minval=i;
for(int j=i+1;j<s;j++){


if (arr[minval]>arr[j])
{
minval=j;
}
}
int temp=arr[minval];
arr[minval]=arr[i];
arr[i]=temp;

}
}
int main(){
int i,s;
printf("enter the size of arr:");
scanf("%d",&s);
int arr[s];
printf("enter ele of arr:");
for(int i=0;i<s;i++){
scanf("%d",&arr[i]);
}
sorted(arr, s);
selectionsort(arr,s) ;
sorted(arr,s);
}