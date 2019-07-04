// This file is generated by soc_gen and will be overwritten next time
// the tool is run. See soc_top/README for information on running soc_gen.

#ifndef BOARD_H
#define BOARD_H

typedef unsigned int uint32_t;
typedef int int32_t;

typedef unsigned short uint16_t;
typedef short int16_t;

typedef unsigned char uint8_t;
typedef char int8_t;

#define DRAM_BASE 0x10000000

// Memory mapped peripherals
#define DEVICE_AIC0_ADDR       0xabcd0200
#define DEVICE_CACHE_CTRL_ADDR 0xabcd00c0
#define DEVICE_FLASH_ADDR      0xabcd0040
#define DEVICE_GPIO_ADDR       0xabcd0000
#define DEVICE_UART0_ADDR      0xabcd0100

struct aic_regs {
  uint32_t ctrl0;
  uint32_t brkadd;
  uint32_t ilevels;
  uint32_t ctrl1;
  uint32_t pit_throttle;
  uint32_t pit_counter;
  uint32_t clock_period; // read-only
  uint32_t ignore0;
  uint32_t rtc_sec_hi;
  uint32_t rtc_sec_lo;
  uint32_t rtc_nsec;
};
#define DEVICE_AIC0 ((volatile struct aic_regs *) DEVICE_AIC0_ADDR)

struct cache_ctrl_regs {
  uint32_t ctrl0;
  uint32_t ctrl1;
  uint32_t ignore0[10];
  uint32_t temp_cpu0_instr_addr;
  uint32_t temp_cpu1_instr_addr;
  uint32_t ignore1;
  uint32_t sel_ctrl_temp;
};
#define DEVICE_CACHE_CTRL ((volatile struct cache_ctrl_regs *) DEVICE_CACHE_CTRL_ADDR)

struct gpio_regs {
  uint32_t value;
  uint32_t mask;
  uint32_t edge;
  uint32_t changes; // read-only
};
#define DEVICE_GPIO ((volatile struct gpio_regs *) DEVICE_GPIO_ADDR)

struct spi_regs {
  uint32_t ctrl; // only byte 3
  uint32_t data; // only byte 3
};
#define DEVICE_FLASH ((volatile struct spi_regs *) DEVICE_FLASH_ADDR)

struct uartlite_regs {
  uint32_t rx; // only byte 3
  uint32_t tx; // only byte 3
  uint32_t status; // only byte 3
  uint32_t ctrl; // only byte 3
};
#define DEVICE_UART0 ((volatile struct uartlite_regs *) DEVICE_UART0_ADDR)


#endif