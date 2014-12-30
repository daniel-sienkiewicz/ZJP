################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Pojazd.cpp \
../Rower.cpp \
../RowerGorski.cpp \
../Samochod.cpp \
../SamochodDostawczy.cpp \
../SamochodOsobowy.cpp \
../majn.cpp 

OBJS += \
./Pojazd.o \
./Rower.o \
./RowerGorski.o \
./Samochod.o \
./SamochodDostawczy.o \
./SamochodOsobowy.o \
./majn.o 

CPP_DEPS += \
./Pojazd.d \
./Rower.d \
./RowerGorski.d \
./Samochod.d \
./SamochodDostawczy.d \
./SamochodOsobowy.d \
./majn.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


