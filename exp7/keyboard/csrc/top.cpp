#include <verilated.h>
#include <nvboard.h>
#include "verilated_vcd_c.h"
#include "Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;
static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("shift_registerdump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

static void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}


int main(int argc, char** argv) {
	sim_init();

	nvboard_bind_all_pins(&dut);
	nvboard_init();

	while (1)
	{
		dut.clrn = 1;
		single_cycle();
		nvboard_update();
	}
	nvboard_quit();
	
	sim_exit();
}