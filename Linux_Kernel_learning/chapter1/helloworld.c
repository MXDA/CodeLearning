#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init lkp_init(void) {
    printk("<1> Hello World\n");
    return 0;
} 

static void __exit lkp_cleanup(void) {
    printk("<1> GoodBye\n");
}

module_init(lkp_init);
module_exit(lkp_cleanup);
MODULE_LICENSE("GPL");