#!/usr/bin/node

function factorial (n) {
  n = parseInt(n);
  if (isNaN(n) || n < 1) {
    return 1;
  } else if (n === 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

const args = process.argv.slice(2);

console.log(factorial(args[0]));
