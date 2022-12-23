#include <linux/kernel.h>  
#include <linux/init.h>             
#include <linux/module.h>          
 
MODULE_LICENSE("GPL");
 
static int __init first_init(void){
   printk(KERN_INFO "Hello from kernel\n");
   return 0;
}

static void __exit first_exit(void){
   printk(KERN_INFO "See you soon!\n");
}
 
module_init(simple_init);
module_exit(simple_exit);
