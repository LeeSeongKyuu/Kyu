#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int); 
float input[MAX_SIZE],answer;
int i;
void main(void)
{
    for(i=0; i< MAX_SIZE; i++)
       input[i] = i; 
//이때 input은 메모리상의 주소이다. 주소가 sum함수의 list에 복사된다.
 
    printf("[----- [이성규] [2019038090] -----]\n");
    /* for checking call by reference */
       printf("address of input = %p\n", input);  
// input의 주소를 출력한다.
       
      answer = sum(input, MAX_SIZE); 
//sum함수를 호출한다. 이때 input의 주소를 불러온다.
      printf("The sum is: %f\n", answer); //
}

float sum(float list[], int n) 
// call by reference에 의해 intput의 주소를 list가 받아서 input 배열을 list를 통해서 접근한다.
{
    
    printf("value of list = %p\n", list);     
//list의 값을 출력한다. 이때 값은 input의 주소를 담고있다
    printf("address of list = %p\n\n",&list); 
//이때 주소는 input의 주소를 담고있다, &list); // list의 주소를 출력한다. 
    

   int i;
   float tempsum = 0;
   for(i = 0; i <n; i++)
             tempsum += list[i];  //tempsum = tempsum+list[i]
        return tempsum;  //tempsum의 값을 리턴한다.
}

