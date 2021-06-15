#pragma once

#include <stdio.h>

extern "C"
{
    class AbiotsTestComponent
    {
    private:
        const char *TAG = "AbiotsTestComponent";
        uint32_t size;

    public:
        AbiotsTestComponent(uint32_t size) : size(size){};
        void toString(void);
    };
}