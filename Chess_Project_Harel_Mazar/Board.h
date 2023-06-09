#pragma once
#include <string>
#include "Side.h"
#include <iostream>

class Board
{
public:
	//c'tor
	Board();

	//getters & setters
	bool isWhiteTurn() const;
	bool isBlackTurn() const;
	string getBoardString() const;
	void setBoardString(const string newBoard);

	//other methods
	void printBoard() const;
	void eatPiece(const string position);
	bool isSquareTaken(const string position);
	string movePieceAtBoard(const string source, const string destination);
	void updateBoardString();
	Piece* createPiece(const string name, const string type, const string position);
	bool isKingChecked();
	bool isOneOfBlackPiecesCanReachLocationX(const string srcPosition, const string destPosition) const;
	bool isOneOfWhitePiecesCanReachLocationX(const string srcPosition, const string destPosition) const;
	bool isThereAnInterrupterPieceAtPath(string srcPosition, string destPosition) const;

private:
	//fields
	string board;
	Side blackSide;
	Side whiteSide;

	//methods
	void changeTurn();

};