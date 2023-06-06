#include "em_common.h"
#include "app_assert.h"
#include "sl_bluetooth.h"
#include "app.h"
#include "app_log.h"
#include "temperature.h"
#include "sl_sensor_rht.h"

int32_t read_temp(){
  int32_t t=0;
  uint32_t rh=0;
sl_sensor_rht_get(&rh, &t);

  return t/10;
}
