#pragma once

#include "hardware.h"
#include "rp2040.h"
#include "ili9341.h"
#include "ice40.h"

void fpga_test(ILI9341* ili9341, ICE40* ice40, xQueueHandle buttonQueue);