#pragma once
#include <AudioStream.h>
#include <AudioSynthWavetable.h>

extern const sample_data epiano_samples[4];
const uint8_t epiano_ranges[] = {48, 60, 80, 127, };

const instrument_data epiano = {4, epiano_ranges, epiano_samples };


extern const uint32_t sample_0_epiano_coldglass7wave[128];

extern const uint32_t sample_1_epiano_coldglass7wave[128];

extern const uint32_t sample_2_epiano_coldglass7wave[128];

extern const uint32_t sample_3_epiano_epiano2ms[640];
