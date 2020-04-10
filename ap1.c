#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];      // 배열의 크기가 5인 list라는 배열을 선언한다.
    int *plist[5] ={NULL,}; //배열의 크기가 5인 plist라는 포인터배열을 선언한다.

    plist[0] = (int*)malloc(sizeof(int)); 
//plist[0]에 malloc을 통해서 int만큼의 사이즈를 heap영역에서 받아서 주소를 넘겨준다.

    list[0] = 1; //list[0]에 1을 대입한다.
    list[1] = 100; // list[1]에 100을 대입한다.

    *plist[0] = 200; //plist[0]이 가리키는 값에 200을 대입한다.

    printf("[----- [이성규] [2019038090] -----]\n");
    printf("value of list[0]          = %d\n", list[0]); 
//list[0]의 값을 출력한다.
    printf("address of list[0]        = %p\n", &list[0]); 
//list[0]의 주소를 출력한다.
    printf("value of list             = %p\n", list); 
// list의 값을 출력한다. 이때 list의 값은 list[0]의 주소값이다.
    printf("address of list (&list)   = %p\n, &list"); 
// list의 주소값을 출력한다.

    printf("---------------------------------------\n\n");
    printf("value of list[1]          = %d\n", list[1]); 
//list[1]의 값을 출력한다.
    printf("address of list[1]        = %p\n", &list[1]); 
// list[1]의 주소값을 출력한다.
    printf("value of *(list+1)        = %d\n",*(list + 1)); 
// list+1 이 가리키는 값을 출력한다.list+1은 list[1]을 가리키는 포인터기 때문에 list[1]의 값을 출력한다.
    printf("address of list+1         = %p\n", list+1 ); 
// list+1의 주소를 출력한다. 

    printf("---------------------------------------\n\n");

    printf("value of *plist[0]        = %d\n", *plist[0]); 
// *plist[0]이 가리키는 값을 출력한다.
    printf("&plist[0]                 = %p\n", &plist[0]); // plist[0]의 주소값을 출력한다.
    printf("&plist                    = %p\n", &plist); 
// plist의 주소값을 출력한다.
    printf("plist                     = %p\n", plist); 
// plist의 값을 출력한다
    printf("plist[0]                  = %p\n", plist[0]); 
// plist[0]의 값을 출력한다.
    printf("plist[1]                  = %p\n", plist[1]); 
// plist[1]의 값을 출력한다.
    printf("plist[2]                  = %p\n", plist[2]); 
// plist[2]의 값을 출력한다.
    printf("plist[3]                  = %p\n", plist[3]); 
// plist[3]의 값을 출력한다.
    printf("plist[4]                  = %p\n", plist[4]); 
// plist[4]의 값을 출력한다.
    

    free(plist[0]); // plist[0]의 동적할당을 해제해준다.
    
} 
