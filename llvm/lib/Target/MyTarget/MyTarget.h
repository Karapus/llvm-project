//=== MyTarget.h - Top-level interface for MyTarget representation *- C++-*===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the entry points for global functions defined in
// the LLVM MyTarget back-end.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_MYTARGET_H
#define LLVM_LIB_TARGET_MYTARGET_H

#include "MCTargetDesc/MyTargetMCTargetDesc.h"
#include "llvm/Target/TargetMachine.h"

namespace llvm {
class MyTargetTargetMachine;
class FunctionPass;

} // namespace llvm

#endif // LLVM_LIB_TARGET_MYTARGET_H
