#pragma once
#include "Card.h"
class CardNine : public Card
{
	int cardPrice = 0;
	int Fees = 0;
	bool Bought = 0;
public:
	CardNine(const CellPosition& pos); // A Constructor takes card position

	virtual void ReadCardParameters(Grid* pGrid); 

	virtual void Apply(Grid* pGrid, Player* pPlayer); 

	virtual ~CardNine();
};

