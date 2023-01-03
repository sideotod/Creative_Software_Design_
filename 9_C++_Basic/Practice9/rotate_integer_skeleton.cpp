#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc) {
    // TODO
    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
}

void rotateRight(int* pa, int* pb, int* pc) {
    // TODO
    int temp = *pc;
    *pc = *pb;
    *pb = *pa;
    *pa = temp;
}

int main(void) {
    // TODO
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    int num;
    printf("%d:%d:%d\n", a, b, c);
    while (true){
        scanf("%d", &num);
        if (num==1){
            rotateLeft(&a, &b, &c);
            printf("%d:%d:%d\n", a, b, c);
        }
        else if (num==2){
            rotateRight(&a, &b, &c);
            printf("%d:%d:%d\n", a, b, c);
        }
        else if (num==3){
            break;
        }
        else{
            printf("Error:Wronginput");
            break;
        }
    }
    return 0;
}