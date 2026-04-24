/*
DAC Register Bits
*/
/* Not used now */
// #define SELECT_DAC0 (~(1 << 7))
// #define SELECT_DAC1 (1 << 7)

// #define BUFFERED (1 << 14)
// #define NON_BUFFERED (~(1 << 14))

// #define GAIN_1X (1 << 13)
// #define GAIN_2X (~(1 << 13))

// #define SHUT_DOWN (~(1 << 12))
// #define DO_NOT_SHUT_DOWN (1 << 12)
#define SELECT_DACA       0x0000          // bit 15 = 0 (DAC A)
#define SELECT_DACB       (1 << 15)       // bit 15 = 1 (DAC B)

#define BUFFERED          (1 << 14)       // bit 14 = 1
#define NON_BUFFERED      0x0000          // bit 14 = 0

#define GAIN_1X           (1 << 13)       // bit 13 = 1
#define GAIN_2X           0x0000          // bit 13 = 0

#define DO_NOT_SHUT_DOWN  (1 << 12)       // bit 12 = 1 (output enabled)
#define SHUT_DOWN         0x0000          // bit 12 = 0 (output disabled)

#define DATA_BITS(x) (x&0x0FFF)



/*
ADC register bits
*/
#define SINGLE_CHANNEL 1 
#define DIFFERENTIAL_CHANNEL 0 
#define SINGLE_DIFFERENTIAL_CHANNEL(x) x<<7

#define CHANNEL_0 0
#define CHANNEL_1 1
#define CHANNEL_2 2
#define CHANNEL_3 3
#define CHANNEL_4 4
#define CHANNEL_5 5
#define CHANNEL_6 6
#define CHANNEL_7 7
#define CHANNEL_SELECT(x) (x << 4)


