#!/usr/bin/node

const Square5 = require('./5-square');

/**
 * Defines a square and inherits from Square.
 */
class Square extends Square5 {
  charPrint (c = 'X') {
    for (let i = 0; i < this.height; i++) {
      console.log(c.repeat(this.width));
    }
  }
}

module.exports = Square;
