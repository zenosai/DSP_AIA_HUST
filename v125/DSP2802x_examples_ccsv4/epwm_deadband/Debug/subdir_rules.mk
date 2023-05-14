################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
DSP2802x_CodeStartBranch.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_CodeStartBranch.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_CodeStartBranch.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_CpuTimers.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_CpuTimers.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_CpuTimers.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_DefaultIsr.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_DefaultIsr.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_DefaultIsr.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_EPwm.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_EPwm.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_EPwm.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_GlobalVariableDefs.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/source/DSP2802x_GlobalVariableDefs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_GlobalVariableDefs.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_PieCtrl.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_PieCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_PieCtrl.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_PieVect.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_PieVect.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_PieVect.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_SysCtrl.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_SysCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_SysCtrl.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

DSP2802x_usDelay.obj: C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/source/DSP2802x_usDelay.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="DSP2802x_usDelay.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Example_2802xEPwmDeadBand.obj: ../Example_2802xEPwmDeadBand.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/bin/cl2000" -v28 -ml -mt --include_path="D:/ti/ccsv8/tools/compiler/ti-cgt-c2000_18.1.2.LTS/include" --include_path="/packages/ti/xdais" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_headers/include" --include_path="C:/Users/zzy_c/DSP_P/v125/DSP2802x_common/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_warning=225 --issue_remarks --quiet --asm_directory="C:/Users/zzy_c/DSP_P/v125/DSP2802x_examples_ccsv4/epwm_deadband/Debug" --preproc_with_compile --preproc_dependency="Example_2802xEPwmDeadBand.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


