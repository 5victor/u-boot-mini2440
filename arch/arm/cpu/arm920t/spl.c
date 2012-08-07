#include <common.h>
#include <nand.h>

static gd_t gdata __attribute__ ((section("data")));

void board_init_f(ulong dummy)
{
	relocate_code(CONFIG_SPL_STACK, &gdata, CONFIG_SPL_TEXT_BASE);
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
