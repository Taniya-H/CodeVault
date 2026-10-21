function sayMyName(){
    // console.log("T");
    // console.log("A");
    // console.log("N");
    // console.log("I");
    // console.log("Y");
    // console.log("A");
}

// sayMyName()


// function addTwoNumbers(number1, number2){ //parameters
//     console.log(number1+number2);
// }
// const result = addTwoNumbers(3, 4)//arguments
// console.log("Result: ", result);// Gives undefined 


function addTwoNumbers(number1, number2){ 
    let result = number1 + number2
    // return result
    // console.log("Hitesh");//will never be executed due to default setting in function. will bw executed only if it is above return.
    return number1 + number2
}
// const result = addTwoNumbers(3, 4)//arguments
// console.log("Result: ", result);// Gives undefined 

function loginUserMessage(username = "Sam"){
    return (`${username} just logged in`)
}

console.log(loginUserMessage("Taniya"));
console.log(loginUserMessage());//returns undefined coz nothing is passed .

function calculateCartPrice(...num1){ //Rest Operator 
    return num1

}

console.log(calculateCartPrice(200, 400, 500));

function calcualteCart(val1, val2, ...num1){
    return num1
}
console.log(calcualteCart(200, 400, 500, 2000));

const user = {
    username: "JavaScript Course",
    price: 199
}

function handleObject(anyObject){
    console.log(`Username is $(anyObject.username) and price is $(anyObject.price)`)
}

handleObject(user)
handleObject({
    username: "JavaScript Course",
    price: 199
})

const myNewArray = [200, 400, 100, 600]
function returnSecondValue(getArray){
    return getArray[1]
}

// console.log(returnSecondValue(myNewArray));
// console.log(returnSecondValue([200, 400, 500, 1000]));


// A Higher-Order Function (HOF) is a function that either:
// Takes another function as an argument, OR
// Returns a function