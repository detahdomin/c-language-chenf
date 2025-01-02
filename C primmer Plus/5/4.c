#include<stdio.h>
int main(void)
{
    char A = 65;
    for(int index = 1;index < 7;index++)
    {
        for(int index_two = 0;index_two<index;index_two++)
        {
            printf("%c",A);
            A += 1;
        }
    printf("\n");
    }

    
    return 0;
}
/*#include<stdio.h>
int main(void)
{
    char A = 'A';
    for(int index = 1; index <= 6; index++)
    {
        for(int index_two = 0; index_two < index; index_two++)
        {
            printf("%c", A++);
        }
        printf("\n");
    }
    return 0;

}
*/

