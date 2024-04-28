#include <stdio.h>

int main() {    



    int n1, n2, sum;

    

    printf("Enter two integers: ");

    scanf("%d %d", &n1, &n2);



    // calculate the sum

    sum = n1 + n2;      

    

    printf("%d +0 %d = %d", n1, n2, sum);

    return 0;

}

//function added in branch1

int func_add(int a, int b)

{

	// i am in main branch

	// i am making this changes in 

	// one more change 

	return a+b;

}
