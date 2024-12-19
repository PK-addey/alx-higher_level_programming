#!/usr/bin/node

myVar = 89;
module.exports.myVar = myVar;
require('./100-let_me_const');
console.log(myVar);
