// 3 
// 6 5 
// 9 10 12 
// 15 15 18 20 
// 21 25 24 30 27 


#include <stdio.h>

int main() {

int n=5,three=0, five=0;
//int number; 
for(int i=0; i<n; i++){
	
	for(int j=0; j<=i; j++) {
	printf("%d ",j==0 || j%2==0 ? three+=3 : (five+=5));
    //j==0 || j%2==0 ? (three+=3) : (five+=5);
	}
	printf("\n");
}

}
