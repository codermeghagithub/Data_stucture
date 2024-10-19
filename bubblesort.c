#include<stdio.h>
void sorted(int  *arr,int s){
    for(int i=0;i<s;i++){
        printf("%d\n",arr[i]);
    }
}
void bubblesort(int *arr, int s){
    int issorted=0;  // when array is alreay sorted that time we use  issorted 
    for(int i=0;i<s-1;i++)
    {  

        printf("pass no is:%d\n",i+1) ; //for passing

        issorted=1;// this means array is alreay soted issorted=1;

      for(int j=0;j<s-1-i;j++){          //for comparisn purpose
        if(arr[j]>arr[j+1]) 
        {   
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        // issorted=0;         //if enter this condithis checking part so that time I will understand 
        // this array is not sorted thats why I have written issorted=0;                 
        }
      }
    //   if(issorted){  //if array is sorted so that time this part check and after that it return 
    //     return;
    // }
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
    
           sorted(arr,s);

        bubblesort(arr,s);
sorted(arr,s);
       

}


