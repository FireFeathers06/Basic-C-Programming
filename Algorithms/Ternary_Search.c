#include <stdio.h> 

int ternary_search(int l,int r,int x,int arr[]) 
{ 
	if(r>=l){ 
		int mid1=l+(r-l)/3; 
		int mid2=r-(r-l)/3; 
		if(arr[mid1]==x){ 
			return mid1; 
		} 
		if(arr[mid2]==x){ 
			return mid2; 
		} 
		if(x<arr[mid1]){ 
			return ternary_search(l,mid1-1,x,arr); 
		} 
		else if(x>arr[mid2]){ 
			return ternary_search(mid2+1,r,x,arr); 
		} 
		else{ 
			return ternary_search(mid1+1,mid2-1,x,arr); 
		} 
	} 
	return -1; 
} 

int main() 
{ 
	int x; 
	int arr[]={2,3,6,7,8,9,12,16,24,53,64,99}; 
	x=6;                                                   // key to search
	int l= 0; 
	int r=11; 
	int res = ternary_search(l,r,x,arr);
	if(res==-1){
		printf("%d is not found\n",x);
	}
	else{
    	printf("%d is found at index %d\n",x,res);
    } 
    return 0;
} 
