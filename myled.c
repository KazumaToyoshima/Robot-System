#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/io.h>

static int __init init_mod(void)
{
	return 0;
}

static void __exit cleanup_mod(void)
{
}

module_init(init_mod);
module_exit(cleanup_mod);
