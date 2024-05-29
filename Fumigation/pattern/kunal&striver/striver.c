//pattern
//1 2 3 4 5 6 7
//1 2 3 4 5 6
//1 2 3 4 5 
//1 2 3 4
//1 2 3
//1 2
//1

#include <stdio.h>

int main() {
    // Write C code here
    int n = 7;
    for(int i=0; i<n; i++){
        
        for(int j=1; j<=n-i; j++)
        {
            printf("%d ",j);
        }
        
       
        printf("\n");
    }
}   


    //*
   //***
  //*****
 //*******
//*********
 //*******
  //*****
   //***
    //*
    
//my solution     
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    for(int i=1; i<2*n; i++){
        
        int numberOfSpaces =  i<=n ? n-i : i-n;
        for(int j=0; j<numberOfSpaces; j++)
        {
            printf(" ");
        }
        int totalElements = 2*n-1;
        int numberOfElements = i<=5 ? 2*i-1 : totalElements-2*numberOfSpaces ;
        for(int j=0; j<numberOfElements; j++){
            printf("*");
        }
         printf("\n");
    }
  
}   

//simplycoding - beginner level
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    for(int i=1; i<=n; i++){
        
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
    
    for(int i=1; i<n; i++){
        
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        
       for(int j=i; j<n; j++){
            printf("*");
        }
         for(int j=i; j<n-1; j++){
            printf("*");
        }
        printf("\n");
    }
}

//A
//AB
//ABC
//ABCD
//ABCDE


#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    int alpha = 65;
    for(int i=1; i<=n; i++){
        
        for(int j=65; j<=i+alpha-1;j++){
         printf("%c",j);   
        }
        printf("\n");
    }
   

    return 0;
}

//striver solution
#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=0; i<n; i++){
        
        for(char j='A'; j<='A'+i;j++){
         printf("%c",j);   
        }
        printf("\n");
    }
   

    return 0;
}

//ABCDE
//ABCD
//ABC
//AB
//A

#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=1; i<=n; i++){
        
        for(char j='A'; j<='A'+n-i;j++){
         printf("%c",j);   
        }
        printf("\n");
    }
   

    return 0;
}

//A
//BB
//CCC
//DDDD
//EEEEE

#include <stdio.h>

int main() {
    // Write C code here
    int n = 5;
    
    for(int i=0; i<n; i++){
        //char letter = 'A'+i;
        for(char j=0; j<=i;j++){
         printf("%c",'A'+i);   //printf("%c",letter);
        }
        printf("\n");
    }
   

    return 0;
}

   //A
  //ABA
 //ABCBA
//ABCDCBA

#include <stdio.h>

int main() {
    // Write C code here
    int n = 4;
    
    for(int i=0; i<n; i++){
        
        for(int space=0; space<n-1-i; space++)
        {
            printf(" ");
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(char j=1; j<=2*i+1;j++){
         printf("%c",ch);  
         (j<=breakpoint)? ch++: ch--;
        }
        printf("\n");
    }
   

    return 0;
}

//E 
//D E 
//C D E 
//B C D E 
//A B C D E

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






