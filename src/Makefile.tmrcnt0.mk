# Hey Emacs, this is a -*- makefile -*-

TMRCNT0_DEVICES = at90can32
TMRCNT0_DEVICES += at90can64
TMRCNT0_DEVICES += at90can128
TMRCNT0_DEVICES += at90pwm1
TMRCNT0_DEVICES += at90pwm2
TMRCNT0_DEVICES += at90pwm2b
TMRCNT0_DEVICES += at90pwm3
TMRCNT0_DEVICES += at90pwm3b
TMRCNT0_DEVICES += at90pwm216
TMRCNT0_DEVICES += at90pwm316
TMRCNT0_DEVICES += at90usb82
TMRCNT0_DEVICES += at90usb162
TMRCNT0_DEVICES += at90usb646
TMRCNT0_DEVICES += at90usb647
TMRCNT0_DEVICES += at90usb1286
TMRCNT0_DEVICES += at90usb1287
TMRCNT0_DEVICES += atmega8
TMRCNT0_DEVICES += atmega8u2
TMRCNT0_DEVICES += atmega16
TMRCNT0_DEVICES += atmega16a
TMRCNT0_DEVICES += atmega16m1
TMRCNT0_DEVICES += atmega16u2
TMRCNT0_DEVICES += atmega16u4
TMRCNT0_DEVICES += atmega32
TMRCNT0_DEVICES += atmega32c1
TMRCNT0_DEVICES += atmega32m1
TMRCNT0_DEVICES += atmega32u2
TMRCNT0_DEVICES += atmega32u4
TMRCNT0_DEVICES += atmega32u6
TMRCNT0_DEVICES += atmega48
TMRCNT0_DEVICES += atmega48a
TMRCNT0_DEVICES += atmega48p
TMRCNT0_DEVICES += atmega64
TMRCNT0_DEVICES += atmega64c1
TMRCNT0_DEVICES += atmega64m1
TMRCNT0_DEVICES += atmega88
TMRCNT0_DEVICES += atmega88a
TMRCNT0_DEVICES += atmega88p
TMRCNT0_DEVICES += atmega88pa
TMRCNT0_DEVICES += atmega128
TMRCNT0_DEVICES += atmega128rfa1
TMRCNT0_DEVICES += atmega162
TMRCNT0_DEVICES += atmega164p
TMRCNT0_DEVICES += atmega164a
TMRCNT0_DEVICES += atmega165
TMRCNT0_DEVICES += atmega165p
TMRCNT0_DEVICES += atmega168
TMRCNT0_DEVICES += atmega168a
TMRCNT0_DEVICES += atmega168p
TMRCNT0_DEVICES += atmega169
#TMRCNT0_DEVICES += atmega169a
TMRCNT0_DEVICES += atmega169p
TMRCNT0_DEVICES += atmega169pa
TMRCNT0_DEVICES += atmega324p
TMRCNT0_DEVICES += atmega324a
TMRCNT0_DEVICES += atmega324pa
TMRCNT0_DEVICES += atmega325
TMRCNT0_DEVICES += atmega325p
TMRCNT0_DEVICES += atmega328
TMRCNT0_DEVICES += atmega328p
TMRCNT0_DEVICES += atmega329
TMRCNT0_DEVICES += atmega329p
TMRCNT0_DEVICES += atmega329pa
TMRCNT0_DEVICES += atmega406
TMRCNT0_DEVICES += atmega640
TMRCNT0_DEVICES += atmega644
TMRCNT0_DEVICES += atmega644a
TMRCNT0_DEVICES += atmega644p
TMRCNT0_DEVICES += atmega644pa
TMRCNT0_DEVICES += atmega645
#TMRCNT0_DEVICES += atmega645a
#TMRCNT0_DEVICES += atmega645p
TMRCNT0_DEVICES += atmega649
#TMRCNT0_DEVICES += atmega649a
TMRCNT0_DEVICES += atmega649p
TMRCNT0_DEVICES += atmega1280
TMRCNT0_DEVICES += atmega1281
TMRCNT0_DEVICES += atmega1284p
TMRCNT0_DEVICES += atmega2560
TMRCNT0_DEVICES += atmega2561
TMRCNT0_DEVICES += atmega3250
TMRCNT0_DEVICES += atmega3250p
TMRCNT0_DEVICES += atmega3290
TMRCNT0_DEVICES += atmega3290p
TMRCNT0_DEVICES += atmega6450
#TMRCNT0_DEVICES += atmega6450a
#TMRCNT0_DEVICES += atmega6450p
TMRCNT0_DEVICES += atmega6490
#TMRCNT0_DEVICES += atmega6490a
#TMRCNT0_DEVICES += atmega6490p
TMRCNT0_DEVICES += atmega8535
TMRCNT0_DEVICES += attiny13
TMRCNT0_DEVICES += attiny13a
TMRCNT0_DEVICES += attiny24
TMRCNT0_DEVICES += attiny24a
TMRCNT0_DEVICES += attiny25
TMRCNT0_DEVICES += attiny43u
TMRCNT0_DEVICES += attiny44
TMRCNT0_DEVICES += attiny44a
TMRCNT0_DEVICES += attiny45
TMRCNT0_DEVICES += attiny84
TMRCNT0_DEVICES += attiny85
TMRCNT0_DEVICES += attiny2313
TMRCNT0_DEVICES += attiny2313a
TMRCNT0_DEVICES += attiny4313

TMRCNT0_OBJS=$(TMRCNT0_DEVICES:%=$(OBJDIR)/%/tmrcnt0.o)

TMRCNT0_TARGETS=$(TMRCNT0_DEVICES:%=$(OUTDIR_LIB)/%/libtmrcnt0.a)

TMRCNT0_OBJDIRS=$(TMRCNT0_DEVICES:%=$(OBJDIR)/%)
TMRCNT0_OUTDIRS=$(TMRCNT0_DEVICES:%=$(OUTDIR_LIB)/%)

TMRCNT0_HEADER = $(OUTDIR_HEADER)/tmrcnt0.h

$(OBJDIR)/%/tmrcnt0.o : tmrcnt0.c tmrcnt0.h
	$(CC) -c -mmcu=$* $(ALL_CFLAGS) $< -o $@

$(OUTDIR_LIB)/%/libtmrcnt0.a: $(TMRCNT0_OBJS)
	$(AR) $@ $(OBJDIR)/$*/tmrcnt0.o

# Create object files directory
$(shell mkdir -p $(TMRCNT0_OBJDIRS))
$(shell mkdir -p $(TMRCNT0_OUTDIRS))
