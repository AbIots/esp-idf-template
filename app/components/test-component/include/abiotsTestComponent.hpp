#pragma once

#include <stdio.h>

#include "esp_log.h"

extern "C"
{
    class AbiotsTestComponent
    {
    private:
        const char *TAG = "AbiotsTestComponent";
        uint32_t size;
        const char *maxSize = CONFIG_ABIOTS_INCLUDE_THIS;

    public:
        AbiotsTestComponent(uint32_t size) : size(size){};
        void toString(void);
    };
}