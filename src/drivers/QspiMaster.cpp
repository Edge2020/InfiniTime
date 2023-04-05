#include "drivers/QspiMaster.h"
#include <hal/nrf_gpio.h>
#include <hal/nrf_qspi.h>
#include <nrfx_log.h>
#include <algorithm>

using namespace Pinetime::Drivers;

QspiMaster::QspiMaster(const QspiMaster::Parameters& params) : params {params} {
}

bool QspiMaster::Init() {

    return true;
}
