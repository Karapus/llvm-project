//===-- MyTargetMCTargetDesc.h - MyTarget Target Descriptions --*- C++ -*--===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file provides MyTarget specific target descriptions.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_MYTARGET_MCTARGETDESC_MYTARGET_MCTARGETDESC_H
#define LLVM_LIB_TARGET_MYTARGET_MCTARGETDESC_MYTARGET_MCTARGETDESC_H

#include "llvm/Support/DataTypes.h"

#include <memory>

namespace llvm {
class Target;
class Triple;

extern Target TheMyTargetTarget;

} // namespace llvm

// Defines symbolic names for MyTarget registers. This defines a mapping from
// register name to register number.
#define GET_REGINFO_ENUM
#include "MyTargetGenRegisterInfo.inc"

// Defines symbolic names for the MyTarget instructions.
#define GET_INSTRINFO_ENUM
#include "MyTargetGenInstrInfo.inc"

#endif // LLVM_LIB_TARGET_MYTARGET_MCTARGETDESC_MYTARGET_MCTARGETDESC_H
