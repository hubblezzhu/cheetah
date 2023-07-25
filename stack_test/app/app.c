#include <stdio.h>


int top(void) {
    for(;;) { }
}

int c2(void) {
    top();
}

int c1(void) {
    c2();
}

int c0(void) {
    c1();
}

int main(void) {
    c0();

    return 0;
}
