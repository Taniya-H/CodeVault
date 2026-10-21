//arrays
const myarr = [0,1,2,3,4,5]//can be mixed data types
//JS ARRAY-COPY OPERATIONS CREATE SHALLOW OPERATIONS (ALL STANDARD BUILT IN COPY OPERATIONS WITH ANY JS OBJECTS CREATE SHALLOW COPIES, RATHER THAN DEEP COPIES)
//SHALLOW COPY of an object is a copy whose properties share the same references (point to the same underlying values) as those of the source object from which the copy was made
//DEEP COPY of an object is a copy whose properties do not share the same references (point to the same underlying values) as those of the source object from which the copy was made
console.log(myarr[0]);
const myHeros = new Array(1,2,3,4)
//METHODS
myarr.push(6)//used to add elements to the end of an array.
console.log(myarr);

myarr.pop()//removes the last element
myarr.unshift(9)//adds the number at starting
myarr.shift()//removes the first element

console.log((myarr.includes(9)));//checks if 9 exists inside the array
console.log((myarr.indexOf(19)));//returns -1 because the element dosent exists

const newArr = myarr.join() //converts an array into a string.
console.log(newArr);
console.log(typeof newArr);

console.log("a = ",myarr);

//slice, splice
const myn1 = myarr.slice(1,3)
console.log(myn1);

console.log(("b", myarr));

const myn2 = myarr.splice(1,3)//returns the whole range given and also manipulates the array
console.log(myn2);
console.log(("c", myarr));

const marvel_heros=["thor","Ironman","spiderman"]
const dc=["superman","flash","batman"]

marvel_heros.push(dc);//includes the dc list in the marvel heros list as a LIST element
console.log(marvel_heros);

console.log(marvel_heros[3][1]);//Not a good practice
const all_heros=marvel_heros.concat(dc);// Returns New Arrays
console.log(all_heros);

const all_new_heros=[...marvel_heros,...dc]//spread operator(More prefered than concat)
console.log(all_new_heros);

const another_array = [1,2,3,[4,5,6],7,[6,7[4,5]]]
const real_another_array = another_array.flat(Infinity)
console.log(real_another_array);

//Useful for data scrapping
console.log(Array.isArray("Taniya"))
console.log(Array.from("Taniya")) // converts iterable things into arrays.
console.log(Array.from({name: "Taniya"}));// Interesting - Array.from({name: "Taniya"}) returns [] because the object is neither iterable nor has a valid length property.

let score1=100
let score2=200
let score3=300

console.log(Array.of(score1,score2,score3)) // creates a new array from the values you pass into it.

let numbers = [10, 20, 30, 40];
let result = numbers.find(num => num > 25); //find the FIRST element in an array that matches a condition.
console.log(result);