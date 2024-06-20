#pragma once

#define WS2812_DI_PIN C15
#define RGB_MATRIX_LED_COUNT 2
#define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT

#define RGB_INDICATOR_BRIGHTNESS 5
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define RGB_MATRIX_HUE_STEP 1
#define RGB_MATRIX_SAT_STEP 1
#define RGB_MATRIX_VAL_STEP 1
#define RGB_MATRIX_SPD_STEP 1
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 32
#define RGB_MATRIX_DEFAULT_SPD 32

#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_BREATHING
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE  // Pulses keys hit to hue & value then fades value out
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE      // Static single hue, pulses keys hit to shifted hue then fades to current hue
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS     // Hue & value pulse away on the same column and row of a single key hit then fades value out
#define    ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out