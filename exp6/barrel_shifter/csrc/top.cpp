#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

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
  tfp->open("topdump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(int argc, char** argv) {
	sim_init();
	printf("sim start\n");

	for (top->din = 0b00000000; top->din <= 0b11111111; top->din = top->din + 0b101) {
		top->LorR = 0;
		top->AorL = 0;
		top->shamt = 0b000; step_and_dump_wave();
		top->shamt = 0b001; step_and_dump_wave();
		top->shamt = 0b010; step_and_dump_wave();
		top->shamt = 0b011; step_and_dump_wave();
		top->shamt = 0b100; step_and_dump_wave();
		top->shamt = 0b101; step_and_dump_wave();
		top->shamt = 0b110; step_and_dump_wave();
		top->shamt = 0b111; step_and_dump_wave();

		top->LorR = 1;
		top->AorL = 0;
		top->shamt = 0b000; step_and_dump_wave();
		top->shamt = 0b001; step_and_dump_wave();
		top->shamt = 0b010; step_and_dump_wave();
		top->shamt = 0b011; step_and_dump_wave();
		top->shamt = 0b100; step_and_dump_wave();
		top->shamt = 0b101; step_and_dump_wave();
		top->shamt = 0b110; step_and_dump_wave();
		top->shamt = 0b111; step_and_dump_wave();

		top->LorR = 0;
		top->AorL = 1;
		top->shamt = 0b000; step_and_dump_wave();
		top->shamt = 0b001; step_and_dump_wave();
		top->shamt = 0b010; step_and_dump_wave();
		top->shamt = 0b011; step_and_dump_wave();
		top->shamt = 0b100; step_and_dump_wave();
		top->shamt = 0b101; step_and_dump_wave();
		top->shamt = 0b110; step_and_dump_wave();
		top->shamt = 0b111; step_and_dump_wave();

		top->LorR = 1;
		top->AorL = 1;
		top->shamt = 0b000; step_and_dump_wave();
		top->shamt = 0b001; step_and_dump_wave();
		top->shamt = 0b010; step_and_dump_wave();
		top->shamt = 0b011; step_and_dump_wave();
		top->shamt = 0b100; step_and_dump_wave();
		top->shamt = 0b101; step_and_dump_wave();
		top->shamt = 0b110; step_and_dump_wave();
		top->shamt = 0b111; step_and_dump_wave();
	}

	printf("sim finish\n");
	sim_exit();
}