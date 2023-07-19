#include <stdio.h>

struct my_struct {
  int id;
  char name[64];
};

void myfunc(struct my_struct *data) {
  // 函数具体实现
  printf("myfunc called, id:%d\n", data->id);

  // ...
}

// 调用方


int main() {
    struct my_struct data;
    data.id = 123;

    myfunc(&data);
}
