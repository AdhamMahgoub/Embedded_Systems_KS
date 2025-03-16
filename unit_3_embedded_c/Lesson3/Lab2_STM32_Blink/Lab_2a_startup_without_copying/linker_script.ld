MEMORY
{
    flash(RX)  : ORIGIN = 0x08000000, LENGTH = 128K
    sram(RWX)  : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
    .text :
    {
        *(.vectors*)
        *(.text*)
    } > flash

    .bss :
    {
        *(.bss*)
    } > sram
	
    .data :
    {
        *(.data*)
    } > flash 			/* Keeping .data in flash for now -- because I haven't created the copying to RAM in startup.s yet */
}
