#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int a, b;
module_param(a, int, 0644);
MODULE_PARM_DESC(a, "data of a");
module_param(b, int, 0644);

static int __init lk_exnum(void) {
    printk("Linux kernel param max number module is starting here！\n");
	printk("a = %d, b = %d\n", a, b);
    printk("max=%d\n", max(a,b));
	return 0;
}
static void __exit lk_exit(void)
{
	printk("Linux kernel param max number moudle has exited!\n");
}

module_init(lk_exnum); 
module_exit(lk_exit); 
MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("wuzhengda"); 
MODULE_DESCRIPTION("Linux kernel param max number"); 