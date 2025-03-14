CC=arm-none-eabi-

CFLAGS=-mcpu=arm926ej-s -g

INCS=-I .

LIBS=

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

As = $(wildcard *.s)

AsOBJ = $(As:.s=.o)

all: learn-in-depth.bin

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@ 2> log

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

learn-in-depth.elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	del /Q *.o *~  	# Instead of rm-rf (which didn't work for windows)
	
clean_all:			# Added this myself :D 
	del /Q *.o *~ *.elf *.bin