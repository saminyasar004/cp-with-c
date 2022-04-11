/**
 * Title: Ultra Fast Mathematician
 * Description: https://codeforces.com/problemset/problem/61/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

// Dependencies
const process = require("process");
const readline = require("readline");

// Readline interface
const rl = readline.createInterface({
    input: process.stdin,
    output: process.output,
});

/**
 * Convert a binary number into decimal number
 *
 * @param {String} binary - The binary number as a string
 * @returns {String} - The decimal number as a string
 */
function binaryToDecimal(binary) {
    return parseInt(binary.toString(), 2).toString();
}

/**
 * Convert a decimal number to binary number
 *
 * @param {String} decimal - The decimal number as a string
 * @returns {String} - The binary number as a string
 */
function decimalToBinary(decimal) {
    return parseInt(decimal).toString(2);
}

/**
 * Return the bitwise number of two binary number
 *
 * @param {String} a - A binary number as a string
 * @param {String} b - Another binary number as a string
 * @returns {String} - Return a binary number as a string
 */
function bitwise(a, b) {
    let result = decimalToBinary(
        (binaryToDecimal(a) ^ binaryToDecimal(b)).toString()
    );
    if (a.length > result.length) {
        result = result.padStart(a.length, "0");
    }
    return result;
}

rl.question("", (a) => {
    rl.question("", (b) => {
        const result = bitwise(a, b);
        console.log(result);
        rl.close();
    });
    rl.on("close", () => {
        process.exit(0);
    });
});
