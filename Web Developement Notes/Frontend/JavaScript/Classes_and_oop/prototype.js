// ==========================
// // Prototypal Behavior in JavaScript
// // ==========================

// const { use } = require("react");

// // JavaScript follows a prototypal inheritance model.
// // This means objects can inherit properties and methods
// // from other objects through a special link called the prototype.

// // In JavaScript, functions are special objects.
// // They are callable (can be executed) but they also behave
// // like regular objects because they can store properties and methods.

// // // Example:
// // function multiplyBy5(num) {
// //     return num*5
// // }

// // multiplyBy5.power = 2

// // console.log(multiplyBy5(5));
// // console.log(multiplyBy5.power);
// // console.log(multiplyBy5.prototype); // this not only gives the methods but also internal properties 


// // // Every function automatically gets a `prototype` object.
// // // When an object is created using the `new` keyword,
// // // the new object is linked to the function's prototype.

// // // This allows all objects created from the same constructor
// // // to share common methods instead of creating duplicate copies
// // // inside every object, making the code more memory-efficient.

// // // Function ───►
// // //                              \
// // // Array ───────► Object ─────► null
// // //                              /
// // // String ─────►

// // function createUser(username, score) {
// //     this.username = username
// //     this.score = score
// // }

// // createUser.prototype.incremet = function () {
// //     this.score++
// // }

// // createUser.prototype.printMe = function(){
// //     console.log(`score is ${this.score}`);
// // }

// // const chai =new createUser("chai", 25)
// // const chai = createUser("tea", 250) // this will give error 
// // If a function is meant to be used as a constructor (it uses this to initialize properties), always call it with new. Without new, JavaScript doesn't create a new object, so this won't refer to the instance you expect.

// // Here's what happens behind the scenes when the new keyword is used:

// // 1. A new object is created:
// //    The new keyword initiates the creation of a new JavaScript object.

// // 2. A prototype is linked:
// //    The newly created object gets linked to the prototype property of the constructor function.
// //    This means that it has access to properties and methods defined on the constructor's prototype.

// // 3. The constructor is called:
// //    The constructor function is called with the specified arguments, and `this` is bound to the newly created object.
// //    If no explicit return value is specified from the constructor, JavaScript assumes the newly created object to be the intended return value.

// // 4. The new object is returned:
// //    After the constructor function has been called, if it doesn't return a non-primitive value (object, array, function, etc.), the newly created object is returned.

// let myHeros = ["thor", "spiderman"]

// let heroPower = {
//     thor: "hammer",
//     spiderman: "sling",

//     getSpiderPower: function() {
//         console.log(`Spidy power is ${this.spiderman}`);
//     }
// }

// Object.prototype.taniya = function () {
//     console.log(`taniya is present in all objects`);
// }

// Array.prototype.heytaniya = function () {
//     console.log(`Taniya says hello`);
// }

// // heroPower.taniya()
// myHeros.heytaniya()

// // Inheritance 

// const User = {
//     name: "chai",
//     email: "chai@google.com"
// }


// const Teacher = {
//     makeVideo: true
// }

// const TeachingSupport = {
//     isAvailable: false
// }

// const TASupport = {
//     makeAssignment: 'JS Assignment',
//     fullTime: true,
//     __proto__: TeachingSupport
// }

// Teacher.__proto__ = User // Old approach

// // mordern syntax
// Object.setPrototypeOf(TeachingSupport, Teacher)

let anotherUsername = "TANIYA      "

String.prototype.trueLength = function(){
    console.log(`${this}`);
    console.log(`True length is: ${this.trim().length}`);
}

anotherUsername.trueLength()