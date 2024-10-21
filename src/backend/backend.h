#pragma once

#include "Common.h"
#include "IR.h"
#include "register.h"
#include "instruction.h"
#include "instruction_selection.h"
#include "machine_code.h"

namespace backend {

    void initBackend(const Ptr<ir::Module> &irModule, Ptr<RiscModule> riscModule) {
        for (auto &irFunction : irModule->funcSet()) {
            if (irFunction->isPrototype() && (irFunction->name() == "starttime" || irFunction->name() == "stoptime")) {
                irFunction->name() = "_sysy_" + irFunction->name();
            }
            Ptr<RiscFunction> riscFunction = riscModule->createFunction(irFunction, riscModule, !irFunction->isPrototype());

            if (irFunction->isPrototype()) {
                continue;
            }

            auto irBBList = irFunction->dfsBBList();
            for (auto &irBasicBlock : irBBList) {
                if (irBasicBlock == irFunction->exitBB()) {
                    continue;
                }
                riscFunction->createBasicBlock(irBasicBlock, riscFunction);
            }
            // Promise that exit block is the last block in the function
            riscFunction->createBasicBlock(irFunction->exitBB(), riscFunction);
        }
        for (auto &irGlobalInitInst : irModule->getGlobalInitInsts()) {
            Ptr<ir::GlobalInst> globalInst = castPtr<ir::GlobalInst>(irGlobalInitInst);
            if (!globalInst) {
                continue;
            }
            riscModule->createGlobal(globalInst, riscModule);
        }
    }
}
