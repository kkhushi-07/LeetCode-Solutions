/**
 * @return {Function}
 */
var createHelloWorld = function() {
    // Return a new function that ignores all arguments
    return function(...args) {
        // Always return "Hello World" string regardless of input
        return "Hello World";
    };
};

/** 
 * const f = createHelloWorld();
 * f(); // "Hello World"
 * f({}, null, 42); // "Hello World"
 */
