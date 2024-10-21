
// Generated from Sysy.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "SysyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SysyParser.
 */
class  SysyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SysyParser.
   */
    virtual antlrcpp::Any visitCompUnit(SysyParser::CompUnitContext *context) = 0;

    virtual antlrcpp::Any visitDecl(SysyParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitConstDecl(SysyParser::ConstDeclContext *context) = 0;

    virtual antlrcpp::Any visitBType(SysyParser::BTypeContext *context) = 0;

    virtual antlrcpp::Any visitConstDef(SysyParser::ConstDefContext *context) = 0;

    virtual antlrcpp::Any visitSingleConstInitVal(SysyParser::SingleConstInitValContext *context) = 0;

    virtual antlrcpp::Any visitMultiConstInitVal(SysyParser::MultiConstInitValContext *context) = 0;

    virtual antlrcpp::Any visitVarDecl(SysyParser::VarDeclContext *context) = 0;

    virtual antlrcpp::Any visitNoinitVarDef(SysyParser::NoinitVarDefContext *context) = 0;

    virtual antlrcpp::Any visitInitVarDef(SysyParser::InitVarDefContext *context) = 0;

    virtual antlrcpp::Any visitSingleInitVal(SysyParser::SingleInitValContext *context) = 0;

    virtual antlrcpp::Any visitMultiInitVal(SysyParser::MultiInitValContext *context) = 0;

    virtual antlrcpp::Any visitFuncDef(SysyParser::FuncDefContext *context) = 0;

    virtual antlrcpp::Any visitFuncType(SysyParser::FuncTypeContext *context) = 0;

    virtual antlrcpp::Any visitFuncFParams(SysyParser::FuncFParamsContext *context) = 0;

    virtual antlrcpp::Any visitFuncFParam(SysyParser::FuncFParamContext *context) = 0;

    virtual antlrcpp::Any visitBlock(SysyParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockItem(SysyParser::BlockItemContext *context) = 0;

    virtual antlrcpp::Any visitAssignStmt(SysyParser::AssignStmtContext *context) = 0;

    virtual antlrcpp::Any visitExpStmt(SysyParser::ExpStmtContext *context) = 0;

    virtual antlrcpp::Any visitBlockStmt(SysyParser::BlockStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(SysyParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfElseStmt(SysyParser::IfElseStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(SysyParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(SysyParser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitContinueStmt(SysyParser::ContinueStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(SysyParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitExp(SysyParser::ExpContext *context) = 0;

    virtual antlrcpp::Any visitCond(SysyParser::CondContext *context) = 0;

    virtual antlrcpp::Any visitLVal(SysyParser::LValContext *context) = 0;

    virtual antlrcpp::Any visitParensPrimaryExp(SysyParser::ParensPrimaryExpContext *context) = 0;

    virtual antlrcpp::Any visitLValPrimaryExp(SysyParser::LValPrimaryExpContext *context) = 0;

    virtual antlrcpp::Any visitNumberPrimaryExp(SysyParser::NumberPrimaryExpContext *context) = 0;

    virtual antlrcpp::Any visitNumber(SysyParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryUnaryExp(SysyParser::PrimaryUnaryExpContext *context) = 0;

    virtual antlrcpp::Any visitFuncCallUnaryExp(SysyParser::FuncCallUnaryExpContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOpUnaryExp(SysyParser::UnaryOpUnaryExpContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOp(SysyParser::UnaryOpContext *context) = 0;

    virtual antlrcpp::Any visitFuncRParams(SysyParser::FuncRParamsContext *context) = 0;

    virtual antlrcpp::Any visitMulMulExp(SysyParser::MulMulExpContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMulExp(SysyParser::UnaryMulExpContext *context) = 0;

    virtual antlrcpp::Any visitAddAddExp(SysyParser::AddAddExpContext *context) = 0;

    virtual antlrcpp::Any visitMulAddExp(SysyParser::MulAddExpContext *context) = 0;

    virtual antlrcpp::Any visitRelRelExp(SysyParser::RelRelExpContext *context) = 0;

    virtual antlrcpp::Any visitAddRelExp(SysyParser::AddRelExpContext *context) = 0;

    virtual antlrcpp::Any visitEqEqExp(SysyParser::EqEqExpContext *context) = 0;

    virtual antlrcpp::Any visitRelEqExp(SysyParser::RelEqExpContext *context) = 0;

    virtual antlrcpp::Any visitEqLAndExp(SysyParser::EqLAndExpContext *context) = 0;

    virtual antlrcpp::Any visitLAndLAndExp(SysyParser::LAndLAndExpContext *context) = 0;

    virtual antlrcpp::Any visitLAndLOrExp(SysyParser::LAndLOrExpContext *context) = 0;

    virtual antlrcpp::Any visitLOrLOrExp(SysyParser::LOrLOrExpContext *context) = 0;

    virtual antlrcpp::Any visitConstExp(SysyParser::ConstExpContext *context) = 0;

    virtual antlrcpp::Any visitEpsilon(SysyParser::EpsilonContext *context) = 0;


};

