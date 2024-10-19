#include<stdio.h>
void linear(int arr[],int s,int ele){
    printf("ele of arr: ");
    for(int i=0;i<s;i++){
    printf("%d\n",arr[i]);
    }
  
int found=0;
for(int j=0;j<s;j++){
    if(ele==arr[j]) {
        printf("ele present at index no:%d",j);
        found=1;
        break;
    }
}
if(found==0){
    printf("ele is not found");
    
}


}
int main()
{
    int s;
    printf("enter the size of arr: ");
    scanf("%d",&s);
     int arr[s];
    printf("enter the ele of array ");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }


        int ele;
        printf("enter the ele of arr which one you found: ");
        scanf("%d",&ele);
    
   
linear(arr,s,ele);
}

