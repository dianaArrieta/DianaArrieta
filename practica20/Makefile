obj-m := llamado.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
clean:
	rm -rf *.o *.ko *.symvers *.mod.* *.order
keylogger:keylogger.c
	gcc -Wall -g keylogger.c -o keylogger
