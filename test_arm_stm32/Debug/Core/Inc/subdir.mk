################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Inc/test_class.cpp 

OBJS += \
./Core/Inc/test_class.o 

CPP_DEPS += \
./Core/Inc/test_class.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/test_class.o: ../Core/Inc/test_class.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Core/Inc/test_class.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

