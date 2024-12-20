#!/usr/bin/node
const data = require('./101-data');

const dict = {};
for (const userId in data.dict) {
  const occurrences = data.dict[userId];
  if (!dict[occurrences]) {
    dict[occurrences] = [userId];
  } else {
    dict[occurrences].push(userId);
  }
}

console.log(dict);
