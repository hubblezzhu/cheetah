#include <uapi/linux/ptrace.h>

SEC("uprobe/mylib:myfunc") // 注册uprobe
int handler(struct pt_regs *ctx) {

  // 访问函数参数
  struct my_struct *arg1 = (struct my_struct *)PT_REGS_PARM1(ctx);

  // 打印追踪信息
  bpf_printk("mylib:myfunc called, arg1:%d\n", arg1->id);

  return 0;
}
