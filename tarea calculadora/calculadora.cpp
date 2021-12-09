#include <stdio.h>

int main()
{
    int firtsNumber;
    int secondNumber;
    
    printf("ingrese el valor 1:\n");
    scanf ("%d",&firtsNumber);
    printf ("ingrese le segundo valor :\n");
    scanf ("%d",&secondNumber);
   int result =firtsNumber + secondNumber;
   int result1 =firtsNumber-secondNumber;
   int result2= firtsNumber*secondNumber;
   int result3 = firtsNumber/secondNumber;
    printf ("el resultado de la suma es:%d \n",result);
    printf("el resultado de la resta es : %d \n",result1);
    printf("el resultado de la multiplicacion es:%d \n",result2);
     printf("el resultado de la division es:%d \n",result3);
    

    return 0;
}
