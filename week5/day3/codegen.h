/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __CODEGEN_H__
#define __CODEGEN_H__

#include "symtab.h"
#include "instructions.h"

#define RESERVED_WORDS 4

#define PROCEDURE_PARAM_COUNT(proc) (proc->procAttrs->numOfParams)
#define PROCEDURE_SCOPE(proc) (proc->procAttrs->scope)
#define PROCEDURE_FRAME_SIZE(proc) (proc->procAttrs->scope->frameSize)

#define FUNCTION_PARAM_COUNT(func) (func->funcAttrs->numOfParams)
#define FUNCTION_SCOPE(func) (func->funcAttrs->scope)
#define FUNCTION_FRAME_SIZE(func) (func->funcAttrs->scope->frameSize)

#define PROGRAM_SCOPE(prog) (prog->progAttrs->scope)
#define PROGRAM_FRAME_SIZE(prog) (prog->progAttrs->scope->frameSize)

#define VARIABLE_OFFSET(var) (var->varAttrs->localOffset)
#define VARIABLE_SCOPE(var) (var->varAttrs->scope)

#define PARAMETER_OFFSET(param) (param->paramAttrs->localOffset)
#define PARAMETER_SCOPE(param) (param->paramAttrs->scope)

#define RETURN_VALUE_OFFSET 0
#define DYNAMIC_LINK_OFFSET 1
#define RETURN_ADDRESS_OFFSET 2
#define STATIC_LINK_OFFSET 3

int computeNestedLevel(Scope* scope);

void genVariableAddress(Object* var);
void genVariableValue(Object* var);

void genParameterAddress(Object* param); 
void genParameterValue(Object* param);

void genReturnValueAddress(Object* func);
void genReturnValueAddress(Object* func);

void genArrayElementAddress(Type* arrayType);
void genArrayElementValue(Type* arrayType);

void genPredefinedProcedureCall(Object* proc);
void genProcedureCall(Object* proc);

void genPredefinedFunctionCall(Object* func);
void genFunctionCall(Object* func);

void genLA(int level, int offset);  //load vi tri
void genLV(int level, int offset);  //load gia tri
void genLC(WORD constant);          //load hang so
void genLI(void);                   //load thu vien ?(load inderect)
void genINT(int delta);             //increment t
void genDCT(int delta);               //decrement t
Instruction* genJ(CodeAddress label);  //nhay
Instruction* genFJ(CodeAddress label);  //khong nhay
void genHL(void);                        //halt
void genST(void);                          //luu tru
void genCALL(int level, CodeAddress label);  //goi
void genEP(void);                            //thoat chuong trinh con
void genEF(void);          //thoat function
void genRC(void);   //doc ky tu
void genRI(void);   //doc so
void genWRC(void);  //ghi ky tu
void genWRI(void);  //ghi so
void genWLN(void);  //ghi LN
void genAD(void);   //them
void genSB(void);   //substract
void genML(void);  //multiple
void genDV(void);  //divide
void genNEG(void);  //negative
void genCV(void);  //copy top
void genEQ(void);  //bang
void genNE(void);  //khong bang
void genGT(void);  //lon hon
void genGE(void);  //nho hon
void genLT(void);  //lon hon hoac bang
void genLE(void);  //nho hon hoac bang

void updateJ(Instruction* jmp, CodeAddress label);
void updateFJ(Instruction* jmp, CodeAddress label);

CodeAddress getCurrentCodeAddress(void);
int isPredefinedProcedure(Object* proc);
int isPredefinedFunction(Object* func);

void initCodeBuffer(void);
void printCodeBuffer(void);
void cleanCodeBuffer(void);

int serialize(char* fileName);

#endif
