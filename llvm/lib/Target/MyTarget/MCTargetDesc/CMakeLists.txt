add_llvm_component_library(LLVMMyTargetDesc
  MyTargetMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  MyTargetInfo
  Support

  ADD_TO_COMPONENT
  MyTarget
  )
