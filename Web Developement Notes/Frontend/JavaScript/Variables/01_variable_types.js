// "use strict"; //enables strict mode for safer JavaScript
//  prototype is an object that stores methods shared by all Person objects.
const acc_Id = 1234896 //cannot change the const once assigned the value
let ac_email = "njskja@jld.scn"
var accpswd= "12345"//AVOOOID to use coz of issue in block scope and functional scope 
acCity = "Jaipur"//avoid using this 

let accState;//undefined

console.log(acc_Id)
console.table([ac_email,acc_Id,accpswd,acCity])// to print in table form

//block scope - anything inside {}
//alert("Hello") // we are using node js, not browser
//VARIABLE TYPES
// number, string, bigint, boolean, null(standalone value), undefined(no value), symbol(react):(uniqueness)
//object
let Name = "Taniya";
console.log(typeof "Taniya");
console.log(typeof (Name) );//name as a method
console.log(typeof null);//object
console.log(typeof undefined);//undefined
//A method is a function attached to an object.

let score = "33"
let Score = "33abc"
let SCore=null

let valueInNumber = Number(score);
console.log(typeof valueInNumber);

let ValueInNumber = Number(Score)
console.log(typeof ValueInNumber); // Number
console.log(ValueInNumber); // NaN


let VAlueInNumber = Number(SCore);
console.log(VAlueInNumber);

//NaN=> Not a Number =>type is number

let isloggedin = 1

let booleanis = Boolean(isloggedin);
console.log(booleanis);// returns true coz 

// 1=>true; 0=>false
//""=>false; "Taniya"=>true

let someNumber = 33
let stringNumber = String(someNumber)
console.log(stringNumber);
console.log(typeof stringNumber);
// ***************************OPERATIONS**********************************

let value = 3
let negValue = -value
console.log(negValue);

console.log("1"+2);
console.log(1+"2");
console.log("1"+2+2);// JS evaluates from left to right.
// When a string is involved with +, JS does string concatenation.
console.log(1+2+"2");

let num1 ,num2 ,num3
num1=num2=num3=2+2
console.log(num1,num2,num3); // assignment happens right to left.

let gameCounter = 100
gameCounter++;//Postfix → use first, then change value
console.log(gameCounter);

++gameCounter;//Prefix → change first, then use value
console.log(gameCounter);


// **************************COMPARISON TYPES******************************************************************

console.log("2">1);//unpredictable so always use two same datatypes to compare

console.log(null > 0); // For > comparison, JS converts null to a number.
console.log(null == 0); // For == comparison, null is only equal to undefined, not to any other value.
console.log(null >= 0);// For >= comparison, JS converts null to a number.
//The reason is that an equality check == and comparisons > < >= <= work differently.Comparisons convert null to a number ,treating it as 0.

//strict check : === , checks also the type 

console.log("2"===2);

