#include "leon.h"
#include "test.h"

leon_test()
{
	
//	report(RAM_INIT);
//	ramfill();
//	ramtest();
//	dsu_ram_test();

	report(SYS_TEST);

	report(REG_TEST);
	if (regtest() != 1) fail(1);
	mmu_test(); 
	multest(); 
	divtest(); 
	wp_test();
	fpu_test();
//	memtest();
//	edac_test();
//	cache_test();
	irq_test();
	uart_test();
	timer_test();
	ioport_test();
	report(TEST_END);
}
