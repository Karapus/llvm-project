add_llvm_component_group(MyTarget)

set(LLVM_TARGET_DEFINITIONS MyTarget.td)

# Generate MyTargetGenRegisterInfo.inc and MyTargetGenInstrInfo.inc which included by
#  your hand code C++ files.
# MyTargetGenRegisterInfo.inc came from MyTargetRegisterInfo.td, MyTargetGenInstrInfo.inc
#  came from MyTargetInstrInfo.td.
tablegen(LLVM MyTargetGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM MyTargetGenInstrInfo.inc -gen-instr-info)

# MyTargetCommonTableGen must be defined
add_public_tablegen_target(MyTargetCommonTableGen)

# MyTargetCodeGen should match with LLVMBuild.txt MyTargetCodeGen
add_llvm_target(MyTargetCodeGen
  MyTargetTargetMachine.cpp

  LINK_COMPONENTS
  Analysis
  AsmPrinter
  CodeGen
  Core
  MC
  MyTargetDesc
  MyTargetInfo
  SelectionDAG
  Support
  Target
  GlobalISel

  ADD_TO_COMPONENT
  MyTarget
  )

add_subdirectory(TargetInfo)
add_subdirectory(MCTargetDesc)
