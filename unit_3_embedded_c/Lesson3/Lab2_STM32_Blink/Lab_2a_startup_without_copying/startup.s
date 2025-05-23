.section .vectors
    .word 0x20001000  /* stack top address */
    .word _reset      /* 1 Reset */
    .word Vector_handler /* 2 NMI */
    .word Vector_handler /* 3 Hard Fault */
    .word Vector_handler /* 4 MM Fault */
    .word Vector_handler /* 5 Bus Fault */
    .word Vector_handler /* 6 Usage Fault */
    .word Vector_handler /* 7 RESERVED */
    .word Vector_handler /* 8 RESERVED */
    .word Vector_handler /* 9 RESERVED */
    .word Vector_handler /* 10 RESERVED */
    .word Vector_handler /* 11 SV Call */
    .word Vector_handler /* 12 Debug reserved */
    .word Vector_handler /* 13 RESERVED */
    .word Vector_handler /* 14 RESERVED */
    .word Vector_handler /* 15 SysTick */
    .word Vector_handler /* 16 IRQ0 */
    .word Vector_handler /* 17 IRQ1 */
    .word Vector_handler /* 18 IRQ2 */
    .word Vector_handler /* 19 ... */
    /* On to IRQ67 */

.section .text
_reset:
    bl main
    b .  /* Infinite loop */

.thumb_func
Vector_handler:
    b _reset