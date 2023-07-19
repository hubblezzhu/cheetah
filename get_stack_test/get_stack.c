#include <linux/ptrace.h>
#include <uapi/linux/ptrace.h>

SEC("kprobe/do_sys_open")
int kprobe__do_sys_open(struct pt_regs *ctx) {
    u32 stackid = bpf_get_stackid(ctx, &map, 0);
    bpf_printk("Stack ID: %d\n", stackid);

    u64 ip[5] = {};
    bpf_probe_read(ip, sizeof(ip), (void *)stackid);

    bpf_printk("Stack:\n");
    for (int i = 0; i < 5; i++) {
       bpf_printk("%x\n", ip[i]);
    }

    return 0;
}
