#include "stdio.h"
int main(int argc, char const *argv[]) {
        int q,grade = 10;
        scanf("%d",&grade);
        for (q = 0; q < grade; ++q) {
                printf("This is looped %d times\n",q);
        }
        printf("while\n");
        while (q>0) {
                printf("This is looped %d times\n",q);
                q--;

                // a++ => a = a+1
                // a-- => a = a-1        b = (a*a)--;
                // --a => a = a-1
        }
        printf("Do while\n");
        q=1;
        do {
                printf("This is looped %d times\n",q);
                q--;
        } while (q>0);
        return 0;
}
