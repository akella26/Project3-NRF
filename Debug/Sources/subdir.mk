################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/gpio.c \
../Sources/main.c \
../Sources/nordic.c \
../Sources/project3.c \
../Sources/spi.c 

OBJS += \
./Sources/gpio.o \
./Sources/main.o \
./Sources/nordic.o \
./Sources/project3.o \
./Sources/spi.o 

C_DEPS += \
./Sources/gpio.d \
./Sources/main.d \
./Sources/nordic.d \
./Sources/project3.d \
./Sources/spi.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"../Sources" -I"../Includes" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


