
// Generated from Sysy.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "SysyVisitor.h"


/**
 * This class provides an empty implementation of SysyVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SysyBaseVisitor : public SysyVisitor {
public:

  virtual antlrcpp::Any visitCompUnit(SysyParser::CompUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(SysyParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDecl(SysyParser::ConstDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBType(SysyParser::BTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDef(SysyParser::ConstDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleConstInitVal(SysyParser::SingleConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiConstInitVal(SysyParser::MultiConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDecl(SysyParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoinitVarDef(SysyParser::NoinitVarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitVarDef(SysyParser::InitVarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleInitVal(SysyParser::SingleInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiInitVal(SysyParser::MultiInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDef(SysyParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncType(SysyParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncFParams(SysyParser::FuncFParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncFParam(SysyParser::FuncFParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(SysyParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockItem(SysyParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignStmt(SysyParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpStmt(SysyParser::ExpStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStmt(SysyParser::BlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(SysyParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfElseStmt(SysyParser::IfElseStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(SysyParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(SysyParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStmt(SysyParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(SysyParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExp(SysyParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCond(SysyParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLVal(SysyParser::LValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParensPrimaryExp(SysyParser::ParensPrimaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLValPrimaryExp(SysyParser::LValPrimaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberPrimaryExp(SysyParser::NumberPrimaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(SysyParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryUnaryExp(SysyParser::PrimaryUnaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncCallUnaryExp(SysyParser::FuncCallUnaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOpUnaryExp(SysyParser::UnaryOpUnaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOp(SysyParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncRParams(SysyParser::FuncRParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulMulExp(SysyParser::MulMulExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryMulExp(SysyParser::UnaryMulExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddAddExp(SysyParser::AddAddExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulAddExp(SysyParser::MulAddExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelRelExp(SysyParser::RelRelExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddRelExp(SysyParser::AddRelExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqEqExp(SysyParser::EqEqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelEqExp(SysyParser::RelEqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqLAndExp(SysyParser::EqLAndExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLAndLAndExp(SysyParser::LAndLAndExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLAndLOrExp(SysyParser::LAndLOrExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLOrLOrExp(SysyParser::LOrLOrExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstExp(SysyParser::ConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEpsilon(SysyParser::EpsilonContext *ctx) override {
    return visitChildren(ctx);
  }


};

