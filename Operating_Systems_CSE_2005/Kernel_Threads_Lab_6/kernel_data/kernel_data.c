#include <linux/kthread.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/time.h>
#include <linux/timer.h>
#include <linux/param.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aadhiya Swarnesh");
MODULE_DESCRIPTION("Starting kthreads");

static struct task_struct *thread1;
int threadfn(void* data) {
    unsigned long j0, j1;
    int delay = 60*HZ;
    printk(KERN_INFO "in thread1");
    j0 = jiffies;
    j1 = j0 + delay;
    while(time_before(j0, j1)) {
        schedule();
    }
    return 0;
}

int thread_init(void) {
    const char message[8] = "thread1";
    printk(KERN_INFO "in init");
    thread1 = kthread_create(threadfn, NULL, message);
    if(thread1) {
        printk(KERN_INFO "in if statement");
        wake_up_process(thread1);
    }
    return 0;
}

void thread_cleanup(void) { 
    int ret;
    ret = kthread_stop(thread1);
    if(!ret) {
        printk(KERN_INFO "thread stopped");
    }
}

module_init(thread_init);
module_exit(thread_cleanup);
