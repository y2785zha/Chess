//
//  bishop.hpp
//  A5 Chess
//
//  Created by Jason Zhang on 2019-07-23.
//  Copyright © 2019 Jason Zhang. All rights reserved.
//

#ifndef BISHOP_H
#define BISHOP_H

#include "piece.h"

class Bishop: public Piece {
    
public:
    Bishop(Colour colour, PieceType Type, Point coordinate, Board *b);
    bool canMoveTo(Point dest) override;
    bool movePiece(Point dest) override;
};

#endif /* bishop_hpp */
