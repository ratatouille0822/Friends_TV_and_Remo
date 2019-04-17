#include "pch.h"

int main()
{
	Television tv_demo;
	tv_demo.self_test();

	Remo remo;
	remo.remo_set_channel(tv_demo,5);
	tv_demo.show_channel();
}

