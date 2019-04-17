#pragma once
#include "pch.h"

using namespace std;

class Television
{
	friend class Remo;
//	friend void Remo::remo_set_channel(Television& tv, int channel);
public:
	Television();


	void turn_on();
	void turn_off();


	void show_tv_status();
	void show_channel();
	void show_volume();

	void volume_up();
	void volume_down();

	void channel_up();
	void channel_down();

	void self_test();

	~Television();
private:
	enum status 
	{
		OFF, ON
	}tv_status;
	int channel;
	int volume;
};

