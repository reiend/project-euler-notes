"use strict";
import { isDivisibleBy } from "../../helper.js";

// problem/situation
// If we list all the natural numbers below 10 that are multiples of 3 or 5,
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

const sumOfMultiples = () => {

  const multiplesList = [];
  const byThree = isDivisibleBy(3);
  const byFive = isDivisibleBy(5);

  for(let i = 1000; i >= 0; i--) {
    (byThree(i) || byFive(i)) && multiplesList.push(i)
  }

  return multiplesList.reduce((sum, nextValue) => sum + nextValue)
};

console.log(sumOfMultiples());
