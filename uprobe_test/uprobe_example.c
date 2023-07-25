
#include <stdint.h>
#include <string.h>

#include <linux/stddef.h>
#include <linux/bpf.h>
#include <linux/ptrace.h>

#include <bpf/bpf_helpers.h>
#include "mylib.h"

SEC("uprobe/mylib:myfunc") // 注册uprobe
int handler(struct pt_regs *ctx) {

  // 访问函数参数
  //struct my_struct *arg1 = (struct my_struct *)PT_REGS_PARM1(ctx);

  // 打印追踪信息
  bpf_printk("mylib:myfunc called\n");

  return 0;
}


char _license[] SEC("license") = "GPL";
