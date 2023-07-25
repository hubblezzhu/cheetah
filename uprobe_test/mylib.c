
#include <stdio.h>
#include "mylib.h"

void myfunc(struct my_struct *data) {
  printf("myfunc called, id:%d\n", data->id);
}

int main() {
    struct my_struct data;
    data.id = 123;

    myfunc(&data);
    return 0;
}
