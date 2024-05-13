//Write a program in C to store elements in an array and print them.

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int n;
  
    
    printf("enter the size of the array: ");
    scanf("%d",&n);
    
    int array[n], i;
    
    //take inputs from user
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    
    //print the array
    for(i=0; i<n; i++){
        printf("%d ",array[i]);
    }

    return 0;
}

// reverse of an array
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int n;
  
    
    printf("enter the size of the array: ");
    scanf("%d",&n);
    
    int array[n], i;
    
    //take inputs from user
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    
    //print the array
    printf("\narray: \n");
    for(i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    
    printf("\nreverse of array: \n");
    int reverse[n];
    
    //reverse the array

     for(i=n-1; i>=0; i--){
     reverse[n-1-i] = array[i];
    
    }
    
    //reversed array 
    for(i=0; i<n; i++){
        printf("%d ",reverse[i]);
    }
    
    return 0;
}

//sum of array
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int n;
  
    
    printf("enter the size of the array: ");
    scanf("%d",&n);
    
    int array[n], i,sum=0;
    
    //take inputs from user
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    
    //print the array
    printf("\narray: \n");
    for(i=0; i<n; i++){
        printf("%d ",array[i]);
        sum += array[i];
    }
    
    printf("\nsum of array: %d",sum);
    
   
    
    return 0;
}

//copying elements from first array to second

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int n;
  
    
    printf("enter the size of the array: ");
    scanf("%d",&n);
    
    int array[n], i;
    
    //take inputs from user
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    
    //print the array
    printf("\narray: \n");
    for(i=0; i<n; i++){
        printf("%d ",array[i]);
      
    }
    int second[n];
    
    //copying second array
    for(i=0; i<n; i++){
        second[i]=array[i];
      
    }
    
    printf("\nSecond Array: \n");
    for(i=0; i<n; i++){
        printf("%d ",second[i]);
      
    }
   
    
    return 0;
}

//print number of duplicates if numbers in sorted order
#include <stdio.h>

int main() {
    // Write C code here
    int array[] = {1,1,2,3};
    int flag=0, temp, i, j;
    int size = sizeof(array)/sizeof(array[0]);
 
   for(i=0; i<size; i++){
       temp = array[i];
       for(j=i+1; j<size; j++){
           if(temp==array[j]){
               flag+=1;
               break; 
           }
       }
   }
    printf("Number of duplicates %d",flag);



    return 0;
}




//print unique element
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int array[] = {1,5,2,3,4,5};
    int flag, temp, i, j;
    int size = sizeof(array)/sizeof(array[0]);
 
   for(i=0; i<size; i++){
       flag=0;
       temp = array[i];
       for(j=0; j<size; j++){
           if(temp==array[j]){
               flag+=1;
           }
       } 
        if(flag==1){
           printf("%d ",temp);
       }
   }



    return 0;
}

//Write a program in C to merge two arrays of the same size sorted in descending order.
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int one[] = {5,2,8,2};
    int two[] = {1,2,4,5};
    int len1 = sizeof(one)/sizeof(one[0]);
    int len2 = sizeof(two)/sizeof(two[0]);
    int three[10];
    

    
    for(int i=0; i<len1; i++){
        three[i] = one[i];
        printf("%d ",three[i]);
    }
    printf("\n");
    
     for(int i=0; i<len2; i++){
        three[len1+i] = two[i];
        printf("%d ",two[i]);
    }
    printf("\n");
     for(int i=0; i<len2+len1; i++){
        printf("%d ",three[i]);
    }
    printf("\n");
    
    for(int i=0; i<len2+len1; i++){
        three[i];
        for(int j=i+1; j<len2+len1; j++){
            if(three[i]<three[j]){
                int temp = three[i];
                three[i] = three[j];
                three[j] = temp;
            }
        }
    }
    printf("\n");
     for(int i=0; i<len2+len1; i++){
        printf("%d ",three[i]);
    }
    return 0;
}

Write a program in C to count the frequency of each element of an array.
#include <stdio.h>
int main() {
    
  int n,j;
  printf("enter the size of the array: ");
  scanf("%d",&n);
  
  int arr[n];
  int occ[n];
  
  printf("enter the elements of the array: \n");
  for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
  }
  printf("\nelements of the array are: \n");
  for(int i=0; i<n; i++){
      printf("%d ",arr[i]);
      occ[i]=-1;
  }
   
  //count the number of occurence
  for(int i=0; i<n; i++){
      int temp = arr[i];
      int count=1;
      for(j=i+1; j<n; j++){
          if(temp==arr[j]){
              count+=1;
              occ[j]=0;
          }
      }
      
      if(occ[i]!=0){
          occ[i]=count;
      }
    
    
  }
  
  for(int i=0; i<n; i++){
      if(occ[i]!=0){
          printf("\nelement %d occurence %d",arr[i],occ[i]);
      }
      
  }

 return 0;   
}


 Write a program in C to find the maximum and minimum elements in an array.

#include <stdio.h>
int main() {
    
  int n,j;
  printf("enter the size of the array: ");
  scanf("%d",&n);
  
  int arr[n];
  
  printf("enter the elements of the array: \n");
  for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
  }
  printf("\nelements of the array are: \n");
  for(int i=0; i<n; i++){
      printf("%d ",arr[i]);
      
  }
   
  //sorting 
  for(int i=0; i<n; i++){
      int temp = arr[i];
      for(j=i+1; j<n; j++){
          if(temp>arr[j]){
              arr[i] = arr[j];
              arr[j] = temp;
          }
      }
  }
  printf("\n");
  for(int i=0; i<n; i++){
          printf("%d ",arr[i]);
  }

  printf("\nsmallest number %d",arr[0]);
  printf("\nlargest number %d",arr[n-1]);
 return 0;   
}

Write a program in C to separate odd and even integers into separate arrays.

#include <stdio.h>
int main() {
    
  int n,j;
  printf("enter the size of the array: ");
  scanf("%d",&n);
  
  int arr[n];
  int odd[n];
  int even[n];
  int e=0,k=0;
  printf("enter the elements of the array: \n");
  for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
  }
  printf("\nelements of the array are: \n");
  for(int i=0; i<n; i++){
      printf("%d ",arr[i]);
      if(arr[i]!=0){
          
          if(arr[i]%2!=0){
            odd[k]=arr[i];
           
            k++;
        }
          
          if(arr[i]%2==0){
          even[e]=arr[i];
         
          e++;
      }
          
     }
  }
   
     
     
      
  //printing odd numbers
  printf("\nOdd numbers: \n");
  for(int i=0; i<k; i++){
          printf("%d ",odd[i]);
  }
  
  //printing even numbers
  
  printf("\neven numbers: \n");
  for(int i=0; i<e; i++){
          printf("%d ",even[i]);
  }


 return 0;   
}

Write a program in C to sort elements of an array in ascending order.
#include <stdio.h>

int main()
{
    int arr1[100], i, n,temp;

    // Prompt user for input
   
    printf("Input the size of array : ");
    scanf("%d", &n);

    // Input sorted elements for the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }


    // Display the existing array
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    //sorting the array
    for(i =0; i<n; i++){
        for(int j=0; j<n-1; j++){
           if(arr1[j]>arr1[j+1]){
            temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
           }
        }
    }
   
    // Display the array after insertion
    printf("\n\nAfter Insert the list is :\n");
    for (i = 0; i <n; i++)
        printf("% 5d", arr1[i]);
    printf("\n");

    return 0;
}

Write a program in C to sort the elements of the array in descending order.
#include <stdio.h>

int main()
{
    int arr1[100], i, n,temp;

    // Prompt user for input
   
    printf("Input the size of array : ");
    scanf("%d", &n);

    // Input sorted elements for the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }


    // Display the existing array
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    //sorting the array
    for(i =0; i<n; i++){
        for(int j=0; j<n-1; j++){
           if(arr1[j]<arr1[j+1]){
            temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
           }
        }
    }
   
    // Display the array after insertion
    printf("\n\nAfter Insert the list is :\n");
    for (i = 0; i <n; i++)
        printf("% 5d", arr1[i]);
    printf("\n");

    return 0;
}

Write a program in C to insert the values in the array (sorted list).
#include <stdio.h>

int main()
{
    int arr1[100], i, n,temp,val,pos;

    // Prompt user for input
   
    printf("Input the size of array : ");
    scanf("%d", &n);

    // Input sorted elements for the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }


    // Display the existing array
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    printf("\nenter the value to be inserted : ");
    scanf("%d", &val);


    //finding position to insert
    for(i =0; i<n; i++){
        temp=val;
        if(arr1[i]>temp){
            pos = i; 
            break;
        }
        else{
            pos=i+1;
        }
    }
    
    //insertion at position 
    for(i=n; i>=pos; i--){
        
        arr1[i+1]=arr1[i];
        arr1[pos]=val;
        n++;
        }
        
    
   
    // Display the array after insertion
    printf("\n\nAfter Insert the list is :\n");
    for (i = 0; i <n; i++)
        printf("% 5d", arr1[i]);
    printf("\n");

    return 0;
}


Write a program in C to delete an element at a desired position from an array.
#include <stdio.h>

int main()
{
    int arr1[100], i, n,temp,val,pos=-1;

    // Prompt user for input
    
   
   
    printf("Input the size of array : ");
    scanf("%d", &n);

    // Input sorted elements for the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }


    // Display the existing array
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    printf("\nenter the value to be deleted : ");
    scanf("%d", &val);

    
    //finding position to insert
    for(i =0; i<n; i++){
        temp=val;
        if(arr1[i]==temp){
            pos = i; 
            break;
        }
    }
    if (pos == -1){
            printf("element not found");
            return 0;
    }
    
    //insertion at position 
    for(i=pos; i<n; i++){
        arr1[i]=arr1[i+1];
        }
    n--;    
    
   
    // Display the array after deletion
    printf("\n\nAfter Insert the list is :\n");
    for (i = 0; i <n; i++)
        printf("% 5d", arr1[i]);
    printf("\n");

    return 0;
}

 Write a program in C to find the second largest element in an array.
#include <stdio.h>

int main()
{
    int arr1[100], i, n,temp;

    // Prompt user for input
    
   
   
    printf("Input the size of array : ");
    scanf("%d", &n);

    // Input sorted elements for the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }


    // Display the existing array
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    
    //sorting
   for(i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
           if(arr1[i]<arr1[j]){
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
           }
        }
    }
    

    // Display the array after deletion
    printf("\n\nSecond largest number %d :\n",arr1[1]);
    

    return 0;
}

Write a program in C to find the second smallest element in an array.
#include <stdio.h>

int main()
{
    int arr1[100], i, n,temp;

    // Prompt user for input
    
   
   
    printf("Input the size of array : ");
    scanf("%d", &n);

    // Input sorted elements for the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }


    // Display the existing array
    printf("The existing array list is :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    
    //sorting
   for(i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
           if(arr1[i]>arr1[j]){
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
           }
        }
    }
    

    // Display the array after deletion
    printf("\n\nSecond largest number %d :\n",arr1[1]);
    

    return 0;
}

Write a program in C for a 2D array of size 3x3 and print the matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    // Input sorted elements for the array
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }


    // Display the existing array
    printf("The Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }




    return 0;
}

Write a program in C for adding two matrices of the same size.
#include <stdio.h>

int main()
{
    int i,j,row,col;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    int sec[row][col];
    // second matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &sec[i][j]);
            third[i][j]+=sec[i][j];
        }
    }


    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }

// Display second matrix
    printf("The Second Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",sec[i][j]);
        }
        printf("\n");
    }
    
// sum of two matrix
    printf("The Sum of Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",third[i][j]);
        }
        printf("\n");
    }




    return 0;
}

Write a program in C for the subtraction of two matrices.
#include <stdio.h>

int main()
{
    int i,j,row,col;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    int sec[row][col];
    // second matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &sec[i][j]);
            third[i][j]-=sec[i][j];
        }
    }


    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }

// Display second matrix
    printf("The Second Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",sec[i][j]);
        }
        printf("\n");
    }
    
// sum of two matrix
    printf("The Substraction of Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",third[i][j]);
        }
        printf("\n");
    }




    return 0;
}

Write a program in C for the multiplication of two square matrices.
#include <stdio.h>

int main()
{
    int i,j,row,col;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    int sec[row][col];
    // second matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &sec[i][j]);
            third[i][j]*=sec[i][j];
        }
    }


    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }

// Display second matrix
    printf("The Second Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",sec[i][j]);
        }
        printf("\n");
    }
    
// sum of two matrix
    printf("The Multiplication of Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",third[i][j]);
        }
        printf("\n");
    }




    return 0;
}


Write a program in C to find the transpose of a given matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    

    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }

// Display second matrix
    printf("The Transpose of  Matrix is :\n");
    for (i = 0; i < col; i++)
    {
        for(j=0; j<row; j++){
            printf("% 5d",mat[j][i]);
        }
        printf("\n");
    }
    



    return 0;
}

//Write a program in C to find the sum of the left diagonals of a matrix.

#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    

    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
            if(i==j){
                sum+=mat[i][j];
            }
        }
        printf("\n");
    }

// Display second matrix
    printf("sum of right diagonal of square matrix: %d \n",sum);
    
    



    return 0;
}

Write a program in C to find the sum of the right diagonals of a matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    

    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
            if(j==row-1-i){
                sum+=mat[i][j];
            }
        }
        printf("\n");
    }

// Display second matrix
    printf("sum of right diagonal of square matrix: %d \n",sum);
    
    



    return 0;
}






Write a program in C to find the sum of rows and columns of a matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col,colsum=0,rowsum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    

    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {  
        rowsum=0;
        for(j=0; j<col; j++){
            printf("% 5d",mat[i][j]);
            rowsum+=mat[i][j];
        }
         printf("% 5d",rowsum);
         printf("\n");
    }
    
    for (i = 0; i < col; i++)
    {
        colsum=0;
        //printf("iteration start %d\n",colsum);
        for(j=0; j<row; j++){
            colsum+=mat[j][i];
            //printf("% 5d",mat[j][i]);
            if(j==row-1){
                printf("% 5d",colsum);
            }
        }
    }

   
    
    



    return 0;
}

 Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    

    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Lower Triangle :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            
            if(j<i){
                printf("% 5d",0);
            }
            else {
                printf("% 5d",mat[i][j]);
            }
    }
    
    printf("\n");      
}

    
    



    return 0;
}

Write a program in C to print or display an upper triangular matrix.

#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    

    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Lower Triangle :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            
            if(i<j){
                printf("% 5d",0);
            }
            else {
                printf("% 5d",mat[i][j]);
            }
    }
    
    printf("\n");      
}

Write a program in C to calculate the determinant of a 3 x 3 matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    

    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        printf("% 5d",mat[i][j]);
        }
        printf("\n");
    }
    
    int det = 0; 
    
    for (i = 0; i < 3; i++)
    {
        det = det + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3]*mat[2][(i+1)%3])); 
    }
 
    

 

    printf("Determinant of Matrix: %d\n",det);
}
    
    



    return 0;
}

 Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int third[row][col];
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
            third[i][j]=mat[i][j];
        }
    }
    
    
    int countZero = 0;
    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        printf("% 5d",mat[i][j]);
                if(mat[i][j]==0){
            countZero++;
        }
        }
    printf("\n");
    }
    printf("%d\n",countZero);
    if(countZero>((row*col)/2)){
        printf("Sparse Matrix");
    }
    else{
        printf("not a sparse matrix");
    }
 

 

}

Write a program in C to accept two matrices and check whether they are equal.
#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int sec[row][col];
    
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        printf("% 5d",mat[i][j]);
               
        }
    printf("\n");
    }
   
     printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &sec[i][j]);
        }
    }
    
    // Display first matrix
    printf("The second Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        printf("% 5d",sec[i][j]);
               
        }
    printf("\n");
    }
    
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        if(mat[i][j]!=sec[i][j])
            printf("not a identitacl matrix");
            return 0;
               
        }
    printf("\n");
    }
  printf("identical matrix");

 
}


 Write a program in C to check whether a given matrix is an identity matrix.
#include <stdio.h>

int main()
{
    int i,j,row,col,sum=0;

    // Prompt user for input
    printf("Input number of rows : ");
    scanf("%d", &row);
    
    printf("Input number of columns : ");
    scanf("%d", &col);

    int mat[row][col];
    int sec[row][col];
    
    // first matrix
    printf("Input %d x %d elements in the array:\n",row,col);
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
            printf("element - %d %d: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    int flag=0;
    // Display first matrix
    printf("The First Matrix is :\n");
    for (i = 0; i < row; i++)
    {
        for(j=0; j<col; j++){
        printf("% 5d",mat[i][j]);
        
        if(i!=j){
            if(mat[i][j]!=0){
            flag=1;}
        }
        else{
            if(mat[i][j]!=1){
            flag=1;}
        }
               
        }
    printf("\n");
    
    }
   if(flag!=0){
        printf("not identity matrix");
    }
    else{
        printf("identity matrix");
    }
    

 
}

Write a program in C to find a pair with given sum in the array.
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of the array: \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter the elements of the array: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nElements of the Array: \n");
    for(int i=0; i<n; i++){
        printf("% 5d",arr[i]);
    }
    int sum;
    printf("\nEnter the sum: \n ");
    scanf("%d",&sum);
    int flag=0;
     for(int i=0; i<n; i++){
          for(int j=i+1; i<n; i++){
            if(arr[i]+arr[j]==sum){
                printf("the pairs %d and %d of sum %d",arr[i],arr[j],sum);
                flag=1; 
                break;
            }
            
    }
    }
    
    
    if(flag==0){
                printf("pair not found");
            }
    
    
    return 0;
}

Write a program in C to find the majority element of an array.
#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of the array: \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter the elements of the array: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nElements of the Array: \n");
    for(int i=0; i<n; i++){
        printf("% 5d",arr[i]);
    }
//majority of element in an array
    int count = 1;
    int mid = n/2; 
    int index;
     for(int i=0; i==0; i++){
         count = 1; 
          for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count+=1; 
                index=arr[i];
            }
    }
    if(count>mid){
                printf("\nthe majority element: %d and count %d",index,count);
               return 0; 
            }
    }
    
   
    
    return 0;
}




 Write a program in C to find the number occurring odd number of times in an array.
All numbers occur even number of times except one number which occurs odd number of times.

#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of the array: \n");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter the elements of the array: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nElements of the Array: \n");
    for(int i=0; i<n; i++){
        printf("% 5d",arr[i]);
    }
//majority of element in an array
    int count = 1;
    for(int i=0; i<n-1; i++){
        count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        if(count%2!=0){
            printf("\n number %d odd number occurence %d",arr[i],count);
            break;
        }
    }
  
    
   
    
    return 0;
}

 Write a program in C to find the largest sum of contiguous subarrays in an array.
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("array elements are: \n");
    for(int i=0; i<size; i++){
        printf("%5d",arr[i]);
    }
    
    int sum = 0; 
    int maxSum=0;
    int i,j,k;
    //sum of sub arrays
    for(i=0; i<size; i++){
        for(j=i; j<size; j++){
            sum = 0; 
            
            if(i==0 && j==size-1)
                continue;
            
            for(k=i; k<=j; k++){
                sum = sum+arr[k];
            }
             if(sum>maxSum){
                maxSum = sum;
            }
        }
    }
    
    printf("\nmaximumn sum of all sub array: %d",maxSum);
    return 0;
   
}


 Write a program in C to find the missing number in a given array. There are no duplicates in the list.
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {3,4,5,6,7,8,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("array elements are: \n");
    for(int i=0; i<size; i++){
        printf("%5d",arr[i]);
    }
    
    int flag = 0; 
    int i,j,k;
    //sum of sub arrays
    for(i=1; i<=9; i++){
        flag = 0;
        for(j=0; j<size; j++){
            if(i==arr[j]) {flag=1;}
            
        }
        if(flag==0){ printf("\nmissing element %d",i);}
    }
    
  
    return 0;
   
}


Write a program in C to find the pivot element of a sorted and rotated array using binary search.

//write base cases 
#include <stdio.h>
int main() {

int arr[] = {1,2,3};

int n = sizeof(arr)/sizeof(arr[0]);

for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
}

int s = 0;
int e = n-1;
int mid = (s+e)/2;

if (arr[s] > arr[e]) { 
        printf("\npivot element don't exist"); 
        return 0;
    }

while(s<=e){
   mid = (s+e)/2;
    
    //comparing with left 
    if(s<mid && arr[mid]<arr[mid-1]){
        printf("\npivot element is %d and index is %d",arr[mid-1],mid-1);
        return 0; 
    }
    
    //comparing with right
    if(e>mid && arr[mid]>arr[mid+1]){
           printf("\npivot element is %d and index is %d",arr[mid],mid);
           return 0;
    }
    
    //check left is unsorted
    if(arr[s]>arr[mid]){
       e=mid-1; 
    }
    
    //check right is unsorted
    if(arr[e]<arr[mid]){
        s=mid+1;
    }
}


}

Write a program in C to merge one sorted array into another sorted array.
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int big[] = {10, 12, 14, 16, 18, 20, 22};
    int small[] = {11, 13, 15, 17, 19, 21}; 
    int b = 7;
    int s = 6; 
    int third[b+s];
    int left = 0; 
    int right = 0; 
    int index = 0; 
    
    while(left<b && right<s){
        if(big[left]<small[right]){
            third[index++]=big[left++];
        }
        else{
            third[index++]=small[right++];
        }
    }
    
    while(left<b){
        third[index++]=big[left++];
    }
    while(right<s){
        third[index++]=small[right++];
    }
    
    for(int i=0; i<b+s; i++){
        printf("%d ",third[i]);
    }
}

Write a program in C to rotate an array by N positions
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27}; 
   int size = sizeof(arr)/sizeof(arr[0]);
   
   int pos = 4; 
   int temp[pos];
   //before shifting 
    for(int i=0; i<size; i++){
       printf("%d ",arr[i]);
      
   }

  //storing in temp array
   for(int i=0; i<pos; i++){
    temp[i]=arr[i];
   }
  
  //left shifting 
  for(int i=pos; i<size; i++){
    arr[i-pos]=arr[i];
  }

  //adding back temp elements
  int j = 0; 
  for(int i=size-pos; i<size; i++){
    arr[i]=temp[j++];
  }
  printf("\n");
 for(int i=0; i<size; i++){
       printf("%d ",arr[i]);
      
   }
   
   }

   


