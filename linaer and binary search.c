#include<stdio.h>
int binarysearch(int arr[],int size,int element)
{int low=0;
int high=size-1;
int mid=(low+high)/2;
while(low<=high)
    {
        if(arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]<element)
        {
           low=mid+1;
        }
        else
        {
           high=mid-1;
        }
    }
}
int linearsearch(int arr[],int element,int size){
    for(int i=0;i<size;i++)
       {if( arr[i]==element)
         {
           return i;
         }

      }
    return -1;
}
int main(){
int arr[]={1,2,3,4,5,6,7};
int size=sizeof(arr)/sizeof(int);
int element=4;
binarysearch(arr, size, element);
printf("%d\n",binarysearch(arr, size, element));
printf("%d",linearsearch( arr, element, size));
return 0;
}
