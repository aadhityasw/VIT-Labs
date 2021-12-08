#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/utsname.h>

static int __init my_init(void) {
    printk(KERN_INFO "Registration Number:aaaa\n");
    printl(KERN_INFO "Name: Aadhitya Swarnesh \n");
    printk(KERN_INFO "Kernel version %s\n", utsname()->version);
    printk(KERN_INFO "Kernel release %s\n", utsname()->release);
    return 0;
}

static void __exit my_exit(void) {
    printk(KERN_INFO "exit module");
    return;
}

module_init(my_init);
module_exit(my_exit);
MODULE_LICENSE("GPL");
