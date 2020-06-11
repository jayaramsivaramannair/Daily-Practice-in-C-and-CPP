/*
Here is an ecological simulation of wolf and rabbit populations. Rabbits eat grass. Wolves
eat rabbits. There is plenty of grass, so wolves are the only obstacle to the rabbit 
population increase. The wolf population increases with the population of rabbits. 
The day-by-day changes in the rabbit population R and the wolf population W can be expressed
by the following formulae:

R(tomorrow) = (1 + a).R(today) - c.R(today).W(today)
W(tomorrow) = (1 - b).W(today) + c.d.R(today).W(today)

a = 0.01 = fractional increase in rabbit population without threat from wolves
(0.01 means 1% increase)

b = 0.005 = fractional decrease in wolf population without rabbit to eat

c = 0.00001 = likelihood that a wolf will encounter and eat a rabbit.

d = 0.01 = fractional increase in wolf population attributed to a devoured rabbit.

Assume that initially there are 10,000 rabbits and 1000 wolves. Write a program to 
calculate populations of rabbits and wolves over a 1000-day period. Have the 
program print the populations every 25 days. See what happens when you start with 
500 wolves instead of 1000. Try starting with 2000 wolves too. 

Problem Source: 101 C Programming Challenges - Challenge 20
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int rabbits_today = 0, wolves_today = 0, rabbits_morrow, wolves_morrow;
    int days = 1;

    float a = 0.01; // Increase in rabbits without threat from wolves
    float b = 0.005; // Increase in Wolves without a rabbit to eat
    float c = 0.00001; // Likelihood of encounter between a wolf and a rabbit
    float d = 0.01; // Increase in Wolf Population due to a eaten rabbit

    printf("Enter initial rabbit and wolf population:\n");
    scanf("%d %d", &rabbits_today, &wolves_today);

    if (rabbits_today < 0 || wolves_today < 0)
    {
        printf("Initial population has to be non-negative.\n");
    } else {
        while (days <= 1000)
        {
            rabbits_morrow = (1 + a) * rabbits_today - c * rabbits_today * wolves_today;
            wolves_morrow = (1 - b) * wolves_today + c * d * rabbits_today * wolves_today; 

            if (days % 25 == 0)
            {
                printf("After %d days, No of Rabbits = %d No of Wolves = %d\n", days, rabbits_morrow, 
                wolves_morrow);
            }

            rabbits_today = rabbits_morrow;
            wolves_today = wolves_morrow;
            days += 1;

        }   
    }
    
    return 0;
}