
#pragma once
#include "Card.h"
	class CardSeven : public Card
	{

		CellPosition cp;
	public:
		CardSeven(const CellPosition& pos); // A Constructor takes card position

		virtual void ReadCardParameters(Grid* pGrid); // Reads the parameters of CardOne which is: walletAmount

		virtual void Apply(Grid* pGrid, Player* pPlayer); // Applies the effect of CardOne on the passed Player
		// by decrementing the player's wallet by the walletAmount data member

		virtual ~CardSeven(); // A Virtual Destructor

	};

