
// Generated from Sysy.g4 by ANTLR 4.9.3


#include "SysyListener.h"
#include "SysyVisitor.h"

#include "SysyParser.h"


using namespace antlrcpp;
using namespace antlr4;

SysyParser::SysyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SysyParser::~SysyParser() {
  delete _interpreter;
}

std::string SysyParser::getGrammarFileName() const {
  return "Sysy.g4";
}

const std::vector<std::string>& SysyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SysyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompUnitContext ------------------------------------------------------------------

SysyParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::DeclContext *> SysyParser::CompUnitContext::decl() {
  return getRuleContexts<SysyParser::DeclContext>();
}

SysyParser::DeclContext* SysyParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<SysyParser::DeclContext>(i);
}

std::vector<SysyParser::FuncDefContext *> SysyParser::CompUnitContext::funcDef() {
  return getRuleContexts<SysyParser::FuncDefContext>();
}

SysyParser::FuncDefContext* SysyParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<SysyParser::FuncDefContext>(i);
}


size_t SysyParser::CompUnitContext::getRuleIndex() const {
  return SysyParser::RuleCompUnit;
}

void SysyParser::CompUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompUnit(this);
}

void SysyParser::CompUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompUnit(this);
}


antlrcpp::Any SysyParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::CompUnitContext* SysyParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SysyParser::RuleCompUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::T__0)
      | (1ULL << SysyParser::T__3)
      | (1ULL << SysyParser::T__4)
      | (1ULL << SysyParser::T__12))) != 0)) {
      setState(66);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(64);
        decl();
        break;
      }

      case 2: {
        setState(65);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

SysyParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::ConstDeclContext* SysyParser::DeclContext::constDecl() {
  return getRuleContext<SysyParser::ConstDeclContext>(0);
}

SysyParser::VarDeclContext* SysyParser::DeclContext::varDecl() {
  return getRuleContext<SysyParser::VarDeclContext>(0);
}


size_t SysyParser::DeclContext::getRuleIndex() const {
  return SysyParser::RuleDecl;
}

void SysyParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void SysyParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


antlrcpp::Any SysyParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::DeclContext* SysyParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, SysyParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(71);
        constDecl();
        break;
      }

      case SysyParser::T__3:
      case SysyParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(72);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclContext ------------------------------------------------------------------

SysyParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::BTypeContext* SysyParser::ConstDeclContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

std::vector<SysyParser::ConstDefContext *> SysyParser::ConstDeclContext::constDef() {
  return getRuleContexts<SysyParser::ConstDefContext>();
}

SysyParser::ConstDefContext* SysyParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<SysyParser::ConstDefContext>(i);
}


size_t SysyParser::ConstDeclContext::getRuleIndex() const {
  return SysyParser::RuleConstDecl;
}

void SysyParser::ConstDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDecl(this);
}

void SysyParser::ConstDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDecl(this);
}


antlrcpp::Any SysyParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ConstDeclContext* SysyParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, SysyParser::RuleConstDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(SysyParser::T__0);
    setState(76);
    bType();
    setState(77);
    constDef();
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::T__1) {
      setState(78);
      match(SysyParser::T__1);
      setState(79);
      constDef();
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(85);
    match(SysyParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

SysyParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::BTypeContext::getRuleIndex() const {
  return SysyParser::RuleBType;
}

void SysyParser::BTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBType(this);
}

void SysyParser::BTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBType(this);
}


antlrcpp::Any SysyParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::BTypeContext* SysyParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, SysyParser::RuleBType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    _la = _input->LA(1);
    if (!(_la == SysyParser::T__3

    || _la == SysyParser::T__4)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

SysyParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::ConstDefContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

SysyParser::ConstInitValContext* SysyParser::ConstDefContext::constInitVal() {
  return getRuleContext<SysyParser::ConstInitValContext>(0);
}

std::vector<SysyParser::ConstExpContext *> SysyParser::ConstDefContext::constExp() {
  return getRuleContexts<SysyParser::ConstExpContext>();
}

SysyParser::ConstExpContext* SysyParser::ConstDefContext::constExp(size_t i) {
  return getRuleContext<SysyParser::ConstExpContext>(i);
}


size_t SysyParser::ConstDefContext::getRuleIndex() const {
  return SysyParser::RuleConstDef;
}

void SysyParser::ConstDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDef(this);
}

void SysyParser::ConstDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDef(this);
}


antlrcpp::Any SysyParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ConstDefContext* SysyParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 8, SysyParser::RuleConstDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(SysyParser::Ident);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::T__5) {
      setState(90);
      match(SysyParser::T__5);
      setState(91);
      constExp();
      setState(92);
      match(SysyParser::T__6);
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(99);
    match(SysyParser::T__7);
    setState(100);
    constInitVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValContext ------------------------------------------------------------------

SysyParser::ConstInitValContext::ConstInitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::ConstInitValContext::getRuleIndex() const {
  return SysyParser::RuleConstInitVal;
}

void SysyParser::ConstInitValContext::copyFrom(ConstInitValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SingleConstInitValContext ------------------------------------------------------------------

SysyParser::ConstExpContext* SysyParser::SingleConstInitValContext::constExp() {
  return getRuleContext<SysyParser::ConstExpContext>(0);
}

SysyParser::SingleConstInitValContext::SingleConstInitValContext(ConstInitValContext *ctx) { copyFrom(ctx); }

void SysyParser::SingleConstInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleConstInitVal(this);
}
void SysyParser::SingleConstInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleConstInitVal(this);
}

antlrcpp::Any SysyParser::SingleConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitSingleConstInitVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiConstInitValContext ------------------------------------------------------------------

std::vector<SysyParser::ConstInitValContext *> SysyParser::MultiConstInitValContext::constInitVal() {
  return getRuleContexts<SysyParser::ConstInitValContext>();
}

SysyParser::ConstInitValContext* SysyParser::MultiConstInitValContext::constInitVal(size_t i) {
  return getRuleContext<SysyParser::ConstInitValContext>(i);
}

SysyParser::MultiConstInitValContext::MultiConstInitValContext(ConstInitValContext *ctx) { copyFrom(ctx); }

void SysyParser::MultiConstInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiConstInitVal(this);
}
void SysyParser::MultiConstInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiConstInitVal(this);
}

antlrcpp::Any SysyParser::MultiConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitMultiConstInitVal(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::ConstInitValContext* SysyParser::constInitVal() {
  ConstInitValContext *_localctx = _tracker.createInstance<ConstInitValContext>(_ctx, getState());
  enterRule(_localctx, 10, SysyParser::RuleConstInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::T__10:
      case SysyParser::T__19:
      case SysyParser::T__20:
      case SysyParser::T__21:
      case SysyParser::Ident:
      case SysyParser::IntConst:
      case SysyParser::FloatConst: {
        _localctx = _tracker.createInstance<SysyParser::SingleConstInitValContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(102);
        constExp();
        break;
      }

      case SysyParser::T__8: {
        _localctx = _tracker.createInstance<SysyParser::MultiConstInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(103);
        match(SysyParser::T__8);
        setState(112);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::T__8)
          | (1ULL << SysyParser::T__10)
          | (1ULL << SysyParser::T__19)
          | (1ULL << SysyParser::T__20)
          | (1ULL << SysyParser::T__21)
          | (1ULL << SysyParser::Ident)
          | (1ULL << SysyParser::IntConst)
          | (1ULL << SysyParser::FloatConst))) != 0)) {
          setState(104);
          constInitVal();
          setState(109);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysyParser::T__1) {
            setState(105);
            match(SysyParser::T__1);
            setState(106);
            constInitVal();
            setState(111);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(114);
        match(SysyParser::T__9);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

SysyParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::BTypeContext* SysyParser::VarDeclContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

std::vector<SysyParser::VarDefContext *> SysyParser::VarDeclContext::varDef() {
  return getRuleContexts<SysyParser::VarDefContext>();
}

SysyParser::VarDefContext* SysyParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<SysyParser::VarDefContext>(i);
}


size_t SysyParser::VarDeclContext::getRuleIndex() const {
  return SysyParser::RuleVarDecl;
}

void SysyParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void SysyParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


antlrcpp::Any SysyParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::VarDeclContext* SysyParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, SysyParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    bType();
    setState(118);
    varDef();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::T__1) {
      setState(119);
      match(SysyParser::T__1);
      setState(120);
      varDef();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
    match(SysyParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

SysyParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::VarDefContext::getRuleIndex() const {
  return SysyParser::RuleVarDef;
}

void SysyParser::VarDefContext::copyFrom(VarDefContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NoinitVarDefContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::NoinitVarDefContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

std::vector<SysyParser::ConstExpContext *> SysyParser::NoinitVarDefContext::constExp() {
  return getRuleContexts<SysyParser::ConstExpContext>();
}

SysyParser::ConstExpContext* SysyParser::NoinitVarDefContext::constExp(size_t i) {
  return getRuleContext<SysyParser::ConstExpContext>(i);
}

SysyParser::NoinitVarDefContext::NoinitVarDefContext(VarDefContext *ctx) { copyFrom(ctx); }

void SysyParser::NoinitVarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoinitVarDef(this);
}
void SysyParser::NoinitVarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoinitVarDef(this);
}

antlrcpp::Any SysyParser::NoinitVarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitNoinitVarDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitVarDefContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::InitVarDefContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

SysyParser::InitValContext* SysyParser::InitVarDefContext::initVal() {
  return getRuleContext<SysyParser::InitValContext>(0);
}

std::vector<SysyParser::ConstExpContext *> SysyParser::InitVarDefContext::constExp() {
  return getRuleContexts<SysyParser::ConstExpContext>();
}

SysyParser::ConstExpContext* SysyParser::InitVarDefContext::constExp(size_t i) {
  return getRuleContext<SysyParser::ConstExpContext>(i);
}

SysyParser::InitVarDefContext::InitVarDefContext(VarDefContext *ctx) { copyFrom(ctx); }

void SysyParser::InitVarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitVarDef(this);
}
void SysyParser::InitVarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitVarDef(this);
}

antlrcpp::Any SysyParser::InitVarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitInitVarDef(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::VarDefContext* SysyParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 14, SysyParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysyParser::NoinitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(128);
      match(SysyParser::Ident);
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysyParser::T__5) {
        setState(129);
        match(SysyParser::T__5);
        setState(130);
        constExp();
        setState(131);
        match(SysyParser::T__6);
        setState(137);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysyParser::InitVarDefContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(138);
      match(SysyParser::Ident);
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysyParser::T__5) {
        setState(139);
        match(SysyParser::T__5);
        setState(140);
        constExp();
        setState(141);
        match(SysyParser::T__6);
        setState(147);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(148);
      match(SysyParser::T__7);
      setState(149);
      initVal();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitValContext ------------------------------------------------------------------

SysyParser::InitValContext::InitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::InitValContext::getRuleIndex() const {
  return SysyParser::RuleInitVal;
}

void SysyParser::InitValContext::copyFrom(InitValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SingleInitValContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::SingleInitValContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::SingleInitValContext::SingleInitValContext(InitValContext *ctx) { copyFrom(ctx); }

void SysyParser::SingleInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleInitVal(this);
}
void SysyParser::SingleInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleInitVal(this);
}

antlrcpp::Any SysyParser::SingleInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitSingleInitVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiInitValContext ------------------------------------------------------------------

std::vector<SysyParser::InitValContext *> SysyParser::MultiInitValContext::initVal() {
  return getRuleContexts<SysyParser::InitValContext>();
}

SysyParser::InitValContext* SysyParser::MultiInitValContext::initVal(size_t i) {
  return getRuleContext<SysyParser::InitValContext>(i);
}

SysyParser::MultiInitValContext::MultiInitValContext(InitValContext *ctx) { copyFrom(ctx); }

void SysyParser::MultiInitValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiInitVal(this);
}
void SysyParser::MultiInitValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiInitVal(this);
}

antlrcpp::Any SysyParser::MultiInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitMultiInitVal(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::InitValContext* SysyParser::initVal() {
  InitValContext *_localctx = _tracker.createInstance<InitValContext>(_ctx, getState());
  enterRule(_localctx, 16, SysyParser::RuleInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::T__10:
      case SysyParser::T__19:
      case SysyParser::T__20:
      case SysyParser::T__21:
      case SysyParser::Ident:
      case SysyParser::IntConst:
      case SysyParser::FloatConst: {
        _localctx = _tracker.createInstance<SysyParser::SingleInitValContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(152);
        exp();
        break;
      }

      case SysyParser::T__8: {
        _localctx = _tracker.createInstance<SysyParser::MultiInitValContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(153);
        match(SysyParser::T__8);
        setState(162);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::T__8)
          | (1ULL << SysyParser::T__10)
          | (1ULL << SysyParser::T__19)
          | (1ULL << SysyParser::T__20)
          | (1ULL << SysyParser::T__21)
          | (1ULL << SysyParser::Ident)
          | (1ULL << SysyParser::IntConst)
          | (1ULL << SysyParser::FloatConst))) != 0)) {
          setState(154);
          initVal();
          setState(159);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysyParser::T__1) {
            setState(155);
            match(SysyParser::T__1);
            setState(156);
            initVal();
            setState(161);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(164);
        match(SysyParser::T__9);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

SysyParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::FuncTypeContext* SysyParser::FuncDefContext::funcType() {
  return getRuleContext<SysyParser::FuncTypeContext>(0);
}

tree::TerminalNode* SysyParser::FuncDefContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

SysyParser::BlockContext* SysyParser::FuncDefContext::block() {
  return getRuleContext<SysyParser::BlockContext>(0);
}

SysyParser::FuncFParamsContext* SysyParser::FuncDefContext::funcFParams() {
  return getRuleContext<SysyParser::FuncFParamsContext>(0);
}


size_t SysyParser::FuncDefContext::getRuleIndex() const {
  return SysyParser::RuleFuncDef;
}

void SysyParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void SysyParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}


antlrcpp::Any SysyParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncDefContext* SysyParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 18, SysyParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    funcType();
    setState(168);
    match(SysyParser::Ident);
    setState(169);
    match(SysyParser::T__10);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysyParser::T__3

    || _la == SysyParser::T__4) {
      setState(170);
      funcFParams();
    }
    setState(173);
    match(SysyParser::T__11);
    setState(174);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

SysyParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::FuncTypeContext::getRuleIndex() const {
  return SysyParser::RuleFuncType;
}

void SysyParser::FuncTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncType(this);
}

void SysyParser::FuncTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncType(this);
}


antlrcpp::Any SysyParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncTypeContext* SysyParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, SysyParser::RuleFuncType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::T__3)
      | (1ULL << SysyParser::T__4)
      | (1ULL << SysyParser::T__12))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamsContext ------------------------------------------------------------------

SysyParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::FuncFParamContext *> SysyParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<SysyParser::FuncFParamContext>();
}

SysyParser::FuncFParamContext* SysyParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<SysyParser::FuncFParamContext>(i);
}


size_t SysyParser::FuncFParamsContext::getRuleIndex() const {
  return SysyParser::RuleFuncFParams;
}

void SysyParser::FuncFParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncFParams(this);
}

void SysyParser::FuncFParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncFParams(this);
}


antlrcpp::Any SysyParser::FuncFParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncFParams(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncFParamsContext* SysyParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 22, SysyParser::RuleFuncFParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    funcFParam();
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::T__1) {
      setState(179);
      match(SysyParser::T__1);
      setState(180);
      funcFParam();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamContext ------------------------------------------------------------------

SysyParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::BTypeContext* SysyParser::FuncFParamContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

tree::TerminalNode* SysyParser::FuncFParamContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

SysyParser::EpsilonContext* SysyParser::FuncFParamContext::epsilon() {
  return getRuleContext<SysyParser::EpsilonContext>(0);
}

std::vector<SysyParser::ExpContext *> SysyParser::FuncFParamContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::FuncFParamContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}


size_t SysyParser::FuncFParamContext::getRuleIndex() const {
  return SysyParser::RuleFuncFParam;
}

void SysyParser::FuncFParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncFParam(this);
}

void SysyParser::FuncFParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncFParam(this);
}


antlrcpp::Any SysyParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncFParamContext* SysyParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 24, SysyParser::RuleFuncFParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    bType();
    setState(187);
    match(SysyParser::Ident);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysyParser::T__5) {
      setState(188);
      match(SysyParser::T__5);
      setState(189);
      epsilon();
      setState(190);
      match(SysyParser::T__6);
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysyParser::T__5) {
        setState(191);
        match(SysyParser::T__5);
        setState(192);
        exp();
        setState(193);
        match(SysyParser::T__6);
        setState(199);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SysyParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::BlockItemContext *> SysyParser::BlockContext::blockItem() {
  return getRuleContexts<SysyParser::BlockItemContext>();
}

SysyParser::BlockItemContext* SysyParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<SysyParser::BlockItemContext>(i);
}


size_t SysyParser::BlockContext::getRuleIndex() const {
  return SysyParser::RuleBlock;
}

void SysyParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SysyParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any SysyParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::BlockContext* SysyParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, SysyParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(SysyParser::T__8);
    setState(206);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::T__0)
      | (1ULL << SysyParser::T__2)
      | (1ULL << SysyParser::T__3)
      | (1ULL << SysyParser::T__4)
      | (1ULL << SysyParser::T__8)
      | (1ULL << SysyParser::T__10)
      | (1ULL << SysyParser::T__13)
      | (1ULL << SysyParser::T__15)
      | (1ULL << SysyParser::T__16)
      | (1ULL << SysyParser::T__17)
      | (1ULL << SysyParser::T__18)
      | (1ULL << SysyParser::T__19)
      | (1ULL << SysyParser::T__20)
      | (1ULL << SysyParser::T__21)
      | (1ULL << SysyParser::Ident)
      | (1ULL << SysyParser::IntConst)
      | (1ULL << SysyParser::FloatConst))) != 0)) {
      setState(203);
      blockItem();
      setState(208);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(209);
    match(SysyParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

SysyParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::DeclContext* SysyParser::BlockItemContext::decl() {
  return getRuleContext<SysyParser::DeclContext>(0);
}

SysyParser::StmtContext* SysyParser::BlockItemContext::stmt() {
  return getRuleContext<SysyParser::StmtContext>(0);
}


size_t SysyParser::BlockItemContext::getRuleIndex() const {
  return SysyParser::RuleBlockItem;
}

void SysyParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void SysyParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


antlrcpp::Any SysyParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::BlockItemContext* SysyParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 28, SysyParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(213);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::T__0:
      case SysyParser::T__3:
      case SysyParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(211);
        decl();
        break;
      }

      case SysyParser::T__2:
      case SysyParser::T__8:
      case SysyParser::T__10:
      case SysyParser::T__13:
      case SysyParser::T__15:
      case SysyParser::T__16:
      case SysyParser::T__17:
      case SysyParser::T__18:
      case SysyParser::T__19:
      case SysyParser::T__20:
      case SysyParser::T__21:
      case SysyParser::Ident:
      case SysyParser::IntConst:
      case SysyParser::FloatConst: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

SysyParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::StmtContext::getRuleIndex() const {
  return SysyParser::RuleStmt;
}

void SysyParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStmtContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::WhileStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::StmtContext* SysyParser::WhileStmtContext::stmt() {
  return getRuleContext<SysyParser::StmtContext>(0);
}

SysyParser::WhileStmtContext::WhileStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}
void SysyParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}

antlrcpp::Any SysyParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::IfStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::StmtContext* SysyParser::IfStmtContext::stmt() {
  return getRuleContext<SysyParser::StmtContext>(0);
}

SysyParser::IfStmtContext::IfStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void SysyParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

antlrcpp::Any SysyParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

SysyParser::BlockContext* SysyParser::BlockStmtContext::block() {
  return getRuleContext<SysyParser::BlockContext>(0);
}

SysyParser::BlockStmtContext::BlockStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::BlockStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStmt(this);
}
void SysyParser::BlockStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStmt(this);
}

antlrcpp::Any SysyParser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseStmtContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::IfElseStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

std::vector<SysyParser::StmtContext *> SysyParser::IfElseStmtContext::stmt() {
  return getRuleContexts<SysyParser::StmtContext>();
}

SysyParser::StmtContext* SysyParser::IfElseStmtContext::stmt(size_t i) {
  return getRuleContext<SysyParser::StmtContext>(i);
}

SysyParser::IfElseStmtContext::IfElseStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::IfElseStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElseStmt(this);
}
void SysyParser::IfElseStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElseStmt(this);
}

antlrcpp::Any SysyParser::IfElseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitIfElseStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStmtContext ------------------------------------------------------------------

SysyParser::LValContext* SysyParser::AssignStmtContext::lVal() {
  return getRuleContext<SysyParser::LValContext>(0);
}

SysyParser::ExpContext* SysyParser::AssignStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::AssignStmtContext::AssignStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::AssignStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignStmt(this);
}
void SysyParser::AssignStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignStmt(this);
}

antlrcpp::Any SysyParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStmtContext ------------------------------------------------------------------

SysyParser::BreakStmtContext::BreakStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::BreakStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStmt(this);
}
void SysyParser::BreakStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStmt(this);
}

antlrcpp::Any SysyParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpStmtContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::ExpStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ExpStmtContext::ExpStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::ExpStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpStmt(this);
}
void SysyParser::ExpStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpStmt(this);
}

antlrcpp::Any SysyParser::ExpStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitExpStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::ReturnStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ReturnStmtContext::ReturnStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}
void SysyParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}

antlrcpp::Any SysyParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStmtContext ------------------------------------------------------------------

SysyParser::ContinueStmtContext::ContinueStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::ContinueStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStmt(this);
}
void SysyParser::ContinueStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStmt(this);
}

antlrcpp::Any SysyParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::StmtContext* SysyParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 30, SysyParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysyParser::AssignStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(215);
      lVal();
      setState(216);
      match(SysyParser::T__7);
      setState(217);
      exp();
      setState(218);
      match(SysyParser::T__2);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysyParser::ExpStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(221);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::T__10)
        | (1ULL << SysyParser::T__19)
        | (1ULL << SysyParser::T__20)
        | (1ULL << SysyParser::T__21)
        | (1ULL << SysyParser::Ident)
        | (1ULL << SysyParser::IntConst)
        | (1ULL << SysyParser::FloatConst))) != 0)) {
        setState(220);
        exp();
      }
      setState(223);
      match(SysyParser::T__2);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SysyParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(224);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<SysyParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(225);
      match(SysyParser::T__13);
      setState(226);
      match(SysyParser::T__10);
      setState(227);
      exp();
      setState(228);
      match(SysyParser::T__11);
      setState(229);
      stmt();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<SysyParser::IfElseStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(231);
      match(SysyParser::T__13);
      setState(232);
      match(SysyParser::T__10);
      setState(233);
      exp();
      setState(234);
      match(SysyParser::T__11);
      setState(235);
      stmt();

      setState(236);
      match(SysyParser::T__14);
      setState(237);
      stmt();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<SysyParser::WhileStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(239);
      match(SysyParser::T__15);
      setState(240);
      match(SysyParser::T__10);
      setState(241);
      exp();
      setState(242);
      match(SysyParser::T__11);
      setState(243);
      stmt();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<SysyParser::BreakStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(245);
      match(SysyParser::T__16);
      setState(246);
      match(SysyParser::T__2);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<SysyParser::ContinueStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(247);
      match(SysyParser::T__17);
      setState(248);
      match(SysyParser::T__2);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<SysyParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(249);
      match(SysyParser::T__18);
      setState(251);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::T__10)
        | (1ULL << SysyParser::T__19)
        | (1ULL << SysyParser::T__20)
        | (1ULL << SysyParser::T__21)
        | (1ULL << SysyParser::Ident)
        | (1ULL << SysyParser::IntConst)
        | (1ULL << SysyParser::FloatConst))) != 0)) {
        setState(250);
        exp();
      }
      setState(253);
      match(SysyParser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

SysyParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::CondContext* SysyParser::ExpContext::cond() {
  return getRuleContext<SysyParser::CondContext>(0);
}


size_t SysyParser::ExpContext::getRuleIndex() const {
  return SysyParser::RuleExp;
}

void SysyParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void SysyParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


antlrcpp::Any SysyParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ExpContext* SysyParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 32, SysyParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    cond();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

SysyParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::LOrExpContext* SysyParser::CondContext::lOrExp() {
  return getRuleContext<SysyParser::LOrExpContext>(0);
}


size_t SysyParser::CondContext::getRuleIndex() const {
  return SysyParser::RuleCond;
}

void SysyParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void SysyParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}


antlrcpp::Any SysyParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::CondContext* SysyParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 34, SysyParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    lOrExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

SysyParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::LValContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

std::vector<SysyParser::ExpContext *> SysyParser::LValContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::LValContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}


size_t SysyParser::LValContext::getRuleIndex() const {
  return SysyParser::RuleLVal;
}

void SysyParser::LValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLVal(this);
}

void SysyParser::LValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLVal(this);
}


antlrcpp::Any SysyParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::LValContext* SysyParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 36, SysyParser::RuleLVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(SysyParser::Ident);
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(261);
        match(SysyParser::T__5);
        setState(262);
        exp();
        setState(263);
        match(SysyParser::T__6); 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

SysyParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::PrimaryExpContext::getRuleIndex() const {
  return SysyParser::RulePrimaryExp;
}

void SysyParser::PrimaryExpContext::copyFrom(PrimaryExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LValPrimaryExpContext ------------------------------------------------------------------

SysyParser::LValContext* SysyParser::LValPrimaryExpContext::lVal() {
  return getRuleContext<SysyParser::LValContext>(0);
}

SysyParser::LValPrimaryExpContext::LValPrimaryExpContext(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LValPrimaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLValPrimaryExp(this);
}
void SysyParser::LValPrimaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLValPrimaryExp(this);
}

antlrcpp::Any SysyParser::LValPrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLValPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberPrimaryExpContext ------------------------------------------------------------------

SysyParser::NumberContext* SysyParser::NumberPrimaryExpContext::number() {
  return getRuleContext<SysyParser::NumberContext>(0);
}

SysyParser::NumberPrimaryExpContext::NumberPrimaryExpContext(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::NumberPrimaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberPrimaryExp(this);
}
void SysyParser::NumberPrimaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberPrimaryExp(this);
}

antlrcpp::Any SysyParser::NumberPrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitNumberPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensPrimaryExpContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::ParensPrimaryExpContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ParensPrimaryExpContext::ParensPrimaryExpContext(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::ParensPrimaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParensPrimaryExp(this);
}
void SysyParser::ParensPrimaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParensPrimaryExp(this);
}

antlrcpp::Any SysyParser::ParensPrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitParensPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::PrimaryExpContext* SysyParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 38, SysyParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::T__10: {
        _localctx = _tracker.createInstance<SysyParser::ParensPrimaryExpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(270);
        match(SysyParser::T__10);
        setState(271);
        exp();
        setState(272);
        match(SysyParser::T__11);
        break;
      }

      case SysyParser::Ident: {
        _localctx = _tracker.createInstance<SysyParser::LValPrimaryExpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(274);
        lVal();
        break;
      }

      case SysyParser::IntConst:
      case SysyParser::FloatConst: {
        _localctx = _tracker.createInstance<SysyParser::NumberPrimaryExpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(275);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SysyParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::NumberContext::IntConst() {
  return getToken(SysyParser::IntConst, 0);
}

tree::TerminalNode* SysyParser::NumberContext::FloatConst() {
  return getToken(SysyParser::FloatConst, 0);
}


size_t SysyParser::NumberContext::getRuleIndex() const {
  return SysyParser::RuleNumber;
}

void SysyParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void SysyParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any SysyParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::NumberContext* SysyParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 40, SysyParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    _la = _input->LA(1);
    if (!(_la == SysyParser::IntConst

    || _la == SysyParser::FloatConst)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

SysyParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::UnaryExpContext::getRuleIndex() const {
  return SysyParser::RuleUnaryExp;
}

void SysyParser::UnaryExpContext::copyFrom(UnaryExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryOpUnaryExpContext ------------------------------------------------------------------

SysyParser::UnaryOpContext* SysyParser::UnaryOpUnaryExpContext::unaryOp() {
  return getRuleContext<SysyParser::UnaryOpContext>(0);
}

SysyParser::UnaryExpContext* SysyParser::UnaryOpUnaryExpContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::UnaryOpUnaryExpContext::UnaryOpUnaryExpContext(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::UnaryOpUnaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOpUnaryExp(this);
}
void SysyParser::UnaryOpUnaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOpUnaryExp(this);
}

antlrcpp::Any SysyParser::UnaryOpUnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUnaryOpUnaryExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallUnaryExpContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::FuncCallUnaryExpContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

SysyParser::FuncRParamsContext* SysyParser::FuncCallUnaryExpContext::funcRParams() {
  return getRuleContext<SysyParser::FuncRParamsContext>(0);
}

SysyParser::FuncCallUnaryExpContext::FuncCallUnaryExpContext(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::FuncCallUnaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallUnaryExp(this);
}
void SysyParser::FuncCallUnaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallUnaryExp(this);
}

antlrcpp::Any SysyParser::FuncCallUnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncCallUnaryExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryUnaryExpContext ------------------------------------------------------------------

SysyParser::PrimaryExpContext* SysyParser::PrimaryUnaryExpContext::primaryExp() {
  return getRuleContext<SysyParser::PrimaryExpContext>(0);
}

SysyParser::PrimaryUnaryExpContext::PrimaryUnaryExpContext(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::PrimaryUnaryExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryUnaryExp(this);
}
void SysyParser::PrimaryUnaryExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryUnaryExp(this);
}

antlrcpp::Any SysyParser::PrimaryUnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitPrimaryUnaryExp(this);
  else
    return visitor->visitChildren(this);
}
SysyParser::UnaryExpContext* SysyParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 42, SysyParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<SysyParser::PrimaryUnaryExpContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(280);
      primaryExp();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SysyParser::FuncCallUnaryExpContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(281);
      match(SysyParser::Ident);
      setState(282);
      match(SysyParser::T__10);
      setState(284);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::T__10)
        | (1ULL << SysyParser::T__19)
        | (1ULL << SysyParser::T__20)
        | (1ULL << SysyParser::T__21)
        | (1ULL << SysyParser::Ident)
        | (1ULL << SysyParser::IntConst)
        | (1ULL << SysyParser::FloatConst))) != 0)) {
        setState(283);
        funcRParams();
      }
      setState(286);
      match(SysyParser::T__11);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SysyParser::UnaryOpUnaryExpContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(287);
      unaryOp();
      setState(288);
      unaryExp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOpContext ------------------------------------------------------------------

SysyParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::UnaryOpContext::getRuleIndex() const {
  return SysyParser::RuleUnaryOp;
}

void SysyParser::UnaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOp(this);
}

void SysyParser::UnaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOp(this);
}


antlrcpp::Any SysyParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::UnaryOpContext* SysyParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 44, SysyParser::RuleUnaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::T__19)
      | (1ULL << SysyParser::T__20)
      | (1ULL << SysyParser::T__21))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamsContext ------------------------------------------------------------------

SysyParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::ExpContext *> SysyParser::FuncRParamsContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::FuncRParamsContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}


size_t SysyParser::FuncRParamsContext::getRuleIndex() const {
  return SysyParser::RuleFuncRParams;
}

void SysyParser::FuncRParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncRParams(this);
}

void SysyParser::FuncRParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncRParams(this);
}


antlrcpp::Any SysyParser::FuncRParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitFuncRParams(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::FuncRParamsContext* SysyParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 46, SysyParser::RuleFuncRParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    exp();
    setState(299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::T__1) {
      setState(295);
      match(SysyParser::T__1);
      setState(296);
      exp();
      setState(301);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

SysyParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::MulExpContext::getRuleIndex() const {
  return SysyParser::RuleMulExp;
}

void SysyParser::MulExpContext::copyFrom(MulExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MulMulExpContext ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::MulMulExpContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::UnaryExpContext* SysyParser::MulMulExpContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::MulMulExpContext::MulMulExpContext(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::MulMulExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulMulExp(this);
}
void SysyParser::MulMulExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulMulExp(this);
}

antlrcpp::Any SysyParser::MulMulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitMulMulExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMulExpContext ------------------------------------------------------------------

SysyParser::UnaryExpContext* SysyParser::UnaryMulExpContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::UnaryMulExpContext::UnaryMulExpContext(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::UnaryMulExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMulExp(this);
}
void SysyParser::UnaryMulExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMulExp(this);
}

antlrcpp::Any SysyParser::UnaryMulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitUnaryMulExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::MulExpContext* SysyParser::mulExp() {
   return mulExp(0);
}

SysyParser::MulExpContext* SysyParser::mulExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, parentState);
  SysyParser::MulExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, SysyParser::RuleMulExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<UnaryMulExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(303);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(310);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MulMulExpContext>(_tracker.createInstance<MulExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleMulExp);
        setState(305);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(306);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::T__22)
          | (1ULL << SysyParser::T__23)
          | (1ULL << SysyParser::T__24))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(307);
        unaryExp(); 
      }
      setState(312);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

SysyParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::AddExpContext::getRuleIndex() const {
  return SysyParser::RuleAddExp;
}

void SysyParser::AddExpContext::copyFrom(AddExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddAddExpContext ------------------------------------------------------------------

SysyParser::AddExpContext* SysyParser::AddAddExpContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::MulExpContext* SysyParser::AddAddExpContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::AddAddExpContext::AddAddExpContext(AddExpContext *ctx) { copyFrom(ctx); }

void SysyParser::AddAddExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAddExp(this);
}
void SysyParser::AddAddExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAddExp(this);
}

antlrcpp::Any SysyParser::AddAddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitAddAddExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulAddExpContext ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::MulAddExpContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::MulAddExpContext::MulAddExpContext(AddExpContext *ctx) { copyFrom(ctx); }

void SysyParser::MulAddExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulAddExp(this);
}
void SysyParser::MulAddExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulAddExp(this);
}

antlrcpp::Any SysyParser::MulAddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitMulAddExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::AddExpContext* SysyParser::addExp() {
   return addExp(0);
}

SysyParser::AddExpContext* SysyParser::addExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, parentState);
  SysyParser::AddExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, SysyParser::RuleAddExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<MulAddExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(314);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(321);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AddAddExpContext>(_tracker.createInstance<AddExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleAddExp);
        setState(316);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(317);
        _la = _input->LA(1);
        if (!(_la == SysyParser::T__19

        || _la == SysyParser::T__20)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(318);
        mulExp(0); 
      }
      setState(323);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

SysyParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::RelExpContext::getRuleIndex() const {
  return SysyParser::RuleRelExp;
}

void SysyParser::RelExpContext::copyFrom(RelExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RelRelExpContext ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::RelRelExpContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::AddExpContext* SysyParser::RelRelExpContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::RelRelExpContext::RelRelExpContext(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::RelRelExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelRelExp(this);
}
void SysyParser::RelRelExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelRelExp(this);
}

antlrcpp::Any SysyParser::RelRelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitRelRelExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddRelExpContext ------------------------------------------------------------------

SysyParser::AddExpContext* SysyParser::AddRelExpContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::AddRelExpContext::AddRelExpContext(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::AddRelExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddRelExp(this);
}
void SysyParser::AddRelExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddRelExp(this);
}

antlrcpp::Any SysyParser::AddRelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitAddRelExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::RelExpContext* SysyParser::relExp() {
   return relExp(0);
}

SysyParser::RelExpContext* SysyParser::relExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, parentState);
  SysyParser::RelExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, SysyParser::RuleRelExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<AddRelExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(325);
    addExp(0);
    _ctx->stop = _input->LT(-1);
    setState(332);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<RelRelExpContext>(_tracker.createInstance<RelExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleRelExp);
        setState(327);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(328);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::T__25)
          | (1ULL << SysyParser::T__26)
          | (1ULL << SysyParser::T__27)
          | (1ULL << SysyParser::T__28))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(329);
        addExp(0); 
      }
      setState(334);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqExpContext ------------------------------------------------------------------

SysyParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::EqExpContext::getRuleIndex() const {
  return SysyParser::RuleEqExp;
}

void SysyParser::EqExpContext::copyFrom(EqExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EqEqExpContext ------------------------------------------------------------------

SysyParser::EqExpContext* SysyParser::EqEqExpContext::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::RelExpContext* SysyParser::EqEqExpContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::EqEqExpContext::EqEqExpContext(EqExpContext *ctx) { copyFrom(ctx); }

void SysyParser::EqEqExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqEqExp(this);
}
void SysyParser::EqEqExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqEqExp(this);
}

antlrcpp::Any SysyParser::EqEqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitEqEqExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelEqExpContext ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::RelEqExpContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::RelEqExpContext::RelEqExpContext(EqExpContext *ctx) { copyFrom(ctx); }

void SysyParser::RelEqExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelEqExp(this);
}
void SysyParser::RelEqExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelEqExp(this);
}

antlrcpp::Any SysyParser::RelEqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitRelEqExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::EqExpContext* SysyParser::eqExp() {
   return eqExp(0);
}

SysyParser::EqExpContext* SysyParser::eqExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, parentState);
  SysyParser::EqExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, SysyParser::RuleEqExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<RelEqExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(336);
    relExp(0);
    _ctx->stop = _input->LT(-1);
    setState(343);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<EqEqExpContext>(_tracker.createInstance<EqExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleEqExp);
        setState(338);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(339);
        _la = _input->LA(1);
        if (!(_la == SysyParser::T__29

        || _la == SysyParser::T__30)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(340);
        relExp(0); 
      }
      setState(345);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LAndExpContext ------------------------------------------------------------------

SysyParser::LAndExpContext::LAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::LAndExpContext::getRuleIndex() const {
  return SysyParser::RuleLAndExp;
}

void SysyParser::LAndExpContext::copyFrom(LAndExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EqLAndExpContext ------------------------------------------------------------------

SysyParser::EqExpContext* SysyParser::EqLAndExpContext::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::EqLAndExpContext::EqLAndExpContext(LAndExpContext *ctx) { copyFrom(ctx); }

void SysyParser::EqLAndExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqLAndExp(this);
}
void SysyParser::EqLAndExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqLAndExp(this);
}

antlrcpp::Any SysyParser::EqLAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitEqLAndExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LAndLAndExpContext ------------------------------------------------------------------

SysyParser::LAndExpContext* SysyParser::LAndLAndExpContext::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

SysyParser::EqExpContext* SysyParser::LAndLAndExpContext::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::LAndLAndExpContext::LAndLAndExpContext(LAndExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LAndLAndExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLAndLAndExp(this);
}
void SysyParser::LAndLAndExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLAndLAndExp(this);
}

antlrcpp::Any SysyParser::LAndLAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLAndLAndExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::LAndExpContext* SysyParser::lAndExp() {
   return lAndExp(0);
}

SysyParser::LAndExpContext* SysyParser::lAndExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::LAndExpContext *_localctx = _tracker.createInstance<LAndExpContext>(_ctx, parentState);
  SysyParser::LAndExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, SysyParser::RuleLAndExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<EqLAndExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(347);
    eqExp(0);
    _ctx->stop = _input->LT(-1);
    setState(354);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LAndLAndExpContext>(_tracker.createInstance<LAndExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLAndExp);
        setState(349);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(350);
        match(SysyParser::T__31);
        setState(351);
        eqExp(0); 
      }
      setState(356);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LOrExpContext ------------------------------------------------------------------

SysyParser::LOrExpContext::LOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::LOrExpContext::getRuleIndex() const {
  return SysyParser::RuleLOrExp;
}

void SysyParser::LOrExpContext::copyFrom(LOrExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LAndLOrExpContext ------------------------------------------------------------------

SysyParser::LAndExpContext* SysyParser::LAndLOrExpContext::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

SysyParser::LAndLOrExpContext::LAndLOrExpContext(LOrExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LAndLOrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLAndLOrExp(this);
}
void SysyParser::LAndLOrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLAndLOrExp(this);
}

antlrcpp::Any SysyParser::LAndLOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLAndLOrExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LOrLOrExpContext ------------------------------------------------------------------

SysyParser::LOrExpContext* SysyParser::LOrLOrExpContext::lOrExp() {
  return getRuleContext<SysyParser::LOrExpContext>(0);
}

SysyParser::LAndExpContext* SysyParser::LOrLOrExpContext::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

SysyParser::LOrLOrExpContext::LOrLOrExpContext(LOrExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LOrLOrExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLOrLOrExp(this);
}
void SysyParser::LOrLOrExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLOrLOrExp(this);
}

antlrcpp::Any SysyParser::LOrLOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitLOrLOrExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::LOrExpContext* SysyParser::lOrExp() {
   return lOrExp(0);
}

SysyParser::LOrExpContext* SysyParser::lOrExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::LOrExpContext *_localctx = _tracker.createInstance<LOrExpContext>(_ctx, parentState);
  SysyParser::LOrExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, SysyParser::RuleLOrExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<LAndLOrExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(358);
    lAndExp(0);
    _ctx->stop = _input->LT(-1);
    setState(365);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LOrLOrExpContext>(_tracker.createInstance<LOrExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLOrExp);
        setState(360);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(361);
        match(SysyParser::T__32);
        setState(362);
        lAndExp(0); 
      }
      setState(367);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstExpContext ------------------------------------------------------------------

SysyParser::ConstExpContext::ConstExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::AddExpContext* SysyParser::ConstExpContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}


size_t SysyParser::ConstExpContext::getRuleIndex() const {
  return SysyParser::RuleConstExp;
}

void SysyParser::ConstExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstExp(this);
}

void SysyParser::ConstExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstExp(this);
}


antlrcpp::Any SysyParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::ConstExpContext* SysyParser::constExp() {
  ConstExpContext *_localctx = _tracker.createInstance<ConstExpContext>(_ctx, getState());
  enterRule(_localctx, 60, SysyParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EpsilonContext ------------------------------------------------------------------

SysyParser::EpsilonContext::EpsilonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::EpsilonContext::getRuleIndex() const {
  return SysyParser::RuleEpsilon;
}

void SysyParser::EpsilonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEpsilon(this);
}

void SysyParser::EpsilonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEpsilon(this);
}


antlrcpp::Any SysyParser::EpsilonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SysyVisitor*>(visitor))
    return parserVisitor->visitEpsilon(this);
  else
    return visitor->visitChildren(this);
}

SysyParser::EpsilonContext* SysyParser::epsilon() {
  EpsilonContext *_localctx = _tracker.createInstance<EpsilonContext>(_ctx, getState());
  enterRule(_localctx, 62, SysyParser::RuleEpsilon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SysyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 24: return mulExpSempred(antlrcpp::downCast<MulExpContext *>(context), predicateIndex);
    case 25: return addExpSempred(antlrcpp::downCast<AddExpContext *>(context), predicateIndex);
    case 26: return relExpSempred(antlrcpp::downCast<RelExpContext *>(context), predicateIndex);
    case 27: return eqExpSempred(antlrcpp::downCast<EqExpContext *>(context), predicateIndex);
    case 28: return lAndExpSempred(antlrcpp::downCast<LAndExpContext *>(context), predicateIndex);
    case 29: return lOrExpSempred(antlrcpp::downCast<LOrExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SysyParser::mulExpSempred(MulExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::addExpSempred(AddExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::relExpSempred(RelExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::eqExpSempred(EqExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::lAndExpSempred(LAndExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::lOrExpSempred(LOrExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SysyParser::_decisionToDFA;
atn::PredictionContextCache SysyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SysyParser::_atn;
std::vector<uint16_t> SysyParser::_serializedATN;

std::vector<std::string> SysyParser::_ruleNames = {
  "compUnit", "decl", "constDecl", "bType", "constDef", "constInitVal", 
  "varDecl", "varDef", "initVal", "funcDef", "funcType", "funcFParams", 
  "funcFParam", "block", "blockItem", "stmt", "exp", "cond", "lVal", "primaryExp", 
  "number", "unaryExp", "unaryOp", "funcRParams", "mulExp", "addExp", "relExp", 
  "eqExp", "lAndExp", "lOrExp", "constExp", "epsilon"
};

std::vector<std::string> SysyParser::_literalNames = {
  "", "'const'", "','", "';'", "'int'", "'float'", "'['", "']'", "'='", 
  "'{'", "'}'", "'('", "')'", "'void'", "'if'", "'else'", "'while'", "'break'", 
  "'continue'", "'return'", "'+'", "'-'", "'!'", "'*'", "'/'", "'%'", "'<'", 
  "'>'", "'<='", "'>='", "'=='", "'!='", "'&&'", "'||'"
};

std::vector<std::string> SysyParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Ident", 
  "IntConst", "FloatConst", "Whitespace", "LineComment", "BlockComment"
};

dfa::Vocabulary SysyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SysyParser::_tokenNames;

SysyParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x29, 0x177, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x45, 
       0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x48, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x5, 0x3, 0x4c, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x7, 0x4, 0x53, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x56, 0xb, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x61, 0xa, 0x6, 0xc, 0x6, 
       0xe, 0x6, 0x64, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x6e, 0xa, 0x7, 
       0xc, 0x7, 0xe, 0x7, 0x71, 0xb, 0x7, 0x5, 0x7, 0x73, 0xa, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0x76, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x7, 0x8, 0x7c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x7f, 0xb, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x7, 0x9, 0x88, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x8b, 0xb, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x92, 
       0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x95, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x99, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x7, 0xa, 0xa0, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xa3, 0xb, 
       0xa, 0x5, 0xa, 0xa5, 0xa, 0xa, 0x3, 0xa, 0x5, 0xa, 0xa8, 0xa, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xae, 0xa, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x7, 0xd, 0xb8, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xbb, 
       0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xc6, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0xc9, 0xb, 0xe, 0x5, 0xe, 0xcb, 0xa, 0xe, 0x3, 0xf, 
       0x3, 0xf, 0x7, 0xf, 0xcf, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xd2, 0xb, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xd8, 0xa, 
       0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x5, 0x11, 0xe0, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x5, 0x11, 0xfe, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0x101, 
       0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x10c, 0xa, 
       0x14, 0xc, 0x14, 0xe, 0x14, 0x10f, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x117, 0xa, 
       0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x5, 0x17, 0x11f, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x5, 0x17, 0x125, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x12c, 0xa, 0x19, 0xc, 0x19, 
       0xe, 0x19, 0x12f, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x137, 0xa, 0x1a, 0xc, 0x1a, 
       0xe, 0x1a, 0x13a, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x142, 0xa, 0x1b, 0xc, 0x1b, 
       0xe, 0x1b, 0x145, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x14d, 0xa, 0x1c, 0xc, 0x1c, 
       0xe, 0x1c, 0x150, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x158, 0xa, 0x1d, 0xc, 0x1d, 
       0xe, 0x1d, 0x15b, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x163, 0xa, 0x1e, 0xc, 0x1e, 
       0xe, 0x1e, 0x166, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x16e, 0xa, 0x1f, 0xc, 0x1f, 
       0xe, 0x1f, 0x171, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x2, 0x8, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x22, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
       0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
       0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x2, 0xa, 0x3, 
       0x2, 0x6, 0x7, 0x4, 0x2, 0x6, 0x7, 0xf, 0xf, 0x3, 0x2, 0x25, 0x26, 
       0x3, 0x2, 0x16, 0x18, 0x3, 0x2, 0x19, 0x1b, 0x3, 0x2, 0x16, 0x17, 
       0x3, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x20, 0x21, 0x2, 0x182, 0x2, 0x46, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4d, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x59, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5b, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x75, 0x3, 0x2, 0x2, 0x2, 0xe, 0x77, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x98, 0x3, 0x2, 0x2, 0x2, 0x12, 0xa7, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x16, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0xb4, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcc, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x20, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x22, 0x102, 0x3, 0x2, 0x2, 0x2, 0x24, 0x104, 
       0x3, 0x2, 0x2, 0x2, 0x26, 0x106, 0x3, 0x2, 0x2, 0x2, 0x28, 0x116, 
       0x3, 0x2, 0x2, 0x2, 0x2a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x124, 
       0x3, 0x2, 0x2, 0x2, 0x2e, 0x126, 0x3, 0x2, 0x2, 0x2, 0x30, 0x128, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x130, 0x3, 0x2, 0x2, 0x2, 0x34, 0x13b, 
       0x3, 0x2, 0x2, 0x2, 0x36, 0x146, 0x3, 0x2, 0x2, 0x2, 0x38, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x3a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x167, 
       0x3, 0x2, 0x2, 0x2, 0x3e, 0x172, 0x3, 0x2, 0x2, 0x2, 0x40, 0x174, 
       0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x5, 0x4, 0x3, 0x2, 0x43, 0x45, 0x5, 
       0x14, 0xb, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 
       0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x3, 0x3, 0x2, 0x2, 
       0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x5, 0x6, 0x4, 0x2, 
       0x4a, 0x4c, 0x5, 0xe, 0x8, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 
       0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 
       0x7, 0x3, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x8, 0x5, 0x2, 0x4f, 0x54, 0x5, 
       0xa, 0x6, 0x2, 0x50, 0x51, 0x7, 0x4, 0x2, 0x2, 0x51, 0x53, 0x5, 0xa, 
       0x6, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 
       0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 
       0x58, 0x7, 0x5, 0x2, 0x2, 0x58, 0x7, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 
       0x9, 0x2, 0x2, 0x2, 0x5a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x62, 0x7, 
       0x24, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x8, 0x2, 0x2, 0x5d, 0x5e, 0x5, 
       0x3e, 0x20, 0x2, 0x5e, 0x5f, 0x7, 0x9, 0x2, 0x2, 0x5f, 0x61, 0x3, 
       0x2, 0x2, 0x2, 0x60, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 
       0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 
       0x2, 0x63, 0x65, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 
       0x65, 0x66, 0x7, 0xa, 0x2, 0x2, 0x66, 0x67, 0x5, 0xc, 0x7, 0x2, 0x67, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x68, 0x76, 0x5, 0x3e, 0x20, 0x2, 0x69, 
       0x72, 0x7, 0xb, 0x2, 0x2, 0x6a, 0x6f, 0x5, 0xc, 0x7, 0x2, 0x6b, 0x6c, 
       0x7, 0x4, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0xc, 0x7, 0x2, 0x6d, 0x6b, 0x3, 
       0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 
       0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 
       0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6a, 0x3, 0x2, 0x2, 0x2, 
       0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x76, 0x7, 0xc, 0x2, 0x2, 0x75, 0x68, 0x3, 0x2, 0x2, 0x2, 0x75, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x76, 0xd, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x5, 
       0x8, 0x5, 0x2, 0x78, 0x7d, 0x5, 0x10, 0x9, 0x2, 0x79, 0x7a, 0x7, 
       0x4, 0x2, 0x2, 0x7a, 0x7c, 0x5, 0x10, 0x9, 0x2, 0x7b, 0x79, 0x3, 
       0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 
       0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 
       0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x5, 0x2, 0x2, 
       0x81, 0xf, 0x3, 0x2, 0x2, 0x2, 0x82, 0x89, 0x7, 0x24, 0x2, 0x2, 0x83, 
       0x84, 0x7, 0x8, 0x2, 0x2, 0x84, 0x85, 0x5, 0x3e, 0x20, 0x2, 0x85, 
       0x86, 0x7, 0x9, 0x2, 0x2, 0x86, 0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 
       0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x99, 0x3, 0x2, 
       0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x93, 0x7, 0x24, 
       0x2, 0x2, 0x8d, 0x8e, 0x7, 0x8, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x3e, 
       0x20, 0x2, 0x8f, 0x90, 0x7, 0x9, 0x2, 0x2, 0x90, 0x92, 0x3, 0x2, 
       0x2, 0x2, 0x91, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 
       0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 
       0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 
       0x97, 0x7, 0xa, 0x2, 0x2, 0x97, 0x99, 0x5, 0x12, 0xa, 0x2, 0x98, 
       0x82, 0x3, 0x2, 0x2, 0x2, 0x98, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x99, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x9a, 0xa8, 0x5, 0x22, 0x12, 0x2, 0x9b, 0xa4, 
       0x7, 0xb, 0x2, 0x2, 0x9c, 0xa1, 0x5, 0x12, 0xa, 0x2, 0x9d, 0x9e, 
       0x7, 0x4, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x12, 0xa, 0x2, 0x9f, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 
       0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x3, 0x2, 
       0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9c, 0x3, 0x2, 0x2, 
       0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 
       0xa6, 0xa8, 0x7, 0xc, 0x2, 0x2, 0xa7, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa7, 
       0x9b, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 
       0x5, 0x16, 0xc, 0x2, 0xaa, 0xab, 0x7, 0x24, 0x2, 0x2, 0xab, 0xad, 
       0x7, 0xd, 0x2, 0x2, 0xac, 0xae, 0x5, 0x18, 0xd, 0x2, 0xad, 0xac, 
       0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 
       0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0xe, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x1c, 
       0xf, 0x2, 0xb1, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x9, 0x3, 0x2, 
       0x2, 0xb3, 0x17, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb9, 0x5, 0x1a, 0xe, 
       0x2, 0xb5, 0xb6, 0x7, 0x4, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x1a, 0xe, 
       0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 
       0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 
       0x19, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
       0x5, 0x8, 0x5, 0x2, 0xbd, 0xca, 0x7, 0x24, 0x2, 0x2, 0xbe, 0xbf, 
       0x7, 0x8, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x40, 0x21, 0x2, 0xc0, 0xc7, 
       0x7, 0x9, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x8, 0x2, 0x2, 0xc2, 0xc3, 0x5, 
       0x22, 0x12, 0x2, 0xc3, 0xc4, 0x7, 0x9, 0x2, 0x2, 0xc4, 0xc6, 0x3, 
       0x2, 0x2, 0x2, 0xc5, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 
       0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 
       0x2, 0xc8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 
       0xca, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xd0, 0x7, 0xb, 0x2, 0x2, 0xcd, 0xcf, 
       0x5, 0x1e, 0x10, 0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd2, 
       0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 
       0x2, 0x2, 0x2, 0xd1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 
       0x2, 0x2, 0xd3, 0xd4, 0x7, 0xc, 0x2, 0x2, 0xd4, 0x1d, 0x3, 0x2, 0x2, 
       0x2, 0xd5, 0xd8, 0x5, 0x4, 0x3, 0x2, 0xd6, 0xd8, 0x5, 0x20, 0x11, 
       0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 
       0xd8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x26, 0x14, 0x2, 
       0xda, 0xdb, 0x7, 0xa, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x22, 0x12, 0x2, 
       0xdc, 0xdd, 0x7, 0x5, 0x2, 0x2, 0xdd, 0x101, 0x3, 0x2, 0x2, 0x2, 
       0xde, 0xe0, 0x5, 0x22, 0x12, 0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 
       0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 
       0x101, 0x7, 0x5, 0x2, 0x2, 0xe2, 0x101, 0x5, 0x1c, 0xf, 0x2, 0xe3, 
       0xe4, 0x7, 0x10, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0xd, 0x2, 0x2, 0xe5, 
       0xe6, 0x5, 0x22, 0x12, 0x2, 0xe6, 0xe7, 0x7, 0xe, 0x2, 0x2, 0xe7, 
       0xe8, 0x5, 0x20, 0x11, 0x2, 0xe8, 0x101, 0x3, 0x2, 0x2, 0x2, 0xe9, 
       0xea, 0x7, 0x10, 0x2, 0x2, 0xea, 0xeb, 0x7, 0xd, 0x2, 0x2, 0xeb, 
       0xec, 0x5, 0x22, 0x12, 0x2, 0xec, 0xed, 0x7, 0xe, 0x2, 0x2, 0xed, 
       0xee, 0x5, 0x20, 0x11, 0x2, 0xee, 0xef, 0x7, 0x11, 0x2, 0x2, 0xef, 
       0xf0, 0x5, 0x20, 0x11, 0x2, 0xf0, 0x101, 0x3, 0x2, 0x2, 0x2, 0xf1, 
       0xf2, 0x7, 0x12, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0xd, 0x2, 0x2, 0xf3, 
       0xf4, 0x5, 0x22, 0x12, 0x2, 0xf4, 0xf5, 0x7, 0xe, 0x2, 0x2, 0xf5, 
       0xf6, 0x5, 0x20, 0x11, 0x2, 0xf6, 0x101, 0x3, 0x2, 0x2, 0x2, 0xf7, 
       0xf8, 0x7, 0x13, 0x2, 0x2, 0xf8, 0x101, 0x7, 0x5, 0x2, 0x2, 0xf9, 
       0xfa, 0x7, 0x14, 0x2, 0x2, 0xfa, 0x101, 0x7, 0x5, 0x2, 0x2, 0xfb, 
       0xfd, 0x7, 0x15, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0x22, 0x12, 0x2, 0xfd, 
       0xfc, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x7, 0x5, 0x2, 0x2, 0x100, 0xd9, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x100, 0xe2, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x100, 0xe9, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x100, 0xf7, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfb, 
       0x3, 0x2, 0x2, 0x2, 0x101, 0x21, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 
       0x5, 0x24, 0x13, 0x2, 0x103, 0x23, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
       0x5, 0x3c, 0x1f, 0x2, 0x105, 0x25, 0x3, 0x2, 0x2, 0x2, 0x106, 0x10d, 
       0x7, 0x24, 0x2, 0x2, 0x107, 0x108, 0x7, 0x8, 0x2, 0x2, 0x108, 0x109, 
       0x5, 0x22, 0x12, 0x2, 0x109, 0x10a, 0x7, 0x9, 0x2, 0x2, 0x10a, 0x10c, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 
       0x3, 0x2, 0x2, 0x2, 0x10e, 0x27, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 
       0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0xd, 0x2, 0x2, 0x111, 0x112, 
       0x5, 0x22, 0x12, 0x2, 0x112, 0x113, 0x7, 0xe, 0x2, 0x2, 0x113, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x114, 0x117, 0x5, 0x26, 0x14, 0x2, 0x115, 0x117, 
       0x5, 0x2a, 0x16, 0x2, 0x116, 0x110, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 
       0x3, 0x2, 0x2, 0x2, 0x116, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x9, 0x4, 0x2, 0x2, 0x119, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x11a, 0x125, 0x5, 0x28, 0x15, 0x2, 0x11b, 0x11c, 
       0x7, 0x24, 0x2, 0x2, 0x11c, 0x11e, 0x7, 0xd, 0x2, 0x2, 0x11d, 0x11f, 
       0x5, 0x30, 0x19, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 
       0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x125, 
       0x7, 0xe, 0x2, 0x2, 0x121, 0x122, 0x5, 0x2e, 0x18, 0x2, 0x122, 0x123, 
       0x5, 0x2c, 0x17, 0x2, 0x123, 0x125, 0x3, 0x2, 0x2, 0x2, 0x124, 0x11a, 
       0x3, 0x2, 0x2, 0x2, 0x124, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x124, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x125, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 
       0x9, 0x5, 0x2, 0x2, 0x127, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12d, 
       0x5, 0x22, 0x12, 0x2, 0x129, 0x12a, 0x7, 0x4, 0x2, 0x2, 0x12a, 0x12c, 
       0x5, 0x22, 0x12, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 
       0x3, 0x2, 0x2, 0x2, 0x12e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x8, 0x1a, 0x1, 0x2, 0x131, 0x132, 
       0x5, 0x2c, 0x17, 0x2, 0x132, 0x138, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 
       0xc, 0x3, 0x2, 0x2, 0x134, 0x135, 0x9, 0x6, 0x2, 0x2, 0x135, 0x137, 
       0x5, 0x2c, 0x17, 0x2, 0x136, 0x133, 0x3, 0x2, 0x2, 0x2, 0x137, 0x13a, 
       0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x33, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x8, 0x1b, 0x1, 0x2, 0x13c, 0x13d, 
       0x5, 0x32, 0x1a, 0x2, 0x13d, 0x143, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 
       0xc, 0x3, 0x2, 0x2, 0x13f, 0x140, 0x9, 0x7, 0x2, 0x2, 0x140, 0x142, 
       0x5, 0x32, 0x1a, 0x2, 0x141, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x142, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
       0x3, 0x2, 0x2, 0x2, 0x144, 0x35, 0x3, 0x2, 0x2, 0x2, 0x145, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x8, 0x1c, 0x1, 0x2, 0x147, 0x148, 
       0x5, 0x34, 0x1b, 0x2, 0x148, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 
       0xc, 0x3, 0x2, 0x2, 0x14a, 0x14b, 0x9, 0x8, 0x2, 0x2, 0x14b, 0x14d, 
       0x5, 0x34, 0x1b, 0x2, 0x14c, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x150, 
       0x3, 0x2, 0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x14f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x8, 0x1d, 0x1, 0x2, 0x152, 0x153, 
       0x5, 0x36, 0x1c, 0x2, 0x153, 0x159, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 
       0xc, 0x3, 0x2, 0x2, 0x155, 0x156, 0x9, 0x9, 0x2, 0x2, 0x156, 0x158, 
       0x5, 0x36, 0x1c, 0x2, 0x157, 0x154, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 
       0x3, 0x2, 0x2, 0x2, 0x15a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x8, 0x1e, 0x1, 0x2, 0x15d, 0x15e, 
       0x5, 0x38, 0x1d, 0x2, 0x15e, 0x164, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 
       0xc, 0x3, 0x2, 0x2, 0x160, 0x161, 0x7, 0x22, 0x2, 0x2, 0x161, 0x163, 
       0x5, 0x38, 0x1d, 0x2, 0x162, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x163, 0x166, 
       0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 
       0x3, 0x2, 0x2, 0x2, 0x165, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x166, 0x164, 
       0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x8, 0x1f, 0x1, 0x2, 0x168, 0x169, 
       0x5, 0x3a, 0x1e, 0x2, 0x169, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 
       0xc, 0x3, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x23, 0x2, 0x2, 0x16c, 0x16e, 
       0x5, 0x3a, 0x1e, 0x2, 0x16d, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 
       0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 
       0x3, 0x2, 0x2, 0x2, 0x170, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x5, 0x34, 0x1b, 0x2, 0x173, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x25, 0x44, 0x46, 0x4b, 0x54, 0x62, 0x6f, 0x72, 
       0x75, 0x7d, 0x89, 0x93, 0x98, 0xa1, 0xa4, 0xa7, 0xad, 0xb9, 0xc7, 
       0xca, 0xd0, 0xd7, 0xdf, 0xfd, 0x100, 0x10d, 0x116, 0x11e, 0x124, 
       0x12d, 0x138, 0x143, 0x14e, 0x159, 0x164, 0x16f, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SysyParser::Initializer SysyParser::_init;
