#include "board.h"

void wait_sec(int N) {
  (DEVICE_GPIO)->value += 256;
  uint32_t stop = (DEVICE_AIC0)->rtc_sec_lo + N;
  while(stop > (DEVICE_AIC0)->rtc_sec_lo){};
  (DEVICE_GPIO)->value -= 256;
};
