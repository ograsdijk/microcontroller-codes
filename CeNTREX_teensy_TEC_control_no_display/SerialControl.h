#ifndef serialcontrol_h
#define serialcontrol_h
#include "Arduino.h"
#include "MTD415State.h"

class SerialControl{
  public:
    SerialControl(Stream *serial, MTD415State *mtd415_state);
    void printOptions();
    void handleSerial();

  private:
    MTD415State *_mtd415_state;
    Stream *_serial;
    String _response;
    void _sendArray(int * arr, int len);
    void _sendArray(String * arr, int len);
    void _handleQuery();
    void _handleWrite();
    void _stringToArray(String str, int * arr);
    float _farray[4];
    int _iarray[4];
    String _sarray[4];
  };

#endif
