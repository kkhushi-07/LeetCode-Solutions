/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let current = init;  // Store current value, changes with inc/dec
    const original = init;  // Store original value for reset
    
    return {
        // Increase by 1, then return new value
        increment: function() {
            current += 1;
            return current;
        },
        
        // Decrease by 1, then return new value  
        decrement: function() {
            current -= 1;
            return current;
        },
        
        // Reset to original init value, then return it
        reset: function() {
            current = original;
            return current;
        }
    };
};
