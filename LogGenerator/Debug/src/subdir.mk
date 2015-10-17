################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/LogSender.cpp \
../src/RabbitMqConnectionData.cpp \
../src/RabbitMqLogSender.cpp 

CC_SRCS += \
../src/main.cc 

OBJS += \
./src/LogSender.o \
./src/RabbitMqConnectionData.o \
./src/RabbitMqLogSender.o \
./src/main.o 

CC_DEPS += \
./src/main.d 

CPP_DEPS += \
./src/LogSender.d \
./src/RabbitMqConnectionData.d \
./src/RabbitMqLogSender.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++1y -I/home/eisrpav/prj/arqEj7/rabbitmq-c/librabbitmq -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++1y -I/home/eisrpav/prj/arqEj7/rabbitmq-c/librabbitmq -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


