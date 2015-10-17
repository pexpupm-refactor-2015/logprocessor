################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AppLog2StandardLog.cpp \
../src/Log2StandardLog.cpp \
../src/LogClassificator.cpp \
../src/LogReceiver.cpp \
../src/LogSender.cpp \
../src/ProcessorPipeline.cpp \
../src/RabbitMqConnectionData.cpp \
../src/RabbitMqLogReceiver.cpp \
../src/RabbitMqLogSender.cpp \
../src/StandardLog.cpp \
../src/StandardLogFileHandler.cpp \
../src/SystemLog2StandardLog.cpp \
../src/WordLengthFilter.cpp \
../src/WordTokenizer.cpp 

CC_SRCS += \
../src/main.cc 

OBJS += \
./src/AppLog2StandardLog.o \
./src/Log2StandardLog.o \
./src/LogClassificator.o \
./src/LogReceiver.o \
./src/LogSender.o \
./src/ProcessorPipeline.o \
./src/RabbitMqConnectionData.o \
./src/RabbitMqLogReceiver.o \
./src/RabbitMqLogSender.o \
./src/StandardLog.o \
./src/StandardLogFileHandler.o \
./src/SystemLog2StandardLog.o \
./src/WordLengthFilter.o \
./src/WordTokenizer.o \
./src/main.o 

CC_DEPS += \
./src/main.d 

CPP_DEPS += \
./src/AppLog2StandardLog.d \
./src/Log2StandardLog.d \
./src/LogClassificator.d \
./src/LogReceiver.d \
./src/LogSender.d \
./src/ProcessorPipeline.d \
./src/RabbitMqConnectionData.d \
./src/RabbitMqLogReceiver.d \
./src/RabbitMqLogSender.d \
./src/StandardLog.d \
./src/StandardLogFileHandler.d \
./src/SystemLog2StandardLog.d \
./src/WordLengthFilter.d \
./src/WordTokenizer.d 


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


