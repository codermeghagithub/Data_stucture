#include<stdio.h>
int binarySearch(int arr[], int s, int ele){
    int low, mid, high;
    low = 0;
    high = s-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == ele){
            return mid;
        }
        if(arr[mid]<ele){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    
    return -1;
    
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
    
   
int searchIndex =0;
    searchIndex = binarySearch(arr,s,ele);
    if(searchIndex ==0){
        printf("Element not found");
    }
    else 
      printf("The element %d was found at index %d \n", ele, searchIndex);
    return 0;
}



