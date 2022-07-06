#include<stdio.h>
int binary_search(int arr[],int n,int searchitem)
{
    int left,right;
    left=0;
    right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]<searchitem)
        {
            left=mid+1;
        }
        else if (arr[mid]>searchitem)
        {
            right=mid-1;
        }
        else
        return mid;
    }
    return -1;
}
int main()
{
    int i,n,search_value;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter search item:");
    scanf("%d",&search_value);
    int c = binary_search(arr,n,search_value);
    if(c<0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found");
    }

}