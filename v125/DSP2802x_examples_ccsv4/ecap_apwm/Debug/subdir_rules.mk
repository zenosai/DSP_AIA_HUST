################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
DSP2802x_CodeStartBranch.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_CodeStartBranch.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_CodeStartBranch.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_CpuTimers.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_CpuTimers.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_CpuTimers.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_DefaultIsr.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_DefaultIsr.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_DefaultIsr.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_ECap.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_ECap.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_ECap.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_GlobalVariableDefs.obj: D:/Clock/v125/DSP2802x_headers/source/DSP2802x_GlobalVariableDefs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_GlobalVariableDefs.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_PieCtrl.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_PieCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_PieCtrl.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_PieVect.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_PieVect.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_PieVect.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_SysCtrl.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_SysCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_SysCtrl.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

DSP2802x_usDelay.obj: D:/Clock/v125/DSP2802x_common/source/DSP2802x_usDelay.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_usDelay.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Example_2802xECap_apwm.obj: ../Example_2802xECap_apwm.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" -v28 -ml -mt --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="D:/Clock/v125/DSP2802x_headers/include" --include_path="D:/Clock/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="D:/Clock/v125/DSP2802x_examples_ccsv4/ecap_apwm/Debug" --preproc_with_compile --preproc_dependency="Example_2802xECap_apwm.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


