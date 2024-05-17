//insert an element at given position 
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

// given index
// for(int i=size-1; i>=pos; i--)
//     arr[i+1]=arr[i];
// arr[pos]=num;
// size++;

//given position not index
for(int i=size-1; i>=pos-1; i--)
    arr[i+1]=arr[i];
arr[pos-1]=num;
size++;

	
for(int i=0; i<size; i++){
	printf("%d ",arr[i]);
}


return 0; 
}
//delete an element from given position 
#include <stdio.h>

int main() 
{

int arr[] = {1,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);

int pos,num; 
//taking values from user
printf("enter the position to delete: ");
scanf("%d",&pos);



for(int i=pos-1; i<size; i++)
    arr[i]=arr[i+1];
size--;

for(int i=0; i<size; i++){
	printf("%d ",arr[i]);
}


return 0; 
}

//print in reverse order
#include <stdio.h>

int main() 
{

int arr[] = {1,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);

for(int i=size-1; i>=0; i--){
    printf("%d ",arr[i]);
}

return 0; 
}

//reverse an array
#include <stdio.h>

int main() 
{

int arr[] = {1,2,3,4,5,6};
int size = sizeof(arr)/sizeof(arr[0]);

int temp;

for(int i=0; i<(size/2); i++){
    temp = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i]=temp;
}

for(int i=0; i<size; i++){
    printf("%d ",arr[i]);
}

return 0; 
}

reverse half of array

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d \n",n);
    
    // int half= n%2==0? n*0.25+1 : n/2;
    // printf("%d \n",half);
    
    
    // for(int i=0; i<half; i++){
    //     int temp = arr[i];
    //     arr[i] = arr[half-i];
    //     arr[half-i]=temp;  
    // }
    
      for(int i=0,j=(n/2)-1; i<n/4; i++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;  
    }
    
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
        
    }
    

    return 0;
}
