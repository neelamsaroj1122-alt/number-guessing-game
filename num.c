#include<stdio.h>
int main()
{
    int secret=25;
int guess;
int attempt=0;
printf("guess the number between 1 to 50 :");
    scanf("%d",&guess);
    while(guess!=secret )
    {
        if(guess>secret)
        {
            printf("too high try again.\n");
        }
        else
        {
            printf("too low try again.\n");
        }
        printf("guess the the number between 1 to 50:");
        scanf("%d",&guess);
        attempt++;
    }
    attempt++;
printf("congratulation you guess the correct number\n");
printf("total attempt=%d\n",attempt);
return 0;
}