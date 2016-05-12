#ifndef Debugger_h
#define Debugger_h

#include "Arduino.h"

class Debugger
{
  public:
    Debugger();
  	Debugger(int level);
  	void debug(int level, char where[], char what[]);
    void debug(int level, char where[], int what);
    void setLevel(int level);

  private:
  int _Level;
  char* int2char(int i);
  
};

#endif