#ifndef __BOARD_HPP
#define __BOARD_HPP
#include "pieces.hpp"
#include <string>
#include <vector>
namespace chess{
	class Board{
	public:
		Board(){
			resetBoard();
			drawBoard();
		};
		void drawBoard();
		void displayWinner();
		void resetBoard();
		bool movePiece(chess::Piece*,chess::Piece*);
		bool movePiece(std::string);
		bool undoMove();
	private:
		bool checkBlackKing();
		bool checkWhiteKing();
		std::vector<std::vector<chess::Piece*>> gameBoard;
		std::vector<std::string> moveList;

	};

	void Board::resetBoard(){
		gameBoard.clear();
		gameBoard.resize(8);
		for(int i=0;i<8;i++)
			gameBoard[i].resize(8);
		for(int i=0;i<8;i++){
			gameBoard[1][i] = new Pawn("White");
			gameBoard[6][i] = new Pawn("Black");
			switch(i){
				case 0:
					gameBoard[0][i] = new Rook("White");
					gameBoard[7][i] = new Rook("Black");
					break;
				case 1:
					gameBoard[0][i] = new Knight("White");
					gameBoard[7][i] = new Knight("Black");
					break;
				case 2:
					gameBoard[0][i] = new Bishop("White");
					gameBoard[7][i] = new Bishop("Black");
					break;
				case 3:
					gameBoard[0][i] = new Queen("White");
					gameBoard[7][i] = new Queen("Black");
					break;
				case 4:
					gameBoard[0][i] = new King("White");
					gameBoard[7][i] = new King("Black");
					break;
				case 5:
					gameBoard[0][i] = new Bishop("White");
					gameBoard[7][i] = new Bishop("Black");
					break;
				case 6:
					gameBoard[0][i] = new Knight("White");
					gameBoard[7][i] = new Knight("Black");
					break;
				default:
					gameBoard[0][i] = new Rook("White");
					gameBoard[7][i] = new Rook("Black");
					break;
			}

		}

	}

	void Board::drawBoard(){
		for(int i=7; i>-1;i--){
			for(int j=0;j<8;j++){
				((i+j)%2 == 0)? std::cout << "\033[40m" : std::cout << "\033[47m";
				if(gameBoard[i][j] != nullptr){
					gameBoard[i][j]->print();
				}
				else
					std::cout << "   ";
			}
			std::cout << '\n';
		}
	}

	bool Board::movePiece(std::string move){
		switch(move[0]){
			case 'P':
				
				break;
			case 'R':
				break;
			case 'N':
				break;
			case 'B':
				break;
			case 'K':
				break;
			case 'Q':
				break;
			case 'o':
				break;
			default:		
				break;
		}
	}

}//chess
#endif
