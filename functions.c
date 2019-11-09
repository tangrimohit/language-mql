#include "stdio.h"

int add( int x, int y){
        return x+y;
}

int main(int argc, char const *argv[]) {
        int a;
        int b;
        int option;
        while(option != 0) {
                printf("\nPlease choose an option:\n 1. Add 2. Exit\n");
                scanf("%d",&option);
                switch (option) {
                case 1: printf("Please enter the value of A and B :");
                        scanf("%d %d",&a,&b);
                        printf("%d + %d = %d \n",a,b,add(a,b));
                        break;
                case 2: option = 0;
                        printf("\nThanks for using the calculator");
                        break;
                default: printf("Please enter a valid option");
                }
        }
        return 0;
}
