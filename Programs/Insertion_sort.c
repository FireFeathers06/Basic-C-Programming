#include<stdio.h>

void Insertion_Sort(int *arr,int *n){
  for(int i = 1 ; i < *n  ; i++){
    int key = arr[i];
    int j  = i - 1;
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];

  for(int i = 0 ; i < n ; i++){
    scanf("%d",&arr[i]);
  }
Insertion_Sort(arr, &n);
  for(int i = 0 ; i < n ; i++){
    printf("%d\n",arr[i] );
  }

}
