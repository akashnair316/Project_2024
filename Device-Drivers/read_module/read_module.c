#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/uaccess.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Akash Nair");
MODULE_DESCRIPTION("Read the number of times this driver was called for reading kernel space buffer data into user space");


static ssize_t read_data(struct file *file, char __user *buff, size_t bytes, loff_t *offset)
{
	char k_buffer[] = "Request recieved\n";
	printk("read_data : INIT");
	int result;


	*offset += strlen(k_buffer);
	
	if(*offset > strlen(k_buffer)) {
		return 0;
	}

	result = copy_to_user(buff, k_buffer, strlen(k_buffer));
	return *offset;
}

static const struct proc_ops my_proc_ops = {
	.proc_read = read_data
};

static struct proc_dir_entry *proc_create_ptr;

static int __init read_init(void) {
	printk(KERN_INFO "read_init : Start\n");

	proc_create_ptr = proc_create("read_module", 0, NULL, &my_proc_ops);
	if(!proc_create_ptr) {
		printk("Failed proc create \r\n");
		return -1;
	}


	return 0;
}

static void __exit read_exit(void) {
	printk(KERN_INFO "read_exit module");
	proc_remove(proc_create_ptr);
}

module_init(read_init);
module_exit(read_exit);
