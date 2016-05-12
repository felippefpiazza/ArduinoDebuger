#include <Arduino.h>
#include <Debugger.h>

//Level 0 - No debug
//Level 1 - Error
//Level 2 - Warnings
//Level 3 - All


Debugger::Debugger(){
	Debugger(0);
}

Debugger::Debugger(int level){
	setLevel(level);
}

void Debugger::setLevel(int level){
	_Level = level;
}

void Debugger::debug(int level, char where[], int what) {
	debug(level,where,int2char(what));
}

void Debugger::debug(int level, char where[], char what[]) {
	if(level < _Level){
		Serial.print(" ");
		Serial.print(where);
		Serial.print(" : ");
		Serial.println(what);
	}
}

char* Debugger::int2char(int i) {
	char tmp[1000] = {0};
	sprintf(tmp, "%d", i);
	return tmp;
}

