#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int check_value();

int main(){
    srand(time(0));
    check_value();

}

int check_value(){
    int secrate_number = (rand() % (20 - 1 + 1))+1;
    int val , attempts;
    attempts = 1;

    while (1)
    {
        printf("Enter your number between 1 & 20 : ");
        scanf("%i", &val);
        if(val<20 && val >= 1){
            if(val < secrate_number){
                printf("Your guess is less than actual value\n");
                attempts++;
                continue;
            }
            else if (val > secrate_number){
                printf("Your guess is greate than actual value\n");
                attempts++;
                continue;
            }
            else{
                printf("yeee you have wone the game\n");
                break;
            }
        }
        else{
            printf("value out of range\n");
            continue;
        }
    }
    printf("attempts : %d" , attempts);
    return 0;
}
