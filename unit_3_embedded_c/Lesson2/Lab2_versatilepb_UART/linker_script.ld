ENTRY(reset)


MEMORY
{
	MY_MEM (rwx) : ORIGIN = 0x00000000, LENGTH = 64M

}


SECTIONS
{

	. = 0x10000;


	.startup . :
	{
		startup.o(.text)
	}> MY_MEM

		
	.text :
	{
		*(.text) 
	}> MY_MEM
	
	
	.rodata :
	{
		*(.rodata)
	}> MY_MEM
	
	.data :
	{
		*(.data)
	}> MY_MEM


	.bss : 
	{
		*(.bss) *(.comment)
	}> MY_MEM

	.ARM :
	{
		*(.ARM.attributes)
	}

	.debug :
	{
		*(.debug_info) *(.debug_abbrev) *(.debug_loc) *(.debug_aranges) *(.debug_line) *(.debug_str) *(.debug_frame)     
	}> MY_MEM





	
	. = . + 0x1000; 
	stack_top = . ; 

}