#include <stdio.h>

int findNumber(int *arr, int st, int end, int key)
{
    if(st == end){
        if(arr[st] == key)
            return st;
        return -1;
    }
    int mid = (st + end)/2;
    int j = findNumber(arr, st, mid, key);
    if(j != -1)
        return j;
    
    int k = findNumber(arr, mid+1, end, key);
    if(k != -1)
        return k;
    return -1;
}    
int main()
{
    int key = -3;
    int arr[10] = {3, 2, 1,-3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("index is %d\n", findNumber(arr, 0, n-1, key));

    return 0;
}
