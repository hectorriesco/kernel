#include <linux/kernel.h>	
#include <linux/module.h>	
 
int init_module(void)
{
	printk(KERN_DEBUG "Hello World\n");
	return 0;
}
 
void cleanup_module(void)
{
	printk(KERN_INFO "By World\n");
}
