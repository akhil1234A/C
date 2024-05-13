
// 5 
// 4 5 
// 3 4 5 
// 2 3 4 5 
// 1 2 3 4 5 

//decreasing number pattern

#include <stdio.h>
int main() {

int n=5,num;
//int number = 5;

for(int i=n; i>0; i--){
num=i;
for(int j=0; j<=n-i; j++){
	printf("%d ",num++);
	}
printf("\n");
    }

}

//more advanced
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = n; i > 0; i--) {
        for (int j = 0, num = i; j <= n - i; j++, num++) {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}
 
