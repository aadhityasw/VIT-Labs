#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/kthread.h>
#include<linux/sched.h>
#include<linux/init.h>

MODULE_AUTHOR("Aadhitya Swarnesh - ");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A kernel program for multiplication of two numbers and to get info on its execution.");

static void end(void);

static int __init start(void)
{
    printk(KERN_INFO "Loading Multiplication Custom kernel module...\n");
    printk(KERN_INFO "The starting memory location of the module is :  %p\n", (void*)start);
    int a, b, c;
    a = 10;
    b = 20;
    printk(KERN_INFO "The first number is  : %d\n", a);
    printk(KERN_INFO "The second number is  : %d\n", b);
    c = a * b;
    printk(KERN_INFO "The resultant number is  : %d\n", c);
    int pid = task_pid_nr(current);
    printk(KERN_INFO "The pid is :  %d\n", pid);
    printk(KERN_INFO "The ending memory location of the module is :  %p\n", (void*)end);
    return 0;
}

static void __exit end(void)
{
    printk(KERN_INFO "End of module. Bye!!!\n");
}

module_init(start);
module_exit(end);
