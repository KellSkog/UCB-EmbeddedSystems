Installed package gcc-arm-none-eabi

Can now do:
arm-none-eabi-gcc -std=c99 -mcpu=cortex-m0plus -mthumb -Wall -S main.c -o main.s

