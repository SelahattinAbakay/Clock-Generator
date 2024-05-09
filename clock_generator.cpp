#include "clock_generator.h"

#define CLOCK_FREQUENCY_DIVIDER  20

typedef enum{passive, active} clock_state_type;

void clock_generator(bool &out_clock) {
#pragma HLS INTERFACE ap_none port = out_clock
#pragma HLS INTERFACE ap_ctrl_none port = return



	static clock_state_type state = passive;
	static unsigned int     counter = CLOCK_FREQUENCY_DIVIDER /2-1;

	clock_state_type next_state;
	unsigned int     next_counter;

	bool clock_signal_reg;

	switch(state) {
	case passive:
		if (counter == 0) {
			next_counter       = CLOCK_FREQUENCY_DIVIDER /2-1;
			next_state         = active;
		} else {
			next_counter       = counter-1;
			next_state         = passive;
		}
		clock_signal_reg = 0;
		break;
	case active:
		if (counter == 0) {
			next_counter       = CLOCK_FREQUENCY_DIVIDER /2-1;
			next_state         = passive;
		} else {
			next_counter       = counter-1;
			next_state         = active;
		}
		clock_signal_reg = 1;
		break;
	default:
		break;
	}

	state = next_state;
	counter = next_counter;
	out_clock = clock_signal_reg;

}

