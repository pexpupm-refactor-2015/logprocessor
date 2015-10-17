################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ConfigFile2AnalyzerData.cpp \
../src/Log2StandardLog.cpp \
../src/LogAnalyzer.cpp \
../src/LogReceiver.cpp \
../src/RabbitMqConnectionData.cpp \
../src/RabbitMqLogReceiver.cpp \
../src/StandardLog.cpp \
../src/StandardLogFileHandler.cpp \
../src/StdLine2StandardLog.cpp \
../src/WordTokenizer.cpp 

CC_SRCS += \
../src/main.cc 

OBJS += \
./src/ConfigFile2AnalyzerData.o \
./src/Log2StandardLog.o \
./src/LogAnalyzer.o \
./src/LogReceiver.o \
./src/RabbitMqConnectionData.o \
./src/RabbitMqLogReceiver.o \
./src/StandardLog.o \
./src/StandardLogFileHandler.o \
./src/StdLine2StandardLog.o \
./src/WordTokenizer.o \
./src/main.o 

CC_DEPS += \
./src/main.d 

CPP_DEPS += \
./src/ConfigFile2AnalyzerData.d \
./src/Log2StandardLog.d \
./src/LogAnalyzer.d \
./src/LogReceiver.d \
./src/RabbitMqConnectionData.d \
./src/RabbitMqLogReceiver.d \
./src/StandardLog.d \
./src/StandardLogFileHandler.d \
./src/StdLine2StandardLog.d \
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


