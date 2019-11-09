#include "stdio.h"

int main(int argc, char const *argv[]) {
        int prime,flag = 0,limit,itr1,itr2;

        scanf("%d",&limit);
        printf("Prime numbers are : 1 ");
        for(itr1=2; itr1<limit; itr1++) {
                flag = 0;
                for(itr2=2; itr2<((itr1/2)+1); itr2++) {
                        // if(itr2 %2 == 0) {
                        //         continue;
                        // }
                        else if(itr1 % itr2 == 0) {
                                flag = 1;
                        }
                }
                if(flag == 0) {
                        printf("%d ", itr1);
                }
        }


        return 0;
}
