#pragma once
#include "Action.h"
#include "Card.h"
#include "AddCardAction.h"

class PasteCardAction :  public Action
{
    int cardNumber;
    Card* pCard;
public:
    PasteCardAction(ApplicationManager* pApp);
    virtual void ReadActionParameters();
    virtual void Execute();
    virtual ~PasteCardAction();
};

