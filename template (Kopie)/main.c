#include "board.h"

void _start(void) {
(DEVICE_GPIO)->value = 1;
}

void start(void) {
(DEVICE_GPIO)->value = 2;
}
