//worst code - 23,27

//pattern 1
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


//pattern 2
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


//pattern 3
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//optmised code 
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 4
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

//pattern 5
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=1; i<=2*n-1; i++){
        int numToPrint = i<n ? i : 2*n-i;
        for(int j=1; j<=numToPrint; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}



//pattern 6
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=0; i<n; i++){
        int space = n-i-1;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        for(int k=0; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
}

//optmised code
#include <stdio.h> 
int main() {
    // Write C code here
    int n = 4;
    
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 7
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=0; i<n; i++){
        int space = i;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = n-i;
        for(int k=0; k<element; k++){
            printf("*");
        }
        printf("\n");
    }
}

//optmised code 
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(int j=i; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
}

//pattern 8
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<n; i++){
        int space = n-i-1;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = n-space+i;
        for(k=0; k<element; k++){
            printf("*");
        }
        printf("\n");
    }
}

//optmised code
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    for(int i=1; i<=n; i++){
        
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}

//beginner code
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    for(int i=1; i=n; i++){
        
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        
        for(int j=1; j<i; j++){
            printf("*");
        }
         for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}



//pattern 9
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<n; i++){
        int space = i;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = 2*n-space-i-1;
        for(k=0; k<element; k++){
            printf("*");
        }
        printf("\n");
    }
}

//beginner solution
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        
        for(int j=1; j<=n; j++){
            printf("*");
        }
         for(int j=1; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
}

//pattern 10 
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<n; i++){
        int space = n-i-1;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = i+1;
        for(k=0; k<element; k++){
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 11
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<n; i++){
        int space = i;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = n-i;
        for(k=0; k<element; k++){
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 12
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<2*n; i++){
        int space = i<n ? i : 2*n-i-1; 
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = i<n ? n-i : i-n+1;
        for(k=0; k<element; k++){
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 13
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<n; i++){
        int space = n-1-i; 
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = n-space+i;
        for(k=0; k<element; k++){
            char whichElement = ( k==0 || k==element-1 || element == 2*n-1  ) ? '*' : ' ';
            printf("%c",whichElement);
        }
        printf("\n");
    }
}

//pattern 14
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<n; i++){
        int space = i; 
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = 2*n-space-1-i;
        for(k=0; k<element; k++){
            char whichElement = ( k==0 || k==element-1 || element == 2*n-1  ) ? '*' : ' ';
            printf("%c",whichElement);
        }
        printf("\n");
    }
}

//pattern 15
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=0; i<2*n; i++){
        int space = i<n ? i : 2*n-i-1 ; 
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = i < n ? 2*n-space-1-i : i-space;
        for(k=0; k<element; k++){
            char whichElement = ( k==0 || k==element-1 || element == 2*n-1  ) ? '*' : ' ';
            printf("%c",whichElement);
        }
        printf("\n");
    }
}

//pattern 16 
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
  
    for(int i=1; i<=n; i++){
       
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        int c = 1; 
        for(int k=1; k<=i; k++){
           printf("%d ",c);
           c = c * (i-k) / k;
        }
        printf("\n");
    }
}


// my attempted code 
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int k = 0;
    for(int i=1; i<=n; i++){
        int space = 2*n-2*i;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        int element = i;
        for(k=0; k<element; k++){
            int whichElement = ( k==0 || k==element-1) ? 1 : 0;
            printf("%d  ",whichElement);
        }
        printf("\n");
    }
}

//pattern 17 

#include <stdio.h>
int main(){
    int n = 4;
    int k = 0;
    for(int row=1; row<=n*2-1; row++){
        
        int c = row<=n ? row : 2*n-row;
        int numberOfSpaces = n-c;
        
        for(int j=0; j<numberOfSpaces; j++){
            printf(" ");
        }
        for(int col=c; col>0; col--){
            printf("%d",col);
        }
        for(int col=2; col<=c; col++){
            printf("%d",col);
        }

        printf("\n");
    }
}

//pattern 18
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=0; i<n*2; i++){
        int numberOfElement = i<n? n-i : i-n+1; 
        for(int j=0; j<numberOfElement; j++)
        {
            printf("*");
        }
        int numberOfSpace = i<n? i*2 : 2*n - 2*numberOfElement;
         for(int j=0; j<numberOfSpace; j++)
        {
            printf(" ");
        }
         for(int j=0; j<numberOfElement; j++)
        {
            printf("*");
        }
        printf("\n");
    }
//attempting to solve in single inner loop unsolved 
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
      int totalElements = 2*n;
    for(int i=1; i<=totalElements; i++){
      
        for(int j=1; j<=totalElements;j++){
        int numberOfElements = i<=n ? 2*(n-i+1) : (i-(n-j)); 
        int numberOfSpaces = totalElements - numberOfElements;
        int mid=numberOfElements/2;
        char whichElement = (j>mid && j<=mid+numberOfSpaces)? ' ' : '*';  
         printf("%c",whichElement);  
        }
        printf("\n");
    }
   

    return 0;
}

//pattern 19
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=0; i<n*2-1; i++){
        int numberOfElement = i<n? i+1 : 2*n-i-1; 
        for(int j=1; j<=numberOfElement; j++)
        {
            printf("*");
        }
        int numberOfSpace = 2*n - 2*numberOfElement;
         for(int j=0; j<numberOfSpace; j++)
        {
            printf(" ");
        }
         for(int j=1; j<=numberOfElement; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//pattern 20 

#include <stdio.h>

int main(){
    
    int n = 5;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
        char whichElement = (i==0 || i==n-1 || j==0 || j==n-2) ? '*' : ' ' ;

            printf("%c",whichElement);
    }
    printf("\n");
    
}
}

//pattern 21
#include <stdio.h>

int main(){
    
    int n = 5;
    int number = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
    
            printf("%d",number);
            i<n ? printf("  "): printf(" ");           
            number++;
    }
    printf("\n");
    
}
}



//pattern 22
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            
            int whichElement = i==j || (i-j)%2==0 ? 1 : 0 ; 
            printf("%d ", whichElement);
            
        }
        
        printf("\n");
    }

    return 0;
}

//striver solution
#include <stdio.h>

void pattern11(int N) {
    int start = 1;
    
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) start = 1;
        else start = 0;
        
        for (int j = 0; j <= i; j++) {
            printf("%d", start);
            start = 1 - start;
        }
        
        printf("\n");
    }
}

int main() {
    int N = 5;
    pattern11(N);

    return 0;
}


//pattern 23 

//worst code
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n=3; 
    int elements = 0;
    int elements2=0;
    int spaceright = 2*n;
   for(int i=0; i<n; i++){
       //left spaces
       int spaceleft = n-(i*2);
       for(int j=0; j<=spaceleft;j++){
           printf(" ");
       }
       //left Element
      
       for(int j=0; j<=elements; j++){
           char printE = j==0 || j==elements ? '*' : ' ';
           printf("%c",printE);
       }
       elements+=n+1-i;
       
       //right spaces
       
       for(int j=1; j<=spaceright;j++){
           printf(" ");
       }
      spaceright = spaceright - 2*2; 
       //rightElement
      
       
       for(int j=0; j<=elements2; j++){
           char printE =  (i!=n-1)? (j==0 || j==elements2 ? '*' : ' ') : (j==elements2) ? '*' : ' ';
           printf("%c",printE);
       }
      elements2 = (i!=n-2) ? elements2 + n+1-i : 2*n;
       
       printf("\n");
   }
}

//pattern 24
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=0; i<n*2-1; i++){
        int numberOfElement = i<n? i+1 : 2*n-i-1; 
        
        for(int j=1; j<=numberOfElement; j++)
        {
            char whichElement = j==1 || j==numberOfElement ? '*': ' ';
            printf("%c",whichElement);
        }
        int numberOfSpace = 2*n - 2*numberOfElement;
         for(int j=0; j<numberOfSpace; j++)
        {
            printf(" ");
        }
         for(int j=1; j<=numberOfElement; j++)
        {
            char whichElement = j==1 || j==numberOfElement ? '*': ' ';
            printf("%c",whichElement);
        }
        printf("\n");
    }

    return 0;
}

//pattern 25
#include <stdio.h>

int main(){
    
    int n = 5;
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n-1-i; j++){
            printf(" ");
        }
        
        for(int j=0; j<n; j++){
        char whichElement = (i==0 || i==n-1 || j==0 || j==n-1) ? '*' : ' ' ;

            printf("%c",whichElement);
    }
    printf("\n");
    
}
}

//pattern 26
#include <stdio.h>

int main() {
    int n=6;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=n-i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}



//pattern 27 
// worst code
#include <stdio.h>

void main(){
    
    int n=4;
    int number=1;
    int size = 20; 
    int num2 = size+1; 
    for(int i=0; i<n; i++){
        
        for(int j=0; j<i*2; j++){
            printf(" ");
        }
        
        
        for(int j=0; j<n-i; j++){
            printf("%d ",number);
            number++;
        }
        //printf(" ");
        
        int temp = num2-(n-i);
        num2=num2-(n-i);
        for(int j=0; j<n-i; j++){
            printf("%d ",temp);
            temp++;
        }
        printf("\n");
    }
    

}



//pattern 28 

#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=0; i<2*n-1; i++){
        int numberOfElements = i<5 ? i+1 : 2*n-i-1;
        int numberOfSpaces = n-numberOfElements;
        
        for(int j=0; j<numberOfSpaces; j++){
            printf(" ");   
        }
        
        
        
        for(int k=0; k<numberOfElements; k++){
            printf("* ");
        }
        
        printf("\n");
    }
}

//pattern 29

#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=0; i<n*2-1; i++){
        int numberOfElement = i<n? i+1 : 2*n-i-1; 
        for(int j=1; j<=numberOfElement; j++)
        {
            printf("*");
        }
        int numberOfSpace = 2*n - 2*numberOfElement;
         for(int j=0; j<numberOfSpace; j++)
        {
            printf(" ");
        }
         for(int j=1; j<=numberOfElement; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//pattern 30
#include <stdio.h>
int main(){
    int n = 5;
    int k = 0;
    for(int row=1; row<=n; row++){
        
        int numberOfSpaces = n-row;
        
        for(int j=0; j<numberOfSpaces; j++){
            printf("  ");
        }
        for(int col=row; col>0; col--){
            printf("%d ",col);
        }
        for(int col=2; col<=row; col++){
            printf("%d ",col);
        }

        printf("\n");
    }
}

//pattern 31
#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
return a > b ? b : a;
}
int main(){
    int n = 8;
    int k = 0;
    for(int row=1; row<8; row++){
        for(int col=1; col<8; col++){
            
            int whichElement = 5 - min(min(row,n-row),min(col,n-col));
            printf("%d ",whichElement);
            
        }
        

        printf("\n");
    }
}

//without function
#include <stdio.h>
#include <math.h>

void pattern31(int n) {
    int original_n = n + 1;
    n = 2 * n;
    for (int row = 1; row < n; row++) {
        for (int col = 1; col < n; col++) {
            int value = original_n - fmin(fmin(row, col), fmin(n - row, n - col));
            printf("%d ", value);
        }
        printf("\n");
    }
}

int main() {
    int n = 4;
    pattern31(n);
    return 0;
}

//pattern 32
 #include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=1; i<=n; i++){
        
        char ch = 'A'+n-i;
        for(char j=1; j<=i;j++){
         printf("%c ",ch);  
         ch++;
        }
        printf("\n");
    }
   

    return 0;
}

//pattern 33
#include <stdio.h>

int main() {
    // Write C code here
   int n =5; 
   
   char letter = 'a';
   
   for(int i=1; i<=5; i++){
       for(int j=1; j<=i; j++ ){
           printf("%c ",letter);
           letter++;
           if (letter<97) letter+=32;  //A=65, a=97, difference 32
           else letter-=32;
       }
       printf("\n");
   }
   

//pattern 34 
#include <stdio.h>

int main() {
    // Write C code here
   int n =5; 
   
   char start = 'A'+n-1;
   char letter;
   for(int i=1; i<=5; i++){
       letter = start-i+1;
       for(int j=1; j<=n-i+1; j++ ){
           printf("%c ",letter);
           letter--;
       }
       printf("\n");
   }
   
    

    return 0;
}

//pattern 35
#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
  
   for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
           printf("%d",j);
       }
       
       int space = 2*n-2*i; //striver solution int space = 2*(n-1); space-=2 //optmised my solutin 2*(n-i)
        for(int j=1; j<=space; j++){
           printf(" ");
       }
        for(int j=i; j>0; j--){
           printf("%d",j);
       }
       
       printf("\n");
   }

    return 0;
}



