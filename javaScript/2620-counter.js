/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    // Store current value in closure. Each call will update this
    let current = n;
    
    // Return inner function that has access to 'current'
    return function() {
        // Return current value, then increment for next call
        return current++;
    };
};

/** 
 * const counter = createCounter(10);
 * counter(); // 10 - returns n
 * counter(); // 11 - returns n+1  
 * counter(); // 12 - returns n+2
 */
