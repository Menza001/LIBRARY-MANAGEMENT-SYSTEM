/*COUNTY LIBRARY MANAGEMENT SYSTEM
BY MAUREEN MENZA
FEBRUARY 2022
MIT License
C89 Complier
*/
#include <stdio.h>
#include <stdlib.h>


int menu()
{
    int action;
    printf("select an action below\n");
    printf("1.Add new patron\n");
    printf("2.view all patrons\n");
    printf("3.view all books\n");
    printf("4.Add new books\n");
    printf("your action\n");
    scanf("%d",action);
    return action;
}
int main()
{
    printf("county library management system\n");
    printf(" welcome madam maureen");
    printf("you selected an action%d" ,menu());


    return 0;
}
