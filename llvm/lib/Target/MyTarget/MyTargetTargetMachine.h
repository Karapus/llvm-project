//===----------------------------------------------------------------------===//
//
// This file declares the MyTarget specific subclass of TargetMachine.
//
//===----------------------------------------------------------------------===//
#ifndef LLVM_LIB_TARGET_MYTARGET_MYTARGET_TARGET_MACHINE_H
#define LLVM_LIB_TARGET_MYTARGET_MYTARGET_TARGET_MACHINE_H
#if 0
#include "llvm/IR/DataLayout.h"
#include "llvm/Target/TargetMachine.h"

#include "MyTargetFrameLowering.h"
#include "MyTargetISelLowering.h"
#include "MyTargetInstrInfo.h"
#include "MyTargetSelectionDAGInfo.h"
#include "MyTargetSubtarget.h"

#include <optional>

namespace llvm {

class MyTargetTargetMachine : public LLVMTargetMachine {
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
  MyTargetSubtarget Subtarget;

public:
  MyTargetTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                     StringRef FS, const TargetOptions &Options,
                     std::optional<Reloc::Model> RM,
                     std::optional<CodeModel::Model> CM, CodeGenOpt::Level OL,
                     bool JIT);
  ~MyTargetTargetMachine() override;

  const MyTargetSubtarget *getSubtargetImpl() const { return &Subtarget; }
  const MyTargetSubtarget *getSubtargetImpl(const Function &) const override;

  // Pass Pipeline Configuration
  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }

  MachineFunctionInfo *
  createMachineFunctionInfo(BumpPtrAllocator &Allocator, const Function &F,
                            const TargetSubtargetInfo *STI) const override;
};

} // end namespace llvm
#endif
#endif // LLVM_LIB_TARGET_MYTARGET_MYTARGET_TARGET_MACHINE_H
