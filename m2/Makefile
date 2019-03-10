#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include src/sources.mk

# Platform Overrides
PLATFORM = msp432

# Architectures Specific Flags
LINKER_FILE = msp432p-401r.lds
CPU = 
ARCH = 
SPECS = 

# Compiler Flags and Defines
CC = 
LD = 
LDFLAGS = 
CFLAGS = -I $(IDIR)
CPPFLAGs = 
vpath = src

ifeq ($(PLATFORM),HOST)
	CC = gcc
	CPU = X86
	# etc
else
	CC = arm-none-eabi-gcc
	CPU = cortex-m0plus
	ARCH = thumb
	SPECS = nosys.specs
	# etc
endif

OBJS = $(SOURCES:.c=.o)

.PHONY: build
build: $(SOURCES)
	$(CC) $(CFLAGS) -o out/ARM/c1m2.out $^
