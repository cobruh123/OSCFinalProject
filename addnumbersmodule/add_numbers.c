#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENCE("GPL");
MODULE_AUTHOR("Adilzhan");
MODULE_DESCRIPTION("A simple module to add two numbers");

static int fnum = 5;
static int snum = 7;

static int __init add_numbers_init(void)
{
	int result = fnum + snum;
	printk(KERN_INFO "Addition of %d and %d is $d\n", fnum, snum, result);
	return 0;
}

static void __exit add_numbers_exit(void)
{
	printk(KERN_INFO "Exiting module\n");
}

module_init(add_numbers_init);
module_exit(add_numbers_exit);
