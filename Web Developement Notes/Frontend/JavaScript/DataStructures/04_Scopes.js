let a = 10 
const b = 20 
var c = 30 

// console.log(a);
// console.log(b);
// console.log(c);

//{} -- scope 

if (true) {
    let a = 10
    const b = 20
    var c = 30 //It will print c outside the block scope even if its not returned 
}

function one(){
    const username = "Taniya"
    function two(){
        const website = "youtube"
        console.log(username);
    }
    // console.log(website); //Gives error because the website is declared inside the inner block scope.
    two()// Gets executed after the the one() 
}
one()

// A closure in JavaScript is when a function remembers variables from its outer scope even after the outer function has finished executing.

if (true){
    const username = "Taniya"
    if (username==="Taniya"){
        const website = " youtube"
        // console.log(username + website);
    }
}

//++++++++++++++++++++++++++++++ interesting ++++++++++++++++++++++++++++++++++++++++++++

console.log(addone(5))
function addone(num){
    return num + 1
}

//Expressions 
//console.log(addTwo(5));// Will throw as error because addTwo is a function expression stored in a const, and const does not let you use it before it is defined.
const addTwo = function(num){
    return num + 2 
}

// Hoisting - Declarations are moved to the top of their scope before code execution.


















