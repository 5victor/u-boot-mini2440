#include <common.h>
#include <nand.h>

void board_init_f(ulong dummy)
{

}

void board_init_r(gd_t *id, ulong dest_addr)
{
	nand_init();
	nand_boot();
}

void hang(void)
{
	for(;;)
		;
}
