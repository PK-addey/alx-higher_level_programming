#!/usr/bin/node
/**
 * Returns the number of occurrences in a list.
 *
 * @param {Array} list - The list to search.
 * @param {*} searchElement - The element to search for.
 * @returns {number} The number of occurrences of the search element.
 */
exports.nbOccurences = function (list, searchElement) {
  let count = 0;
  for (let i = 0; i < list.length; i++) {
    if (list[i] === searchElement) {
      count++;
    }
  }
  return count;
};
