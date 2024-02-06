/*

This program is built for personality check.
Certain set of question will be asked to the user,
according to the answer provided the personality analysis will be shared.

*/

#include<stdio.h>
int main()
{
    int ans[4],n;
        do
        {
        printf("\nEnter the appropriate number as per given option\n\n");
        printf("A ritual that keeps you calm\n\n1. TALK TO FRIEND\t2. SPORTS\t3. WORK\n");
        scanf("%i",&ans[0]);
        printf("\nYour Greatest achievement\n\n1. HAVING GREAT FRIENDS\n2. ADVANCING YOUR CAREER\n3. TRAVELLING A LOT\n");
        scanf("%i",&ans[1]);
        printf("\nWho knows you the best?\n\n1. FRIEND\t2. FAMILY MEMBER\t3. NO ONE\n");
        scanf("%i",&ans[2]);
        printf("\nWhat is the word people would most likely describe you?\n\n1. SMART\t2. KIND\t3. QUIET\n");
        scanf("%i",&ans[3]);
        if(ans[0]==1)
        printf(":-D  You find solace and comfort in social connections.You priortize relationships.\n");
        else if (ans[0]==2)
        printf(":-D  You possibly enjoy teamwork.\n");
        else
        printf(":-D  You are diligent and find satisfaction in productivity.\n");
        if(ans[1]==1)
        printf(":O  You priortize mutual support.\n");
        else if(ans[1]==2)
        printf(":O  You are ambitious and value recognition.\n");
        else
        printf(":O  You value experienceand broad perspective of mind.\n");
        if(ans[2]==1)
        printf("(^^)  You are loyal and have a positive attitude.\n");
        else if(ans[2]==2)
        printf("(^^)  You are loyal and caring.\n");
        else
        printf("(^^)  You are a reserved personality and quite understanding.\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        printf("Enter 1 to continue and 0 to stop\n");
        scanf("%i",&n);
    }
    while(n);
    printf("\n~~~~~~~~~THANK YOU!!~~~~~~~~~~");
}
