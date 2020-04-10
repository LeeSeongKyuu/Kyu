#include <stdio.h>

void print1 (int *ptr, int rows); //print1 이라는 함수를 선언한다.

int main()
{
    int one[] = {0, 1, 2, 3, 4,};  // one 배열에 0 1 2 3 4 값을 저장한다.

    printf("[----- [이성규] [2019038090] -----]\n");
    printf("one    =%p\n",one); 
//one의 값을 출력한다. 여기서는 one[0]의 주소를 출력하게 된다.
    printf("&one   =%p\n",&one); // one의 주소를 출력한다.
    printf("&one[] =%p\n",&one[0]); //one[0]의 주소를 출력한다.
    printf("\n");

    print1(&one[0], 5);

    return 0;
}

void print1 (int *ptr, int rows) 
//일차원 배열의 주소를 계산하기 위한 함수를 선언했다.
{/* print out a one-dimensional array using a pointer */

    int i;
    printf("Address \t Contents\n"); 
    for (i = 0; i < rows; i++)
        printf("%p \t  %5d\n",ptr + i, *(ptr + i));  
        /* ptr에 one[0]을 대입했으므로   ptr+i는 one[0] one[1]...의 주소를 출력하고 *(ptr+i)는 ptr+0 ptr+1....이 가리키는 값 즉 one[0],one[1]...의 값을 출력한다. */
    printf("\n");
}
