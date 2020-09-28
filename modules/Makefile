obj-m += simple_module.o
obj-m += simple_args.o

all: 
	make -C /home/cs469/linux-5.8 M=$(PWD) modules

clean:
	make -C /home/cs469/linux-5.8 M=$(PWD) clean
