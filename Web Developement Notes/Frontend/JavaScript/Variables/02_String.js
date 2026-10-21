// concatenation
const name = "Taniya"
const repoCount = 50

console.log(`Hello my name is ${name} and my repo count is ${repoCount}`);//String Interpolation - inserting variables or expressions directly inside a string.

const gameName = new String('Taniya-H')
console.log(gameName[0]);
console.log(gameName.length);
console.log(gameName.toUpperCase())
console.log(gameName.charAt(2));
console.log(gameName.indexOf('t'));

const newString = gameName.substring(0,4) //new string,doesn't include the last index, it will go till 3rd index. It will not change the original string.
console.log(newString);

const anotherstring = gameName.slice(-8, 4)//Can assign negative values to it..Goes till the end of the string.
console.log(anotherstring)

const newstr ="   Taniya   "
console.log(newstr.trim());

const url ="https://taniya.com/taniya%20halder"
console.log(url.replace('%20','-'));

console.log(url.includes('hitesh'));

console.log(gameName.split("-"));//array

//see mdn to see many string methods

