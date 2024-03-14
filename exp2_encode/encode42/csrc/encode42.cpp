#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vencode42.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vencode42* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vencode42;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("encode42dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(int argc, char** argv) {
	sim_init();

	// top->en = 0'b0; top->x = 0'b0000
	// 				top->x = 0'b0001; top->x = 0'b0011; top->x = 0'b0111; top->x = 0'b1111;
	// 				top->x = 
	int i;
	top->en = 0b0;
	for(i = 0; i < 16; i = i+1) {
		top->x = i;
		step_and_dump_wave();
	}
	top->en = 0b1;
	for(i = 0; i < 16; i = i+1) {
		top->x = i;
		step_and_dump_wave();
	}

	sim_exit();
}