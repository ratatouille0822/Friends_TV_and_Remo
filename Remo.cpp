#include "pch.h"

using namespace std;

Remo::Remo()
{
}

void Remo::remo_set_channel(Television& tv, int channel)
{
	cout << "Here is in friend remo_set_channel" << endl;
	tv.turn_on();
	tv.channel = channel;
	tv.show_channel();
	cout << "Go out of remo_set_channel" << endl;
}


Remo::~Remo()
{
}
