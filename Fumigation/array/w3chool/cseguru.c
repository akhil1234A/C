//insertion at given position
#include <stdio.h>

int main() 
{

int arr[] = {1,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);

int pos,num; 
//taking values from user
printf("enter the position: ");
scanf("%d",&pos);
printf("enter the number to insert: ");
scanf("%d",&num); 


for(int i=size-1; i>=pos; i--)
    arr[i+1]=arr[i];
arr[pos]=num;
size++;

for(int i=0; i<size; i++){
	printf("%d ",arr[i]);
}


return 0; 
}
