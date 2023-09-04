/**
 * @param {number} n
 * @return {boolean}
 */
var square = (x) => x * x;

var sumOfSquareDigits = function (n) {
    let sum = 0;
    while (n != 0) {
        let d = n % 10;
        d = square(d);
        sum += d;
        n = Math.floor(n / 10);
    }
    return sum; 
};

var isHappy = function (n) {
    let seen = new Set(); // To detect cycles
    while (n != 1 && !seen.has(n)) {
        seen.add(n);
        n = sumOfSquareDigits(n);
    }
    return n === 1; 
};
