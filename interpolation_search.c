#include<stdio.h>
int interpolationSearch(int arr[], int s, int ele,int start){
    printf("ele of arr: ");
    for(int i=0;i<s;i++){
    printf("%d\n",arr[i]);
    }

	int x = 23;
	start=0;
	s=s-1;
	int pos;
    int count=0;
   while(1){
	    if (start <= s&& ele >= arr[start] && ele <= arr[s]) {
	 
	    pos=start + ((ele-arr[start])*((double)(s-start))/(arr[s]-arr[start]));
	    if(arr[pos]==ele){
	        printf("The element is present in index: %d",pos);
	        break;
	        
	    }
	    if(arr[pos]<ele){
	        start=pos+1;
	    }
	     if(arr[pos]>ele){
	        s=pos-1;
	    }
	}
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
        int ele,start,stop;
        printf("enter the ele of arr which one you found: ");
        scanf("%d",&ele);
    
   interpolationSearch (arr, s, ele,start);

}




