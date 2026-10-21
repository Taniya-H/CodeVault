//*********************** ARRAY SPECIFIC LOOPS  *******************************************

// for of 

//Objects in arrays = [{},{},{},{}]

const arr = [1,2,3,4,5]

for (const num of arr){
    // console.log(num);
}

const grettings = "Hello World"
for (const greet of grettings){
    // console.log(`Each char is ${greet}`);
}

// Maps - Holds Key - Value Pairs, gives unique values and also reserves the order 
const map = new Map()
map.set('IN', "India")
map.set('USA', "United States Of America")
map.set('Fr', "France")

// console.log(map);

for (const key of map){
    // console.log(key);
}

for (const [key, value] of map) {
    console.log(key, ':-' , value);
} // this method is not applicable for objects 

for (const key in map) {
    console.log(key); // wont return anything as map isnt iterable 
}




























































































