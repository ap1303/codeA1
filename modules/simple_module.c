#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("Peizhi Zhang");
MODULE_LICENSE("GPL"); 

int entry(void){
    printk(KERN_INFO "Hello, can you hear me?\n");
    /* Hello by Adele */
    return 0;
}

void myexit(void){
    printk(KERN_INFO "Bye Bye Miss American Pie");
    /* American pie by Don Mclean*/
}

module_init(entry);
module_exit(myexit);
