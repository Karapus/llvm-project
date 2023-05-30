//===- MyTarget.td - Describe the MyTarget Target Machine --*- tablegen -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
// This is the top level entry point for the MyTarget target.
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
// Target-independent interfaces
//===----------------------------------------------------------------------===//

include "llvm/Target/Target.td"

//===----------------------------------------------------------------------===//
// Target-dependent interfaces
//===----------------------------------------------------------------------===//

include "MyTargetRegisterInfo.td"

//===----------------------------------------------------------------------===//
// Calling Conv, Instruction Descriptions
//===----------------------------------------------------------------------===//

include "MyTargetInstrInfo.td"
def MyTargetInstrInfo : InstrInfo;

//===----------------------------------------------------------------------===//
// MyTarget processors supported.
//===----------------------------------------------------------------------===//

// Will generate MyTargetGenAsmWrite.inc included by MyTargetInstPrinter.cpp,
// contents as follows,
// void MyTargetInstPrinter::printInstruction(const MCInst *MI, raw_ostream &O) {...}
// const char *MyTargetInstPrinter::getRegisterName(unsigned RegNo) {...}
def MyTarget : Target {
  let InstructionSet = MyTargetInstrInfo;
}
