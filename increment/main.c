/* Example 2.2: The current year and the year in which the
employee joined the organization are entered through the
keyboard. If the number of years for which the employee has
served the organization is greater than 3 then a bonus of Rs. 2500/-
is given to the employee. If the years of service are not greater
than 3, then the program should do nothing.
Author Majid Mujahid Hussain Dated 10 December 2020. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Current_year, year_of_joining,number_of_years ;
    printf("Hello world!\n");
    printf("Please enter the Current year :\n");
    scanf("%d",&Current_year);
    printf("Please enter the year of joining:\n");
    scanf("%d",&year_of_joining);

    //calculating the number of years
    number_of_years = Current_year - year_of_joining;
    printf("The number of years the employee has served the company is equal to %d \n",number_of_years);

    //checking if the employee is eligible for the bonus.
    if(number_of_years > 3)
    {
        printf("The employee is eligible for bonus of Rs 2500");
    }

    return 0;
}
