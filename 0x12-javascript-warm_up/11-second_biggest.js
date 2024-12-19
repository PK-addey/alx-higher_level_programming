#!/usr/bin/node

const args = process.argv.slice(2).map(Number);

if (args.length < 2) {
  console.log(0);
} else {
  const max = Math.max(...args);
  const secondBiggest = Math.max(...args.filter(num => num !== max));
  console.log(secondBiggest);
}
