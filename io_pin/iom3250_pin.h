/* Copyright (c) 2010 Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/../io_pin/iom3250_pin.h - definitions for ATmega3250 */

/* This file should only be included from <io_pin/io_pin.h>, never directly. */

#ifndef _AVR_IO_PIN_H_
#  error "Include <io_pin/io_pin.h> instead of this file."
#endif

#ifndef _AVR_IO_PINXXX_H_
#  define _AVR_IO_PINXXX_H_ "../io_pin/iom3250_pin.h"
#else
#  error "Attempt to include more than one <io_pin/io_pinXXX.h> file."
#endif 


#ifndef _AVR_PIN_ATMEGA3250_H_
#define _AVR_PIN_ATMEGA3250_H_ 1


/* Device Pin Definitions */
#define RXD_DDR   DDRE
#define RXD_PORT  PORTE
#define RXD_PIN   PINE
#define RXD_BIT   0

#define PCINT0_DDR   DDRE
#define PCINT0_PORT  PORTE
#define PCINT0_PIN   PINE
#define PCINT0_BIT   0

#define TXD_DDR   DDRE
#define TXD_PORT  PORTE
#define TXD_PIN   PINE
#define TXD_BIT   1

#define PCINT1_DDR   DDRE
#define PCINT1_PORT  PORTE
#define PCINT1_PIN   PINE
#define PCINT1_BIT   1

#define XCK_DDR   DDRE
#define XCK_PORT  PORTE
#define XCK_PIN   PINE
#define XCK_BIT   2

#define AIN0_DDR   DDRE
#define AIN0_PORT  PORTE
#define AIN0_PIN   PINE
#define AIN0_BIT   2

#define PCINT2_DDR   DDRE
#define PCINT2_PORT  PORTE
#define PCINT2_PIN   PINE
#define PCINT2_BIT   2

#define AIN1_DDR   DDRE
#define AIN1_PORT  PORTE
#define AIN1_PIN   PINE
#define AIN1_BIT   3

#define PCINT3_DDR   DDRE
#define PCINT3_PORT  PORTE
#define PCINT3_PIN   PINE
#define PCINT3_BIT   3

#define USCK_DDR   DDRE
#define USCK_PORT  PORTE
#define USCK_PIN   PINE
#define USCK_BIT   4

#define SCL_DDR   DDRE
#define SCL_PORT  PORTE
#define SCL_PIN   PINE
#define SCL_BIT   4

#define PCINT4_DDR   DDRE
#define PCINT4_PORT  PORTE
#define PCINT4_PIN   PINE
#define PCINT4_BIT   4

#define DI_DDR   DDRE
#define DI_PORT  PORTE
#define DI_PIN   PINE
#define DI_BIT   5

#define SDA_DDR   DDRE
#define SDA_PORT  PORTE
#define SDA_PIN   PINE
#define SDA_BIT   5

#define PCINT5_DDR   DDRE
#define PCINT5_PORT  PORTE
#define PCINT5_PIN   PINE
#define PCINT5_BIT   5

#define DO_DDR   DDRE
#define DO_PORT  PORTE
#define DO_PIN   PINE
#define DO_BIT   6

#define PCINT6_DDR   DDRE
#define PCINT6_PORT  PORTE
#define PCINT6_PIN   PINE
#define PCINT6_BIT   6

#define CLKO_DDR   DDRE
#define CLKO_PORT  PORTE
#define CLKO_PIN   PINE
#define CLKO_BIT   7

#define PCINT7_DDR   DDRE
#define PCINT7_PORT  PORTE
#define PCINT7_PIN   PINE
#define PCINT7_BIT   7

#define PCINT24_DDR   DDRJ
#define PCINT24_PORT  PORTJ
#define PCINT24_PIN   PINJ
#define PCINT24_BIT   0

#define PCINT25_DDR   DDRJ
#define PCINT25_PORT  PORTJ
#define PCINT25_PIN   PINJ
#define PCINT25_BIT   1

#define SS_DDR   DDRB
#define SS_PORT  PORTB
#define SS_PIN   PINB
#define SS_BIT   0

#define PCINT8_DDR   DDRB
#define PCINT8_PORT  PORTB
#define PCINT8_PIN   PINB
#define PCINT8_BIT   0

#define SCK_DDR   DDRB
#define SCK_PORT  PORTB
#define SCK_PIN   PINB
#define SCK_BIT   1

#define PCINT9_DDR   DDRB
#define PCINT9_PORT  PORTB
#define PCINT9_PIN   PINB
#define PCINT9_BIT   1

#define MOSI_DDR   DDRB
#define MOSI_PORT  PORTB
#define MOSI_PIN   PINB
#define MOSI_BIT   2

#define PCINT10_DDR   DDRB
#define PCINT10_PORT  PORTB
#define PCINT10_PIN   PINB
#define PCINT10_BIT   2

#define MISO_DDR   DDRB
#define MISO_PORT  PORTB
#define MISO_PIN   PINB
#define MISO_BIT   3

#define PCINT11_DDR   DDRB
#define PCINT11_PORT  PORTB
#define PCINT11_PIN   PINB
#define PCINT11_BIT   3

#define OC0A_DDR   DDRB
#define OC0A_PORT  PORTB
#define OC0A_PIN   PINB
#define OC0A_BIT   4

#define PCINT12_DDR   DDRB
#define PCINT12_PORT  PORTB
#define PCINT12_PIN   PINB
#define PCINT12_BIT   4

#define OC1A_DDR   DDRB
#define OC1A_PORT  PORTB
#define OC1A_PIN   PINB
#define OC1A_BIT   5

#define PCINT13_DDR   DDRB
#define PCINT13_PORT  PORTB
#define PCINT13_PIN   PINB
#define PCINT13_BIT   5

#define OC1B_DDR   DDRB
#define OC1B_PORT  PORTB
#define OC1B_PIN   PINB
#define OC1B_BIT   6

#define PCINT14_DDR   DDRB
#define PCINT14_PORT  PORTB
#define PCINT14_PIN   PINB
#define PCINT14_BIT   6

#define OC2A_DDR   DDRB
#define OC2A_PORT  PORTB
#define OC2A_PIN   PINB
#define OC2A_BIT   7

#define PCINT15_DDR   DDRB
#define PCINT15_PORT  PORTB
#define PCINT15_PIN   PINB
#define PCINT15_BIT   7

#define T1_DDR   DDRG
#define T1_PORT  PORTG
#define T1_PIN   PING
#define T1_BIT   3

#define T0_DDR   DDRG
#define T0_PORT  PORTG
#define T0_PIN   PING
#define T0_BIT   4

#define PCINT26_DDR   DDRJ
#define PCINT26_PORT  PORTJ
#define PCINT26_PIN   PINJ
#define PCINT26_BIT   2

#define PCINT27_DDR   DDRJ
#define PCINT27_PORT  PORTJ
#define PCINT27_PIN   PINJ
#define PCINT27_BIT   3

#define PCINT28_DDR   DDRJ
#define PCINT28_PORT  PORTJ
#define PCINT28_PIN   PINJ
#define PCINT28_BIT   4

#define PCINT29_DDR   DDRJ
#define PCINT29_PORT  PORTJ
#define PCINT29_PIN   PINJ
#define PCINT29_BIT   5

#define PCINT30_DDR   DDRJ
#define PCINT30_PORT  PORTJ
#define PCINT30_PIN   PINJ
#define PCINT30_BIT   6

#define ICP1_DDR   DDRD
#define ICP1_PORT  PORTD
#define ICP1_PIN   PIND
#define ICP1_BIT   0

#define INT0_DDR   DDRD
#define INT0_PORT  PORTD
#define INT0_PIN   PIND
#define INT0_BIT   1

#define PCINT16_DDR   DDRH
#define PCINT16_PORT  PORTH
#define PCINT16_PIN   PINH
#define PCINT16_BIT   0

#define PCINT17_DDR   DDRH
#define PCINT17_PORT  PORTH
#define PCINT17_PIN   PINH
#define PCINT17_BIT   1

#define PCINT18_DDR   DDRH
#define PCINT18_PORT  PORTH
#define PCINT18_PIN   PINH
#define PCINT18_BIT   2

#define PCINT19_DDR   DDRH
#define PCINT19_PORT  PORTH
#define PCINT19_PIN   PINH
#define PCINT19_BIT   3

#define PCINT20_DDR   DDRH
#define PCINT20_PORT  PORTH
#define PCINT20_PIN   PINH
#define PCINT20_BIT   4

#define PCINT21_DDR   DDRH
#define PCINT21_PORT  PORTH
#define PCINT21_PIN   PINH
#define PCINT21_BIT   5

#define PCINT22_DDR   DDRH
#define PCINT22_PORT  PORTH
#define PCINT22_PIN   PINH
#define PCINT22_BIT   6

#define PCINT23_DDR   DDRH
#define PCINT23_PORT  PORTH
#define PCINT23_PIN   PINH
#define PCINT23_BIT   7

#define ADC7_DDR   DDRF
#define ADC7_PORT  PORTF
#define ADC7_PIN   PINF
#define ADC7_BIT   7

#define ADC6_DDR   DDRF
#define ADC6_PORT  PORTF
#define ADC6_PIN   PINF
#define ADC6_BIT   6

#define ADC5_DDR   DDRF
#define ADC5_PORT  PORTF
#define ADC5_PIN   PINF
#define ADC5_BIT   5

#define ADC4_DDR   DDRF
#define ADC4_PORT  PORTF
#define ADC4_PIN   PINF
#define ADC4_BIT   4

#define ADC3_DDR   DDRF
#define ADC3_PORT  PORTF
#define ADC3_PIN   PINF
#define ADC3_BIT   3

#define ADC2_DDR   DDRF
#define ADC2_PORT  PORTF
#define ADC2_PIN   PINF
#define ADC2_BIT   2

#define ADC1_DDR   DDRF
#define ADC1_PORT  PORTF
#define ADC1_PIN   PINF
#define ADC1_BIT   1

#define ADC0_DDR   DDRF
#define ADC0_PORT  PORTF
#define ADC0_PIN   PINF
#define ADC0_BIT   0

#endif /* _AVR_PIN_ATMEGA3250_H_ */
