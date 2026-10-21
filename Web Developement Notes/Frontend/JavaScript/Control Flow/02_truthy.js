// Falsy Values 
// false, -0, 0, BigInt 0n, "", null, undefined, NaN

// Truthy Values 
// "0", 'false', " ", [], {}, function(){}

l= []
if (l.length == 0){
    console.log("Array is empty");
}

const emptyObj = {}

if (Object.keys(emptyObj).length === 0){
    console.log("Object is empty");    
}


// false == 0 gives true

// Nullish Coalescing Operator (??): Use the right value ONLY if the value is null or undefined.

let val1;
val1 = 5 ?? 10
val1 = null ?? 10 // returns the right value 
val1 = undefined ?? 15 // returns the left value 
val1 = null ?? 10 ?? 20 // returns 10

//Ternary Operator 
// condition ? true : false 

const iceTeaPrice = 180 
iceTeaPrice <=180 ? console.log("less than 80") : console.log("more than 80");
