/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        // If values are equal, return true. Else throw "Not Equal"
        toBe: function(otherVal) {
            if (val === otherVal) {
                return true;
            }
            throw new Error("Not Equal");
        },
        
        // If values are NOT equal, return true. Else throw "Equal"
        notToBe: function(otherVal) {
            if (val !== otherVal) {
                return true;
            }
            throw new Error("Equal");
        }
    };
};
