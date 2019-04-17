#include "pch.h"

using namespace std;


Television::Television()
{
	this->volume = 0;
	this->tv_status = OFF;
	this->channel = 0;
}

void Television::turn_on()
{
	if (this->tv_status == OFF)
	{
		this->tv_status = ON;
		cout << "TV turns ON" << endl;

	}

}

void Television::show_tv_status()
{
	if (this->tv_status == ON)
		cout << "TV is on" << endl;
	else
		cout << "TV is off" << endl;
}

void Television::turn_off()
{
	if (this->tv_status == ON)
	{
		this->tv_status = OFF;
		cout << "TV turns OFF" << endl;
	}
}

void Television::show_channel()
{
	if(this->tv_status == ON)
		cout << "Channel " << this->channel << endl;
	else
		cout << "TV is off!" << endl;
}

void Television::show_volume()
{
	if (this->tv_status == ON)
	{
		if(this->tv_status == ON)
			cout << "Volumn = " << this->volume << endl;
	}
	else
		cout << "TV is off!" << endl;
}

void Television::volume_up()
{
	if (this->tv_status == ON)
	{
		if (this->volume <= 5)
			this->volume++;
	}
	else
		cout << "TV is off!" << endl;
}

void Television::volume_down()
{
	if (this->tv_status == ON)
	{
		if (this->volume > 0)
			this->volume--;
	}
	else
		cout << "TV is off!" << endl;
}

void Television::channel_up()
{
	if (this->tv_status == ON)
	{
		if (this->channel < 9)
			this->channel++;
		else
			this->channel = 0;
	}
	else
		cout << "TV is off!" << endl;
}
void Television::channel_down()
{
	if (this->tv_status == ON)
	{
		if (this->channel > 0)
			channel--;
		else
			this->channel = 9;
	}
	else
		cout << "TV is off!" << endl;
}


void Television::self_test()
{
	this->turn_on();
	this->show_tv_status();
	this->show_channel();
	this->show_volume();

	this->channel_up();
	this->show_channel();
	this->channel_up();
	this->show_channel();
	this->channel_down();
	this->show_channel();

	this->volume_up();
	this->show_volume();
	this->volume_up();
	this->show_volume();
	this->volume_down();
	this->show_volume();

	this->turn_off();
	this->show_tv_status();

	this->show_channel();
	this->show_volume();
	this->volume_up();
	this->volume_down();
	this->channel_up();
	this->channel_down();

}


Television::~Television()
{
	cout << "TV destroyed!" << endl;
}






