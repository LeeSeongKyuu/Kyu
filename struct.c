#include <stdio.h>

struct student1 {  
        char lastName;
        int studentId;
        char grade;
};  
// 이름과 학번 성적이 있는 student1이라는 구조체를 선언한다.
typedef struct {
        char lastName;
        int studentId;
        char grade;
} student2;
// 이름과 학번 성적이 있는 student2이라는 구조체를 선언한다. typedef를 쓰면 나중에 구조체를 사용할 때 변수 이름만 적어도 된다.
int main()
{
    struct student1 st1 = {'A', 100, 'A'}; // 구조체에 값을 대입했다.

    printf("[----- [이성규] [2019038090] -----]\n");
    printf("st1.lastName = %c\n", st1.lastName); // st1.lastName에 저장된 값을 출력한다.
    printf("st1.studentId = %d\n", st1.studentId); // st1.studentId에 저장된 값을 출력한다.
    printf("st1.grade = %c\n", st1.grade); // st1.grade에 저장된 값을 출력한다.

    student2 st2 = {'B', 200, 'B'}; //구조체에 값을 대입한다.
 
    printf("\nst2.lastName = %c\n", st2.lastName); 
//st2.lastName에 저장된 값을 출력한다.
    printf("st2.studentId = %d\n", st2.studentId); 
//st2.studentId에 저장된 값을 출력한다.
    printf("st2.grade = %c\n", st2.grade); 
//st2.grade에 저장된 값을 출력한다.

    student2 st3; // student2 에 st3를 선언했다.

    st3 = st2; // 구조치환을 해준다. st2의 값을 st3에 대입한다.

    printf("\nst3.lastName = %c\n", st3.lastName); 
//st3.lastName에 저장된 값을 출력한다.
    printf("st3.studentId = %d\n", st3.studentId); 
//st3.lastName에 저장된 값을 출력한다.
    printf("st3.grade = %c\n", st3.grade); 
//st3.lastName에 저장된 값을 출력한다.

    /* equality test*/
    /* 
    if(st3 == st2)
        printf("equal\n");
    else
        printf("not equal\n");
    */
/* 이렇게 하면 컴파일 오류가 난다. 
올바르게 구조체 값 검사를 하려면 각각의 값을 일일이 다 비교해줘야한다.*/
//st2.lastName에 저장된 값을 출력한다.   return 0;

}
