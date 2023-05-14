################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./DSP2802x_GlobalVariableDefs.obj" \
"./LED_TM1638.obj" \
"./main.obj" \
"./source/DSP2802x_Adc.obj" \
"./source/DSP2802x_CSMPasswords.obj" \
"./source/DSP2802x_CodeStartBranch.obj" \
"./source/DSP2802x_Comp.obj" \
"./source/DSP2802x_CpuTimers.obj" \
"./source/DSP2802x_DBGIER.obj" \
"./source/DSP2802x_DefaultIsr.obj" \
"./source/DSP2802x_DisInt.obj" \
"./source/DSP2802x_ECap.obj" \
"./source/DSP2802x_EPwm.obj" \
"./source/DSP2802x_Gpio.obj" \
"./source/DSP2802x_I2C.obj" \
"./source/DSP2802x_MemCopy.obj" \
"./source/DSP2802x_OscComp.obj" \
"./source/DSP2802x_PieCtrl.obj" \
"./source/DSP2802x_PieVect.obj" \
"./source/DSP2802x_SWPrioritizedDefaultIsr.obj" \
"./source/DSP2802x_SWPrioritizedPieVect.obj" \
"./source/DSP2802x_Sci.obj" \
"./source/DSP2802x_Spi.obj" \
"./source/DSP2802x_SysCtrl.obj" \
"./source/DSP2802x_TempSensorConv.obj" \
"./source/DSP2802x_usDelay.obj" \
"../28027_RAM_lnk.cmd" \
"../F2802x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include source/subdir_vars.mk
-include subdir_rules.mk
-include source/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
Go_23.out \

EXE_OUTPUTS__QUOTED += \
"Go_23.out" \


# All Target
all: Go_23.out

# Tool invocations
Go_23.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt -O2 --diag_warning=225 --display_error_number --diag_wrap=off -z -m"Go_23.map" --stack_size=0x300 --warn_sections -i"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/lib" -i"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --reread_libs --display_error_number --diag_wrap=off --xml_link_info="Go_23_linkInfo.xml" --rom_model -o "Go_23.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "DSP2802x_GlobalVariableDefs.obj" "LED_TM1638.obj" "main.obj" "source\DSP2802x_Adc.obj" "source\DSP2802x_CSMPasswords.obj" "source\DSP2802x_CodeStartBranch.obj" "source\DSP2802x_Comp.obj" "source\DSP2802x_CpuTimers.obj" "source\DSP2802x_DBGIER.obj" "source\DSP2802x_DefaultIsr.obj" "source\DSP2802x_DisInt.obj" "source\DSP2802x_ECap.obj" "source\DSP2802x_EPwm.obj" "source\DSP2802x_Gpio.obj" "source\DSP2802x_I2C.obj" "source\DSP2802x_MemCopy.obj" "source\DSP2802x_OscComp.obj" "source\DSP2802x_PieCtrl.obj" "source\DSP2802x_PieVect.obj" "source\DSP2802x_SWPrioritizedDefaultIsr.obj" "source\DSP2802x_SWPrioritizedPieVect.obj" "source\DSP2802x_Sci.obj" "source\DSP2802x_Spi.obj" "source\DSP2802x_SysCtrl.obj" "source\DSP2802x_TempSensorConv.obj" "source\DSP2802x_usDelay.obj" 
	-$(RM) "DSP2802x_GlobalVariableDefs.d" "LED_TM1638.d" "main.d" "source\DSP2802x_Adc.d" "source\DSP2802x_Comp.d" "source\DSP2802x_CpuTimers.d" "source\DSP2802x_DefaultIsr.d" "source\DSP2802x_ECap.d" "source\DSP2802x_EPwm.d" "source\DSP2802x_Gpio.d" "source\DSP2802x_I2C.d" "source\DSP2802x_MemCopy.d" "source\DSP2802x_OscComp.d" "source\DSP2802x_PieCtrl.d" "source\DSP2802x_PieVect.d" "source\DSP2802x_SWPrioritizedDefaultIsr.d" "source\DSP2802x_SWPrioritizedPieVect.d" "source\DSP2802x_Sci.d" "source\DSP2802x_Spi.d" "source\DSP2802x_SysCtrl.d" "source\DSP2802x_TempSensorConv.d" 
	-$(RM) "source\DSP2802x_CSMPasswords.d" "source\DSP2802x_CodeStartBranch.d" "source\DSP2802x_DBGIER.d" "source\DSP2802x_DisInt.d" "source\DSP2802x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

