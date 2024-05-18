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

decimal to binary 


// #include <stdio.h>
// int main()
// {
//     int n,num,binary[100],i=0; 
    
//     n=5; 
//     num = n; 
    
//     while(num>0){
//         if(2*(num/2)==num){
//             binary[i]=0;
//             i++;
//             num=num/2;
//         }
//         else {
//         binary[i]=1;
//         i++; 
//         num = num/2; 
//         }
//     }
    
//     for(int j=i-1; j>=0; j--){
//         printf("%d",binary[j]);
//     }

//     return 0;
// }

#include <stdio.h>

void binary(int n){
    
    int temp,arr[25],i;
    
    for(i=0; n>0; i++){
        temp = n%2;
        arr[i]=temp;
        n=n/2; 
    }
    
    printf("binary number are: ");
    for(int j=i-1; j>=0; j--){
        printf("%d",arr[j]);
    }
}


void main() {
    int n;
    
    printf("Enter a number: \n");
    scanf("%d",&n);
    
    binary(n);
    
}

print even and odd number separately

without creating array
#include <stdio.h>



void main() {
  
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  printf("Odd numbers are: ");
  for(int i=0; i<size; i++){\
      if(arr[i]%2!=0)
        printf("%d ",arr[i]);
  }
  
  printf("\nEven numbers are: ");
  for(int i=0; i<size; i++){\
      if(arr[i]%2==0)
        printf("%d ",arr[i]);
  }
    
}

with array
#include <stdio.h>



void main() {
  
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  int odd[20],even[20],o=0,e=0;

  for(int i=0; i<size; i++){
      if(arr[i]%2!=0){
            odd[o]=arr[i];
            o++;
      }
      else{
            even[e]=arr[i];
            e++;
      }
  }
  
  
  printf("Odd numbers are: ");
  for(int i=0; i<o; i++){
     
        printf("%d ",odd[i]);
  }
    
  
  printf("\nEven numbers are: ");
  for(int i=0; i<e; i++){
     
        printf("%d ",even[i]);
  }
    
}
