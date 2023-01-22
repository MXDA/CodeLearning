#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init lk_exnum(void) {
    int x = 1, y = 1;
    printk("The module is starting here!\n");
    printk("x = %d, y= %d", x, y);
    printk("max=%d\n", max(x++, y++));
    printk("x = %d, y = %d\n", x, y);
    printk("min=%d\n", min(x++, y++));
    return 0;
}

static void __exit lk_exit(void) {
    printk("The maxnum moudle has exited!\n");
}

module_init(lk_exnum);
module_exit(lk_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("wuzhengda");
MODULE_DESCRIPTION("max and min number"); 