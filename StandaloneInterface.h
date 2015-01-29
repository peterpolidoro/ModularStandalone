// ----------------------------------------------------------------------------
// StandaloneInterface.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef STANDALONE_INTERFACE_H
#define STANDALONE_INTERFACE_H
#include "utility/Server.h"


class StandaloneInterface
{
public:
  StandaloneInterface(HardwareSerial &display_serial,
                      const int enc_a_pin,
                      const int enc_b_pin,
                      const int enc_btn_pin,
                      const int enc_btn_int,
                      const int btn_pin,
                      const int btn_int,
                      const int update_period);
  void update();
  void enable();
  void disable();
  InteractiveVariable& createInteractiveVariable();
private:
  Server server_;
};
#endif
