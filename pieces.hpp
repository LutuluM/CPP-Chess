#ifndef __PIECES_HPP
#define __PIECES_HPP
#include <string>
#include <iostream>
namespace chess{
    class Piece{
    public:
        virtual void move() = 0;
        virtual bool validMove() = 0;
        bool isAlive(){return _alive;};
        char Type(){return _type;};
        char Color(){return _color;};
        void print(){
            if(_color == 'w')
                std::cout << "\x1B[31m " << _type << " ";
            else
                std::cout << "\x1B[35m " << _type << " ";
        }
    protected:
        bool _alive;
        char _type;
        char _color;
    };

    class Pawn: public Piece{
    public:
        Pawn(std::string setColor){
            if(setColor == "Black")
                _color = 'b';
            else
                _color = 'w';
            _type = 'P';
        };
        void move(){;
        };
        bool validMove(){
            return true;
        };
    private:
        Pawn(){};
    };
    
    class Rook: public Piece{
    public:
        Rook(std::string setColor){
            if(setColor == "Black")
                _color = 'b';
            else
                _color = 'w';
            _type = 'R';
        };
        void move(){;
        };
        bool validMove(){
            return true;
        };
    private:
        Rook(){};
    };
    
    class Knight: public Piece{
    public:
        Knight(std::string setColor){
            if(setColor == "Black")
                _color = 'b';
            else
                _color = 'w';
            _type = 'N';
        };
        void move(){;
        };
        bool validMove(){
            return true;
        };
    private:
        Knight(){};
    };
    
    class Bishop: public Piece{
    public:
        Bishop(std::string setColor){
            if(setColor == "Black")
                _color = 'b';
            else
                _color = 'w';
            _type = 'B';
        };
        void move(){;
        };
        bool validMove(){
            return true;
        };
    private:
        Bishop(){};
    };
    
    class King: public Piece{
    public:
        King(std::string setColor){
            if(setColor == "Black")
                _color = 'b';
            else
                _color = 'w';
            _type = 'K';
        };
        void move(){;
        };
        bool validMove(){
            return true;
        };
    private:
        King(){};
    };
    
    class Queen: public Piece{
    public:
        Queen(std::string setColor){
            if(setColor == "Black")
                _color = 'b';
            else
                _color = 'w';
            _type = 'Q';
        };
        void move(){;
        };
        bool validMove(){
            return true;
        };
    private:
        Queen(){};
    };

}//chess
#endif

