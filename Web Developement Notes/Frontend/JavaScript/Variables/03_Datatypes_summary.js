// Primitive Data Types (A primitive data type is a basic value type that is not an object and has no methods of its own.): 
// 7 types(call by value )// These are copied by value:

// 1. String (JavaScript string values are primitive, but the language auto-wraps them in a temporary String object when you call methods.)
// 2.Number
// 3.Boolean
// 4.null
// 5.undefined
// 6.Symbol
// 7.BigInt

// js is dynamically typed - we dont have to specify the data type of the variable while declaring it. It will automatically get assigned based on the value we assign to it.

// Primitives are immutable: operations create new values, they do not change the original.
// Variables hold the primitive value directly.
// They are compared by value, not by reference.

//// Non-Primitive (Types Reference)// These are copied from the reference:
// 1.Array
// 2.Object
// 3.Function

const id = Symbol('123')
const Anotherid = Symbol('123')
console.log(id == Anotherid);// false because each Symbol is unique, even if they have the same description.
console.log(typeof id);

//Arrays ,Object ,Function

const heros=["me", "Taniya" ,"Rai"]
let obj = {
    name:"Taniya",
    age:22,
}

const myFuntion = function(){
    console.log("Hello World");
}

console.log(typeof myFuntion);

// Primitive Types


