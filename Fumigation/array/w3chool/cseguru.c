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

find second largest element in array 
// #include <stdio.h>



// void main() {
  
//   int arr[] = {1,2,3,4,5,9,7,8};
//   int size = sizeof(arr)/sizeof(arr[0]);
  
//   int larNum=arr[0], secondLargest=0;

//   for(int i=1; i<size; i++){
//     if(larNum<arr[i]){
//         secondLargest = larNum;
//         larNum = arr[i];
//     }
//     else if(secondLargest<arr[i] && larNum>arr[i])
//         secondLargest = arr[i];
//   }
  
  
//   printf("Second largest number: ");
//   printf("%d ",secondLargest);
 
  
 
    
// }  

#include <stdio.h>
#include <limits.h>



void main() {
  
  int arr[] = {1,2,3,4,5,9,7,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  int larNum=INT_MIN, secondLargest=INT_MIN;

  for(int i=0; i<size; i++){
    if(larNum<arr[i]){
        secondLargest = larNum;
        larNum = arr[i];
    }
    else if(secondLargest<arr[i] && larNum>arr[i])
        secondLargest = arr[i];
  }
  
  
  printf("Second largest number: ");
  printf("%d ",secondLargest);
 
  
 
    
}  
 
  
 
    


second small element in array 

// #include <stdio.h>



// void main() {
  
//   int arr[] = {1,2,3,4,5,9,7,8};
//   int size = sizeof(arr)/sizeof(arr[0]);
  
//   int smallNum=arr[0], secondSmall=arr[1];

//   for(int i=1; i<size; i++){
//     if(smallNum>arr[i]){
//         secondSmall = smallNum;
//         smallNum = arr[i];
//     }
//     else if(secondSmall>arr[i] && smallNum<arr[i])
//         secondSmall= arr[i];
//   }
  
  
//   printf("Second largest number: ");
//   printf("%d ",secondSmall);
// }

#include <stdio.h>
#include <limits.h>



void main() {
  
  int arr[] = {1,2,3,4,5,9,7,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  int smallNum=INT_MAX, secondSmall=INT_MAX;

  for(int i=0; i<size; i++){
    if(smallNum>arr[i]){
        secondSmall = smallNum;
        smallNum = arr[i];
    }
    else if(secondSmall>arr[i] && smallNum<arr[i])
        secondSmall= arr[i];
  }
  
  
  printf("Second largest number: ");
  printf("%d ",secondSmall);
 
count elements and print 
#include <stdio.h>

void main() {
  
  int arr[] = {30,20,30,30,20,83};
  int arr2[] = {30,20,30,30,20,83};
  int arr3[]= {1,1,1,1,1,1};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  int count =1; 
  
  for(int i=0; i<size-1; i++){
      count = 1; 
      for(int j=i+1;j<size;j++){
          
          if(arr2[i]!=-1){
            if(arr2[i]==arr2[j]){
                count++; 
                arr2[j]=-1; 
              
            }
          }
      }
      arr3[i]=count; 
  }
  
  for(int i=0; i<size; i++){
      
      if(arr2[i]!=-1){
          printf("element %d - count %d\n",arr2[i],arr3[i]);
      }
  }
      
}
  
#include <stdio.h>
void main() {
  
  int arr[] = {30,20,30,30,20,83};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  int count =1; 
  
  for(int i=0; i<size; i++){
      count = 1; 
      for(int j=i+1;j<size;j++){
          
       if(arr[i]==-1){
            continue;
       }    
        if(arr[i]==arr[j]){
                count++; 
                arr[j]=-1; 
              
            }
          
      }
        if(arr[i]!=-1)
            printf("element %d - count %d\n",arr[i],count);
  }
  
  }

swap two elements in array using pointer 
#include <stdio.h>
void main() {
  
 int a[]={1,2,3,4,5};
 int temp;
 
//  //method 1
//   int *p1 = &a[0]; // Pointer to the first element
//   int *p5 = &a[4]; // Pointer to the last element

//   temp = *p1;  // Store the value of the first element
//   *p1 = *p5;      // Assign the value of the last element to the first element
//   *p5 = temp;      // Assign the stored value (original first element) to the last element 

//method 2
 temp = *(a+1);
 a[1] = *(a+3);
 a[3] = temp;
 
 
 printf("%d ",a[1]);
 printf("%d",a[3]);
  
  }

swap two variables without a third variable

method 1
#include <stdio.h>
void main() {
  
 int a =4; 
 int b = 5; 
 
 a = a*10+b;
 b = a/10;
 a = a%10; 
 
 printf("%d ",a);
 printf("%d",b);
  
  }
    
method 2
#include <stdio.h>
void main() {
  
 int a[]={1,2,3,4,5};
 int temp;
 
a[1] ^= a[3];
a[3] ^= a[1];
a[1] ^= a[3];


 
 printf("%d ",a[1]);
 printf("%d",a[3]);
  
  }
 
swap every pair of adjacent elements 
#include <stdio.h>
void main() {
  
 int a[]={1,2,3,4,5,6};
 int size = sizeof(a)/sizeof(a[0]);
 
 for(int i=0; i<size; i+=2){
         int temp = a[i];
         a[i] = a[i+1];
         a[i+1] = temp; 
     }
 

  for(int i=0; i<size; i++){
     printf("%d ",a[i]);
 }


  }
      

rotate elements by k times (right and left)
#include <stdio.h>

void rotateLeft(int *arr, int k, int size){
   
   for(int j=1; j<=k; j++){
    int temp=arr[size-1];
    int i; 
    for(i = size-1; i>0; i--){
       
        arr[i] = arr[i-1];
    }
    arr[i]=temp; 
    
   }
   
   
    for(int i=0; i<size; i++){
     printf("%d ",arr[i]);
    }
}

void rotateRight(int *arr, int k, int size){
     for(int j=1; j<=k; j++){
    int temp=arr[0];
    int i; 
    for(i=0; i<size-1; i++){ 
       
        arr[i] = arr[i+1];
    }
    arr[i]=temp; 
    
   }
   
   
    for(int i=0; i<size; i++){
     printf("%d ",arr[i]);
    }
}


void main() {
  
 int a[]={1,2,3,4,5,6};
 int size = sizeof(a)/sizeof(a[0]);
 

 //rotateLeft(a,3,6);
 rotateRight(a,3,6);


  }
      
sum of all elements in an array with different constraints

#include <stdio.h>

void sumPrime(int *arr, int size){
   
   int sum = 0; 
    for(int i=0; i<size; i++){
        
        int flag = 0; 
        
        for(int j=2; j<=arr[i]/2; j++){
            if(arr[i]%j==0){
                flag=1; 
                break; 
            }
        }
        
        if(flag==0){
            sum+=arr[i];
        }
    }
    printf("\n%d ",sum);
}

void sumAll(int *arr, int size){
   
   int sum = 0; 
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    printf("\n%d ",sum);
}

void sumOdd(int *arr, int size){
   
   int sum = 0; 
    for(int i=0; i<size; i++){
        
        if(arr[i]%2==1){
        sum+=arr[i];
        }
    }
    printf("\n%d ",sum);
}

void sumEven(int *arr, int size){
   
   int sum = 0; 
    for(int i=0; i<size; i++){
        
        if(arr[i]%2==0){
        sum+=arr[i];
        }
    }
    printf("\n%d ",sum);
}

void sumOfPositive(int *arr, int size){
   
   int sum = 0; 
    for(int i=0; i<size; i++){
        
        if(arr[i]>0){
        sum+=arr[i];
        }
    }
    printf("\n%d ",sum);
}

void sumOfNegative(int *arr, int size){
   
   int sum = 0; 
    for(int i=0; i<size; i++){
        
        if(arr[i]<0){
        sum+=arr[i];
        }
    }
    printf("\n%d ",sum);
}

void main() {
  
 int a[]={1,2,3,4,5,6};
 int b[]={-1,0,1,-2,2,-3};
 
 int size = sizeof(a)/sizeof(a[0]);
 int sizeb = sizeof(b)/sizeof(b[0]);
 
 sumPrime(a,size);
 sumAll(a,size);
 sumOdd(a,size);
 sumEven(a,size);
 sumOfNegative(b,sizeb);
 sumOfPositive(b,sizeb);

  }
  

insert element at sorted position 
#include <stdio.h>

int main() {
    
    int arr[20],size,i,pos,val,j; 
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++){
        printf("enter element %d -  ",i);
        scanf("%d",&arr[i]);
    }
  
    printf("Enter the value to insert: ");
    scanf("%d",&val);
    
    //finding the position 
    for(j=0; j<size; j++){
        if(arr[j]>val)
            break;
    }
 
  
  
    for(i=size-1; i>=j; i--){
        arr[i+1] = arr[i];
    }
    arr[j]=val; 
    size++; 
    
    printf("Array Elements: \n");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    
}
 
moving zeros to the beginning of the array 

#include <stdio.h>

int main() {
    
    int arr[20],size,i,pos,val,j; 
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++){
        printf("enter element %d -  ",i);
        scanf("%d",&arr[i]);
    }
  
   j = size-1; //finding position for non zero element
   
   for(i=size-1; i>=0; i--){
       if(arr[i]!=0){
           arr[j--]=arr[i];
       }
   }
   
   //fill zero's in remaining position 
   while(j>=0){
       arr[j--]=0; 
   }
    
    printf("Array Elements: \n");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    
}

moving zero's in end of array 
#include <stdio.h>

int main() {
    
    int arr[20],size,i,pos,val,j; 
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++){
        printf("enter element %d -  ",i);
        scanf("%d",&arr[i]);
    }
  
   j = 0; //finding position for non zero element
   
   for(i=0; i<size; i++){
       if(arr[i]!=0){
           arr[j++]=arr[i];
       }
   }
   
   //fill zero's in remaining position 
   while(j<size){
       arr[j++]=0; 
   }
    
    printf("Array Elements: \n");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    
}

Move all negative numbers to the beginning of an array without sorting.c 
  
 #include <stdio.h>

int main() {

int arr[20],i,j,size; 

printf("enter the size of the array: ");
scanf("%d",&size);
printf("enter the elements of the array: \n");
for(i=0; i<size; i++){
 printf("the element %d is : ",i);
 scanf("%d",&arr[i]);
}

j=0; 

for(i=0; i<size; i++){
	
	if(arr[i]<0){
	  int temp=arr[i];

	  for(int k=i; k>j; k--){
	     arr[k]=arr[k-1];		
	  }

	  arr[j++]=temp; 
           
	}
	
}




printf("The array elements are: \n");
for(i=0; i<size; i++){
	printf("%d ",arr[i]);
}



return 0; 
}
    

  
 
    

 
  
 
    
  
 
    

 
  
 
    
  
 
    

 
  
 
    
 
    
