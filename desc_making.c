#include "stdio.h"
int main(int argc, char const *argv[]) {
        int grade = 10;
        scanf("%d",&grade);
        if(grade%10==0) {
                printf("%d %d is an %d even number\n",grade,grade,grade);
        }
        else if(grade%3 == 0) {
                printf("%d is a multiple of three\n",grade);
        }
        else if(grade %5 == 0) {
                printf("%d is a multiple of five\n",grade);
        }
        else{
                if(grade%7 == 0) {
                        printf("%d is a multiple of seven\n",grade);
                }
                else{
                        printf("%d is not even number\n",grade);
                }
        }
        // nested if

        switch (4) {
        case 0: printf("%d is an even number\n",grade);
                break;
        case 1: printf("%d is an odd number\n",grade);
                break;
        case 'a': printf("There's A\n");
                break;
        default: printf("%d is not a valid number\n",grade);
                break;
        case 4: printf("4\n");
        }

        return 0;
}
