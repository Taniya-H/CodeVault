// Immediatly Invoked Function Expression (IIFE)
// A function that runs instantly after being created.

// Mostly for:
//Avoid global variables → Prevent variables from accidentally affecting other parts of the program.
//Create private scope → Keep variables accessible only inside the function for protection/privacy.

(function chai(){ //Named IIFE
    console.log(`DB CONNECTED`);
})();
// The outer parentheses force JS to treat it as an expression instead of normal function declaration.
// () -> CALLS the function immediately.Execution Call.
// We use ; after an IIFE because JavaScript might not know where the previous statement ends. ESPECIALLY WHEN USING TWO IIFE.

( (name) => {
    console.log(`DB CONNECTED2 ${name}`);
} )('Taniya');















