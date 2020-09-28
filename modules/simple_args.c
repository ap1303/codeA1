#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("Peizhi Zhang");
MODULE_LICENSE("GPL"); 

static int flag = 0;
static char *anotherString = "";

module_param(flag, int, 0660);
MODULE_PARM_DESC(flag, "the boolean flag");
module_param(anotherString, charp, 0660);
MODULE_PARM_DESC(anotherString, "The alternative string");

int entry(void){
    printk(KERN_INFO "%s\n", anotherString);
    if(flag != 0) {
       printk(KERN_INFO "Hello, can you hear me?\n");
    }
    /* Hello by Adele */
    return 0;
}

void myexit(void){
    printk(KERN_INFO "Bye Bye Miss American Pie");
    /* American pie by Don Mclean*/
}

module_init(entry);
module_exit(myexit);
