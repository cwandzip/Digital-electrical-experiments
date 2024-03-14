#include <verilated.h>
#include <nvboard.h>
#include "verilated_vcd_c.h"
#include "Vmux241.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux241* top;
static TOP_NAME dut;

void nvboard_bind_all_pins(Vmux241* top);

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux241;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("mux241dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(int argc, char** argv) {
	sim_init();

	nvboard_bind_all_pins(&dut);
	nvboard_init();

	while (1)
	{
		dut.eval();
		nvboard_update();
	}
	
	nvboard_quit();
	sim_exit();
}