#include <linux/kernel.h>  
#include <linux/init.h>             
#include <linux/module.h>          
 
MODULE_LICENSE("GPL");
 
static int __init simple_init(void){
   printk(KERN_INFO "Hello from kernel\n");
   return 0;
}

static void __exit simple_exit(void){
   printk(KERN_INFO "See you soon!\n");
}
 
module_init(simple_init);
module_exit(simple_exit);
