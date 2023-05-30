//===-- MyTargetRegisterInfo.td - MyTarget Register defs ---*- tablegen -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
//  Declarations that describe the MyTarget register file
//===----------------------------------------------------------------------===//

// For tablegen(... -gen-emitter)  in CMakeLists.txt
class MyTargetReg<bits<16> Enc, string n> : Register<n> {
  let HWEncoding = Enc;
}

// MyTarget CPU Registers
class MyTargetGPRReg<bits<16> Enc, string n> : MyTargetReg<Enc, n>;

//===----------------------------------------------------------------------===//
//@Registers
//===----------------------------------------------------------------------===//
//@ All registers definition
let Namespace = "MyTarget" in {
  //@ General Purpose Registers
  def R0    : MyTargetGPRReg<0,  "r0">,    DwarfRegNum<[0]>;
  def R1    : MyTargetGPRReg<1,  "r1">,    DwarfRegNum<[1]>;
  def R2    : MyTargetGPRReg<2,  "r2">,    DwarfRegNum<[2]>;
  def R3    : MyTargetGPRReg<3,  "r3">,    DwarfRegNum<[3]>;
  def R4    : MyTargetGPRReg<4,  "r4">,    DwarfRegNum<[4]>;
  def R5    : MyTargetGPRReg<5,  "r5">,    DwarfRegNum<[5]>;
  def R6    : MyTargetGPRReg<6,  "r6">,    DwarfRegNum<[6]>;
  def R7    : MyTargetGPRReg<7,  "r7">,    DwarfRegNum<[7]>;
  def R8    : MyTargetGPRReg<8,  "r8">,    DwarfRegNum<[8]>;
  def R9    : MyTargetGPRReg<9,  "r9">,    DwarfRegNum<[9]>;
  def R10   : MyTargetGPRReg<10, "r10">,   DwarfRegNum<[10]>;
  def R11   : MyTargetGPRReg<11, "r11">,   DwarfRegNum<[11]>;
  def R12   : MyTargetGPRReg<12, "r12">,   DwarfRegNum<[12]>;
  def R13   : MyTargetGPRReg<13, "r13">,   DwarfRegNum<[13]>;
  def R14   : MyTargetGPRReg<14, "r14">,   DwarfRegNum<[14]>;
  def R15   : MyTargetGPRReg<15, "r15">,   DwarfRegNum<[15]>;
}

//===----------------------------------------------------------------------===//
//@Register Classes
//===----------------------------------------------------------------------===//

def CPURegs : RegisterClass<"MyTarget", [i32], 32, (add
  R0, R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, R12, R13, R14, R15)>;
