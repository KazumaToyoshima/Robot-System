#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/io.h>

MODULE_AUTHOR("Ryuichi Ueda");
MODULE_DESCRIPTION("driver for LED control");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.0.1");

static dev_t dev;
static struct cdev cdv;

static ssize_t led_write(struct file* flip, const char* buf, size_t count, loff_t* pos)
{
	printk(KERN_INFO "led_write is called\n");
	return 1;
}

static struct file_operations led_fops = {
	.owner = THIS_MODULE,
	.write = led_write
};

static int __init init_mod(void)
{
	int retval;
	retval = alloc_chrdev_region(&dev, 0, 1, "myled");
	if(retval < 0){
		
		printk(KERN_ERR "alloc_chrdev_region failed.\n");
		return retval;
	}	
		printk(KERN_INFO "%s is loaded. major:%d\n",__FILE__,MAJOR(dev));
		return 0;
}

static void __exit cleanup_mod(void)
{
	unregister_chrdev_region(dev, 1);
	printk(KERN_INFO "%s is loaded. major:%d\n",__FILE__,MAJOR(dev));
}

module_init(init_mod);
module_exit(cleanup_mod);
