#include <Flash.h>
#include <EEPROM.h>
#include <Streaming.h>
#include <ArduinoJson.h>
#include <JsonSanitizer.h>
#include <JsonStream.h>
#include <Array.h>
#include <Vector.h>
#include <MemoryFree.h>
#include <ConstantVariable.h>
#include <SavedVariable.h>
#include <ModularServer.h>
#include <BetterMap.h>
#include <NewhavenDisplay.h>
#include <Encoder.h>
#include <StandaloneInterface.h>

#include "Constants.h"
#include "Callbacks.h"
#include "Controller.h"


void setup()
{
  controller.setup();
}

void loop()
{
  controller.update();
}
