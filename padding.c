#include <stdio.h>

struct student {
    char lastName[13];   /* 13 bytes */    
    int studentId;       /* 4 bytes  */
    short grade;         /* 2 bytes  */

};
//student 구조체를 선언한다. student의 구조체의 크기는 19byte다.
int main()
{
    struct student pst; //typedef를 쓰지 않았기 때문에 struct를 적어줘야한다.

    printf("[----- [이성규] [2019038090] -----]\n");
    printf("size of student = %ld\n", sizeof(struct student)); 
    /* student의 크기를 출력한다.  원래 19byte밖에 안되지만 padding을 하기 때문에 lastName에 3byte grade에 2byte padding이 되었다.
    단 compiler마다 padding 처리가 다르다.*/
    printf("size of int = %ld\n", sizeof(int));
 // student Id의 크기를 출력한다.
    printf("size of short = %ld\n", sizeof(short)); 
//grade의 크기를 출력한다.

    return 0;
}
