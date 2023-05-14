#include "CardNine.h"

CardNine::CardNine(const CellPosition& pos) : Card(pos)
{
	cardNumber = 9;
}

void CardNine::ReadCardParameters(Grid* pGrid)
{
	Input* pIn = pGrid->GetInput();
	Output* pOut = pGrid->GetOutput();
	pOut->PrintMessage("Enter the price of Card 9: ");
	cardPrice = pIn->GetInteger(pOut);
	pOut->PrintMessage("Enter the Fees of Card 9: ");
	Fees = pIn->GetInteger(pOut);

}

void CardNine::Apply(Grid* pGrid, Player* pPlayer)
{
	Card::Apply(pGrid, pPlayer);
	Input* pIn = pGrid->GetInput();
	Output* pOut = pGrid->GetOutput();
	if (cardPrice == 0) {
		ReadCardParameters(pGrid);
	}
	if (!Bought) {
		pOut->PrintMessage("Do you want to buy card 9?(Y/N) ");
		string Buy = pIn->GetSrting(pOut);
		if (Buy == "Y") {
			pPlayer->SetWallet(pPlayer->GetWallet() - cardPrice);

		}
	}
	else {
		pOut->PrintMessage("You stepped into a player's station " + to_string(Fees) + " is deducted.");
		pPlayer->SetWallet(pPlayer->GetWallet() - Fees);
	}
}

CardNine::~CardNine()
{
}
