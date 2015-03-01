const unsigned char PROGMEM font[256][16]={
{0xC0,0xF0,0x30,0x30,0x30,0x30,0xF0,0xC0,
 0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x00},	/* 0x00 Resistor3  */
{0xFC,0xF8,0xF0,0xE0,0xC0,0xFC,0xFC,0xC0,
 0x0F,0x07,0x03,0x01,0x00,0x0F,0x0F,0x00},	/* 0x01 Diode1  */
{0xC0,0xFC,0xFC,0xC0,0xE0,0xF0,0xF8,0xFC,
 0x00,0x0F,0x0F,0x00,0x01,0x03,0x07,0x0F},	/* 0x02 Diode2  */
{0xC0,0xFC,0xFC,0x00,0x00,0xFC,0xFC,0xC0,
 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x03 Capacitor  */
{0xE0,0xF0,0x38,0x18,0x38,0xF0,0xE0,0x00,
 0x19,0x1B,0x1F,0x00,0x1F,0x1B,0x19,0x00},	/* 0x04 Omega  */
{0x00,0xF8,0xF8,0x00,0x00,0xE0,0xE0,0x00,
 0x60,0x7F,0x3F,0x0C,0x18,0x0F,0x1F,0x18},	/* 0x05 mu  */
{0x18,0x18,0x18,0x18,0x18,0x18,0xF8,0xC0,
 0x06,0x06,0x06,0x06,0x06,0x06,0x07,0x00},	/* 0x06 Resistor1  */
{0xC0,0xF8,0x18,0x18,0x18,0x18,0x18,0x18,
 0x00,0x07,0x06,0x06,0x06,0x06,0x06,0x06},	/* 0x07 Resistor2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x08  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x09  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0a  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0b  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0c  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0d  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0e  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0f  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x10  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x11  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x12  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x13  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x14  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x15  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x16  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x17  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x18  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x19  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1a  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1b  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1c  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1d  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1e  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x1f  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x20 ' ' */
{0x00,0x00,0xFC,0xFE,0xFE,0xFC,0x00,0x00,
 0x00,0x00,0x00,0x6F,0x6F,0x00,0x00,0x00},	/* 0x21 '!' */
{0x0B,0x0F,0x07,0x00,0x0B,0x0F,0x07,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x22 '"' */
{0x18,0xFC,0xFC,0x18,0xFC,0xFC,0x18,0x00,
 0x03,0x07,0x07,0x03,0x07,0x07,0x03,0x00},	/* 0x23 '#' */
{0x00,0x38,0x7C,0xE7,0xC7,0x9C,0x18,0x00,
 0x00,0x06,0x0E,0x38,0x39,0x0F,0x07,0x00},	/* 0x24 '$' */
{0x18,0x2C,0xA4,0xD8,0xE0,0x70,0x38,0x00,
 0x0E,0x07,0x03,0x0D,0x12,0x1A,0x0C,0x00},	/* 0x25 '%' */
{0x18,0xBC,0xE6,0xB6,0x1E,0x8C,0x80,0x00,
 0x07,0x0F,0x18,0x19,0x1B,0x16,0x0D,0x08},	/* 0x26 '&' */
{0x00,0x00,0x1B,0x0F,0x07,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x27 ''' */
{0x00,0x00,0xF0,0xFC,0x0E,0x06,0x00,0x00,
 0x00,0x00,0x03,0x0F,0x1C,0x18,0x00,0x00},	/* 0x28 '(' */
{0x00,0x00,0x06,0x0E,0xFC,0xF0,0x00,0x00,
 0x00,0x00,0x18,0x1C,0x0F,0x03,0x00,0x00},	/* 0x29 ')' */
{0x90,0xA0,0xC0,0xF8,0xC0,0xA0,0x90,0x00,
 0x04,0x02,0x01,0x0F,0x01,0x02,0x04,0x00},	/* 0x2a '*' */
{0x00,0xC0,0xC0,0xF0,0xF0,0xC0,0xC0,0x00,
 0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00},	/* 0x2b '+' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x58,0x78,0x38,0x00,0x00,0x00},	/* 0x2c ',' */
{0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x2d '-' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x38,0x38,0x38,0x00,0x00,0x00},	/* 0x2e '.' */
{0x00,0x00,0x80,0xC0,0xE0,0x70,0x38,0x00,
 0x0E,0x07,0x03,0x01,0x00,0x00,0x00,0x00},	/* 0x2f '/' */
{0xF8,0xFC,0x0E,0x06,0x0E,0xFC,0xF8,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x30 '0' */
{0x00,0x18,0x0C,0xFE,0xFE,0x00,0x00,0x00,
 0x00,0x00,0x18,0x1F,0x1F,0x18,0x00,0x00},	/* 0x31 '1' */
{0x18,0x1C,0x0E,0x86,0xCE,0xFC,0x78,0x00,
 0x1C,0x1E,0x1F,0x1B,0x19,0x18,0x18,0x00},	/* 0x32 '2' */
{0x06,0x06,0x66,0x66,0xF6,0x9E,0x0E,0x00,
 0x06,0x0E,0x1C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x33 '3' */
{0xC0,0xFE,0x3E,0x00,0xFC,0xFC,0x00,0x00,
 0x03,0x03,0x03,0x03,0x1F,0x1F,0x03,0x00},	/* 0x34 '4' */
{0x7E,0x7E,0x66,0x66,0xE6,0xC6,0x86,0x00,
 0x0C,0x1C,0x18,0x18,0x1C,0x0F,0x07,0x00},	/* 0x35 '5' */
{0xF8,0xFC,0xCE,0x66,0xE6,0xC0,0x80,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x03,0x00},	/* 0x36 '6' */
{0x06,0x06,0x06,0x86,0xE6,0x7E,0x1E,0x00,
 0x00,0x00,0x1E,0x1F,0x01,0x00,0x00,0x00},	/* 0x37 '7' */
{0x18,0xBC,0xEE,0x46,0xEE,0xBC,0x18,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x38 '8' */
{0x78,0xFC,0xCE,0x86,0xCE,0xFC,0xF8,0x00,
 0x00,0x00,0x19,0x19,0x1C,0x0F,0x07,0x00},	/* 0x39 '9' */
{0x00,0x00,0x70,0x70,0x70,0x00,0x00,0x00,
 0x00,0x00,0x1C,0x1C,0x1C,0x00,0x00,0x00},	/* 0x3a ':' */
{0x00,0x00,0x70,0x70,0x70,0x00,0x00,0x00,
 0x00,0x40,0x6C,0x3C,0x1C,0x00,0x00,0x00},	/* 0x3b ';' */
{0x80,0xC0,0xE0,0x70,0x38,0x1C,0x0E,0x00,
 0x00,0x01,0x03,0x07,0x0E,0x1C,0x38,0x00},	/* 0x3c '<' */
{0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x00,
 0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x00},	/* 0x3d '=' */
{0x0E,0x1C,0x38,0x70,0xE0,0xC0,0x80,0x00,
 0x38,0x1C,0x0E,0x07,0x03,0x01,0x00,0x00},	/* 0x3e '>' */
{0x18,0x1C,0x0E,0x86,0xCE,0xFC,0x78,0x00,
 0x00,0x00,0x67,0x67,0x01,0x00,0x00,0x00},	/* 0x3f '?' */
{0xF0,0x08,0xA4,0xA4,0xC4,0x08,0xF0,0x00,
 0x07,0x08,0x13,0x12,0x11,0x0A,0x09,0x00},	/* 0x40 '@' */
{0xF0,0xF8,0x1C,0x0E,0x1C,0xF8,0xF0,0x00,
 0x1F,0x1F,0x06,0x06,0x06,0x1F,0x1F,0x00},	/* 0x41 'A' */
{0xFE,0xFE,0xC6,0xC6,0xC6,0xFE,0x3C,0x00,
 0x1F,0x1F,0x18,0x18,0x18,0x1F,0x0F,0x00},	/* 0x42 'B' */
{0xF8,0xFC,0x0E,0x06,0x0E,0x1C,0x18,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06,0x00},	/* 0x43 'C' */
{0xFE,0xFE,0x02,0x02,0x06,0xFC,0xF8,0x00,
 0x1F,0x1F,0x10,0x10,0x18,0x0F,0x07,0x00},	/* 0x44 'D' */
{0xFE,0xFE,0xC6,0xC6,0xC6,0x06,0x06,0x00,
 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18,0x00},	/* 0x45 'E' */
{0xFE,0xFE,0xC6,0xC6,0xC6,0x06,0x06,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x46 'F' */
{0xF8,0xFC,0x0E,0x06,0x8E,0x9C,0x98,0x00,
 0x07,0x0F,0x1C,0x18,0x0D,0x1F,0x1F,0x00},	/* 0x47 'G' */
{0xFE,0xFE,0xC0,0xC0,0xC0,0xFE,0xFE,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00},	/* 0x48 'H' */
{0x00,0x00,0x00,0xFE,0xFE,0x00,0x00,0x00,
 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00},	/* 0x49 'I' */
{0x00,0x06,0x06,0xFE,0xFE,0x00,0x00,0x00,
 0x0C,0x1C,0x18,0x1F,0x0F,0x00,0x00,0x00},	/* 0x4a 'J' */
{0xFE,0xFE,0xE0,0xF0,0x3C,0x0E,0x06,0x00,
 0x1F,0x1F,0x00,0x03,0x07,0x1E,0x1C,0x00},	/* 0x4b 'K' */
{0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,
 0x1F,0x1F,0x18,0x18,0x18,0x18,0x18,0x00},	/* 0x4c 'L' */
{0xFE,0xFC,0x70,0xE0,0x70,0xFC,0xFE,0x00,
 0x1F,0x1F,0x00,0x03,0x00,0x1F,0x1F,0x00},	/* 0x4d 'M' */
{0xFE,0xFC,0x78,0xE0,0x80,0xFE,0xFE,0x00,
 0x1F,0x1F,0x00,0x01,0x07,0x0F,0x1F,0x00},	/* 0x4e 'N' */
{0xF8,0xFC,0x0E,0x06,0x0E,0xFC,0xF8,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x4f 'O' */
{0xFE,0xFE,0x86,0x86,0xCE,0xFC,0x78,0x00,
 0x1F,0x1F,0x01,0x01,0x01,0x00,0x00,0x00},	/* 0x50 'P' */
{0xF8,0xFC,0x0E,0x06,0x0E,0xFC,0xF8,0x00,
 0x07,0x0F,0x1C,0x18,0x1B,0x16,0x0D,0x18},	/* 0x51 'Q' */
{0xFE,0xFE,0x86,0x86,0x86,0xFC,0x78,0x00,
 0x1F,0x1F,0x01,0x01,0x07,0x1E,0x18,0x00},	/* 0x52 'R' */
{0x38,0x7C,0xEE,0xC6,0xCE,0x9C,0x18,0x00,
 0x06,0x0E,0x1C,0x18,0x1D,0x0F,0x07,0x00},	/* 0x53 'S' */
{0x00,0x06,0x06,0xFE,0xFE,0x06,0x06,0x00,
 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00},	/* 0x54 'T' */
{0xFE,0xFE,0x00,0x00,0x00,0xFE,0xFE,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x55 'U' */
{0xFE,0xFE,0x00,0x00,0x00,0xFE,0xFE,0x00,
 0x01,0x03,0x0F,0x1C,0x0F,0x03,0x01,0x00},	/* 0x56 'V' */
{0xFE,0xFE,0x00,0xFE,0x00,0xFE,0xFE,0x00,
 0x03,0x1F,0x1E,0x07,0x1E,0x1F,0x03,0x00},	/* 0x57 'W' */
{0x0E,0x1E,0xF8,0xE0,0xF8,0x1E,0x0E,0x00,
 0x1C,0x1F,0x03,0x00,0x03,0x1F,0x1C,0x00},	/* 0x58 'X' */
{0x00,0xFE,0xFE,0x80,0x80,0xFE,0xFE,0x00,
 0x00,0x00,0x01,0x1F,0x1F,0x01,0x00,0x00},	/* 0x59 'Y' */
{0x06,0x06,0x86,0xC6,0xE6,0x7E,0x3E,0x00,
 0x1E,0x1F,0x1B,0x19,0x18,0x18,0x18,0x00},	/* 0x5a 'Z' */
{0x00,0xFF,0xFF,0x03,0x03,0x03,0x00,0x00,
 0x00,0x3F,0x3F,0x30,0x30,0x30,0x00,0x00},	/* 0x5b '[' */
{0x1C,0x38,0x70,0xE0,0xC0,0x80,0x00,0x00,
 0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x00},	/* 0x5c '\' */
{0x00,0x03,0x03,0x03,0xFF,0xFF,0x00,0x00,
 0x00,0x30,0x30,0x30,0x3F,0x3F,0x00,0x00},	/* 0x5d ']' */
{0x08,0x0C,0x06,0x03,0x06,0x0C,0x08,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x5e '^' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x00},	/* 0x5f '_' */
{0x00,0x00,0x07,0x0F,0x1B,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x60 '`' */
{0x00,0x98,0xD8,0xD8,0xD8,0xF0,0xE0,0x00,
 0x07,0x0F,0x1D,0x18,0x0C,0x1F,0x1F,0x00},	/* 0x61 'a' */
{0xFE,0xFE,0x30,0x18,0x38,0xF0,0xE0,0x00,
 0x1F,0x1F,0x0C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x62 'b' */
{0xE0,0xF0,0x38,0x18,0x38,0x70,0x60,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0E,0x06,0x00},	/* 0x63 'c' */
{0xE0,0xF0,0x38,0x18,0x30,0xFE,0xFE,0x00,
 0x07,0x0F,0x1C,0x18,0x0C,0x1F,0x1F,0x00},	/* 0x64 'd' */
{0xE0,0xF0,0xB8,0x98,0xB8,0xF0,0xE0,0x00,
 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01,0x00},	/* 0x65 'e' */
{0xC0,0xF8,0xFC,0xCE,0xC6,0x1C,0x18,0x00,
 0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},	/* 0x66 'f' */
{0xE0,0xF0,0x38,0x18,0x30,0xF8,0xF8,0x00,
 0x03,0x07,0x6E,0x6C,0x66,0x3F,0x1F,0x00},	/* 0x67 'g' */
{0xFE,0xFE,0x30,0x18,0x38,0xF0,0xC0,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00},	/* 0x68 'h' */
{0x00,0x30,0x30,0xF6,0xF6,0x00,0x00,0x00,
 0x00,0x00,0x18,0x1F,0x1F,0x18,0x00,0x00},	/* 0x69 'i' */
{0x00,0x30,0x30,0xF6,0xF6,0x00,0x00,0x00,
 0x30,0x70,0x60,0x7F,0x3F,0x00,0x00,0x00},	/* 0x6a 'j' */
{0xFE,0xFE,0x80,0xC0,0xF0,0x38,0x18,0x00,
 0x1F,0x1F,0x01,0x07,0x0E,0x1C,0x18,0x00},	/* 0x6b 'k' */
{0x00,0x00,0x06,0xFE,0xFE,0x00,0x00,0x00,
 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00},	/* 0x6c 'l' */
{0xF8,0xF8,0x18,0xF0,0x18,0xF0,0xE0,0x00,
 0x1F,0x1F,0x00,0x1F,0x00,0x1F,0x1F,0x00},	/* 0x6d 'm' */
{0xF8,0xF8,0x30,0x18,0x38,0xF0,0xE0,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00},	/* 0x6e 'n' */
{0xE0,0xF0,0x38,0x18,0x38,0xF0,0xE0,0x00,
 0x07,0x0F,0x1C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x6f 'o' */
{0xF8,0xF8,0x30,0x18,0x38,0xF0,0xE0,0x00,
 0x7F,0x7F,0x0C,0x18,0x1C,0x0F,0x07,0x00},	/* 0x70 'p' */
{0xE0,0xF0,0x38,0x18,0x30,0xF8,0xF8,0x00,
 0x07,0x0F,0x1C,0x18,0x0C,0x7F,0x7F,0x00},	/* 0x71 'q' */
{0xF8,0xF8,0x60,0x30,0x18,0x78,0x70,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x72 'r' */
{0x60,0xF0,0x98,0x98,0x98,0x30,0x20,0x00,
 0x04,0x0C,0x19,0x19,0x19,0x0F,0x06,0x00},	/* 0x73 's' */
{0x60,0x60,0xFC,0xFE,0x60,0x60,0x00,0x00,
 0x00,0x00,0x0F,0x1F,0x18,0x1C,0x0C,0x00},	/* 0x74 't' */
{0xF8,0xF8,0x00,0x00,0x00,0xF8,0xF8,0x00,
 0x0F,0x1F,0x18,0x18,0x0C,0x1F,0x1F,0x00},	/* 0x75 'u' */
{0xF8,0xF8,0x00,0x00,0x00,0xF8,0xF8,0x00,
 0x03,0x07,0x0E,0x1C,0x0E,0x07,0x03,0x00},	/* 0x76 'v' */
{0xF8,0xF8,0x00,0xE0,0x00,0xF8,0xF8,0x00,
 0x03,0x1F,0x1C,0x0F,0x1C,0x1F,0x03,0x00},	/* 0x77 'w' */
{0x18,0x38,0xE0,0xC0,0xE0,0x38,0x18,0x00,
 0x1C,0x1F,0x03,0x01,0x03,0x1F,0x1C,0x00},	/* 0x78 'x' */
{0xF8,0xF8,0x00,0x00,0x00,0xF8,0xF8,0x00,
 0x07,0x0F,0x6C,0x6C,0x66,0x3F,0x1F,0x00},	/* 0x79 'y' */
{0x18,0x18,0x18,0x98,0xD8,0x78,0x38,0x00,
 0x1C,0x1E,0x1B,0x19,0x18,0x18,0x18,0x00},	/* 0x7a 'z' */
{0x00,0xC0,0xFE,0x3F,0x03,0x03,0x00,0x00,
 0x00,0x00,0x1F,0x3F,0x30,0x30,0x00,0x00},	/* 0x7b '{' */
{0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,
 0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00},	/* 0x7c '|' */
{0x00,0x03,0x03,0x3F,0xFE,0xC0,0x00,0x00,
 0x00,0x30,0x30,0x3F,0x1F,0x00,0x00,0x00},	/* 0x7d '}' */
{0xE0,0xE0,0xFC,0xF8,0xF0,0xE0,0x40,0x00,
 0x00,0x00,0x07,0x03,0x01,0x00,0x00,0x00},	/* 0x7e '~' */
{0x40,0xE0,0xF0,0xF8,0xFC,0xE0,0xE0,0x00,
 0x00,0x00,0x01,0x03,0x07,0x00,0x00,0x00},	/* 0x7f  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x80  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x81  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x82  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x83  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x84  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x85  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x86  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x87  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x88  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x89  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8a  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8b  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8c  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8d  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8e  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x8f  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x90  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x91  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x92  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x93  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x94  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x95  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x96  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x97  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x98  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x99  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9a  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9b  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9c  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9d  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9e  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x9f  */
#ifndef LCD_CYRILLIC                                      
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xaa  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xab  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xac  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xad  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xae  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xaf  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xba  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xbb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xbc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xbd  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xbe  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xbf  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xca  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcd  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xce  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcf  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xda  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdd  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xde  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdf  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xea  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xeb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xec  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xed  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xee  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xef  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfa  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfd  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfe  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} 	/* 0xff  */
#else
{0xFE,0xFE,0xC6,0xC6,0xC6,0x86,0x00,0x00,
 0x1F,0x1F,0x18,0x18,0x1D,0x0F,0x07,0x00},	/* 0xa0  */
{0xFE,0xFE,0x06,0x06,0x06,0x06,0x00,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xa1  */
{0xFB,0xFB,0x98,0x98,0x9B,0x1B,0x00,0x00,
 0x1F,0x1F,0x19,0x19,0x19,0x18,0x18,0x00},	/* 0xa2  */
{0x06,0xBE,0xF0,0xFE,0xF0,0xBE,0x06,0x00,
 0x1C,0x1F,0x00,0x1F,0x00,0x1F,0x1C,0x00},	/* 0xa3  */
{0x18,0x1C,0x0E,0xC6,0xEE,0xFC,0x38,0x00,
 0x06,0x0E,0x1C,0x18,0x1D,0x0F,0x07,0x00},	/* 0xa4  */
{0xFE,0xFE,0x80,0xE0,0x78,0xFE,0xFE,0x00,
 0x1F,0x0F,0x07,0x01,0x00,0x1F,0x1F,0x00},	/* 0xa5  */
{0xFC,0xFD,0x03,0xC6,0xE3,0xFD,0xFC,0x00,
 0x1F,0x0F,0x07,0x03,0x00,0x1F,0x1F,0x00},	/* 0xa6  */
{0x00,0xF0,0xFC,0x0E,0x06,0xFE,0xFE,0x00,
 0x18,0x1F,0x0F,0x00,0x00,0x1F,0x1F,0x00},	/* 0xa7  */
{0xFE,0xFE,0x06,0x06,0x06,0xFE,0xFE,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00},	/* 0xa8  */
{0xFE,0xFE,0x80,0x00,0x80,0xFE,0xFE,0x00,
 0x00,0x01,0x1B,0x1B,0x19,0x1F,0x0F,0x00},	/* 0xa9  */
{0xF8,0xFC,0x06,0xFF,0xFF,0x06,0xFC,0xF8,
 0x00,0x01,0x03,0x1F,0x1F,0x03,0x01,0x00},	/* 0xaa  */
{0xFE,0xFE,0x80,0x00,0x80,0xFE,0xFE,0x00,
 0x00,0x01,0x03,0x03,0x01,0x1F,0x1F,0x00},	/* 0xab  */
{0xFE,0xFE,0x00,0xFE,0x00,0xFE,0xFE,0x00,
 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x1F,0x00},	/* 0xac  */
{0x0E,0xFE,0xFE,0x30,0x18,0xF8,0xF0,0x00,
 0x00,0x1F,0x1F,0x18,0x18,0x1F,0x0F,0x00},	/* 0xad  */
{0xFE,0xFE,0x30,0x18,0xF0,0x0E,0xFE,0x00,
 0x1F,0x1F,0x18,0x18,0x0F,0x10,0x1F,0x00},	/* 0xae  */
{0x18,0x1C,0x06,0xC6,0xCE,0xFC,0xF8,0x00,
 0x06,0x0E,0x18,0x18,0x1C,0x0F,0x07,0x00},	/* 0xaf  */
{0xFE,0xFE,0xE0,0xFC,0x06,0xFE,0xFC,0x00,
 0x1F,0x1F,0x00,0x0F,0x18,0x1F,0x0F,0x00},	/* 0xb0  */
{0x78,0xFC,0x86,0x86,0x86,0xFE,0xFE,0x00,
 0x18,0x1E,0x07,0x01,0x01,0x1F,0x1F,0x00},	/* 0xb1  */
{0xF0,0xF8,0xCC,0x6C,0x66,0xC6,0x80,0x00,
 0x07,0x0F,0x18,0x18,0x18,0x0F,0x07,0x00},	/* 0xb2  */
{0xF8,0xF8,0x98,0x98,0x98,0xF0,0x60,0x00,
 0x1F,0x1F,0x19,0x19,0x19,0x0F,0x06,0x00},	/* 0xb3  */
{0xF8,0xF8,0x18,0x18,0x18,0x18,0x00,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xb4  */
{0xE0,0xF3,0xBB,0x98,0xBB,0xF3,0xE0,0x00,
 0x07,0x0F,0x1D,0x19,0x19,0x19,0x01,0x00},	/* 0xb5  */
{0x18,0x78,0xC0,0xF8,0xC0,0x78,0x18,0x00,
 0x1C,0x1F,0x01,0x1F,0x01,0x1F,0x1C,0x00},	/* 0xb6  */
{0x60,0x70,0x18,0x98,0xB8,0xF0,0x60,0x00,
 0x06,0x0E,0x18,0x19,0x1D,0x0F,0x06,0x00},	/* 0xb7  */
{0xF8,0xF8,0x00,0xC0,0xF0,0xF8,0xF8,0x00,
 0x1F,0x1F,0x0F,0x03,0x00,0x1F,0x1F,0x00},	/* 0xb8  */
{0xF8,0xF9,0x03,0xC6,0xF3,0xF9,0xF8,0x00,
 0x1F,0x1F,0x0F,0x03,0x00,0x1F,0x1F,0x00},	/* 0xb9  */
{0xF8,0xF8,0x80,0xC0,0xF0,0x38,0x18,0x00,
 0x1F,0x1F,0x01,0x07,0x0E,0x1C,0x18,0x00},	/* 0xba  */
{0x00,0xE0,0xF0,0x38,0x18,0xF8,0xF8,0x00,
 0x18,0x1F,0x0F,0x00,0x00,0x1F,0x1F,0x00},	/* 0xbb  */
{0xF8,0xF0,0xE0,0xC0,0xE0,0xF0,0xF8,0x00,
 0x1F,0x1F,0x00,0x03,0x00,0x1F,0x1F,0x00},	/* 0xbc  */
{0xF8,0xF8,0x80,0x80,0x80,0xF8,0xF8,0x00,
 0x1F,0x1F,0x01,0x01,0x01,0x1F,0x1F,0x00},	/* 0xbd  */
{0xF8,0xF8,0x18,0x18,0x18,0xF8,0xF8,0x00,
 0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00},	/* 0xbe  */
{0x00,0x18,0x18,0xF8,0xF8,0x18,0x18,0x00,
 0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00},	/* 0xbf  */
{0xF8,0xF8,0x00,0x00,0x80,0xF8,0xF8,0x00,
 0x01,0x03,0x03,0x03,0x01,0x1F,0x1F,0x00},	/* 0xc0  */
{0xF8,0xF8,0x00,0xE0,0x00,0xF8,0xF8,0x00,
 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x1F,0x00},	/* 0xc1  */
{0x38,0xF8,0xF8,0x80,0xC0,0xC0,0x80,0x00,
 0x00,0x1F,0x1F,0x19,0x18,0x1F,0x0F,0x00},	/* 0xc2  */
{0xF8,0xF8,0x80,0xC0,0x80,0x78,0xF8,0x00,
 0x1F,0x1F,0x19,0x18,0x0F,0x10,0x1F,0x00},	/* 0xc3  */
{0xF8,0xF8,0x80,0xC0,0xC0,0xC0,0x80,0x00,
 0x1F,0x1F,0x19,0x18,0x18,0x1F,0x0F,0x00},	/* 0xc4  */
{0x60,0x70,0x18,0x98,0xB8,0xF0,0xE0,0x00,
 0x06,0x0E,0x18,0x19,0x1D,0x0F,0x07,0x00},	/* 0xc5  */
{0xF8,0xF8,0xC0,0xF0,0x18,0xF8,0xF0,0x00,
 0x1F,0x1F,0x01,0x0F,0x18,0x1F,0x0F,0x00},	/* 0xc6  */
{0xE0,0xF0,0x38,0x18,0x18,0xF8,0xF8,0x00,
 0x11,0x1B,0x1F,0x06,0x03,0x1F,0x1F,0x00},	/* 0xc7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xc9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xca  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcd  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xce  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xcf  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xd9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xda  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdd  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xde  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xdf  */
{0x00,0xF0,0xF8,0x1C,0x0E,0xFE,0xFE,0x00,
 0x78,0x7F,0x1F,0x18,0x18,0x1F,0x7F,0x78},	/* 0xe0  */
{0xFE,0xFE,0x00,0x00,0xFE,0xFE,0x00,0x00,
 0x1F,0x1F,0x18,0x18,0x1F,0x7F,0x78,0x00},	/* 0xe1  */
{0xFE,0xFE,0x00,0xFE,0x00,0xFE,0xFE,0x00,
 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x7F,0x78},	/* 0xe2  */
{0x00,0xC0,0xE0,0x30,0x18,0xF8,0xF8,0x00,
 0x78,0x7F,0x1F,0x18,0x18,0x1F,0x7F,0x78},	/* 0xe3  */
{0xC0,0xE0,0x30,0xF8,0xF8,0x30,0xE0,0xC0,
 0x07,0x0F,0x18,0x7F,0x7F,0x18,0x0F,0x07},	/* 0xe4  */
{0xF8,0xF8,0x00,0x00,0xF8,0xF8,0x00,0x00,
 0x1F,0x1F,0x18,0x18,0x1F,0x7F,0x70,0x00},	/* 0xe5  */
{0xF8,0xF8,0x00,0xE0,0x00,0xF8,0xF8,0x00,
 0x1F,0x1F,0x18,0x1F,0x18,0x1F,0x7F,0x78},	/* 0xe6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xe9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xea  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xeb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xec  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xed  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xee  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xef  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf0  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf4  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf7  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfa  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfd  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xfe  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} 	/* 0xff  */
#endif                                          
};
                                                
