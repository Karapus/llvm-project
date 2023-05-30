//===-- MyTargetTargetInfo.cpp - MyTarget Target Implementation -----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "MyTarget.h"
#include "llvm/IR/Module.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

Target llvm::TheMyTargetTarget;

extern "C" void LLVMInitializeMyTargetTargetInfo() {
  RegisterTarget<Triple::mytarget,
                 /*HasJIT=*/false>
      X(TheMyTargetTarget, "MyTarget", "MyTarget (32-bit simulator arch)",
        "MyTarget");
}
