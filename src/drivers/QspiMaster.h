#pragma once
#include <cstddef>
#include <cstdint>

#include <hal/nrf_qspi.h>
#include <FreeRTOS.h>
#include <semphr.h>
#include <task.h>

namespace Pinetime {
  namespace Drivers {
    class QspiMaster {

    public:
      struct Parameters {
        uint8_t pinSck;
        uint8_t pinCsn;
        uint8_t pinIo0;
        uint8_t pinIo1;
        uint8_t pinIo2;
        uint8_t pinIo3;
      };

      QspiMaster(const Parameters& params);

      bool Init();

    private:
      QspiMaster::Parameters params;

      NRF_QSPI_Type* qspiBaseAddress;
    };

  }

}
