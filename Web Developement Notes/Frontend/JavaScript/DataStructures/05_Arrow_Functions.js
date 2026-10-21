const user = {
    username: "Taniya",
    price: 999,

    welcomeMessage: function(){
        console.log(`${this.username}, welcome to website.`);
        console.log(this);
        
    }

}

user.welcomeMessage()
user.username = "Sam"
user.welcomeMessage()

console.log(this);

// Node prints {} because:
// Node wraps each file as a module
// top-level this = module.exports
// module.exports starts as empty object

// Browser prints window because:
// global scope belongs to window object

// function chai(){
//     let username = "Taniya"
//     console.log(this.username);// returns undefined because this can only be used for objects 
// }


// const chai = function (){
//     let username = "Taniya"
//     console.log(this.username);//Returns undefined because this can only be used for object 
// }
// // ARROW FUNCTION 
// const chai = () => {
//     let username = "Taniya"
//     console.log(this.username);// Returns undefined
// }
// chai()

const addTwo = (num1, num2)=> {
    return num1 + num2
}

const add_two = (num1, num2)=> (num1 + num2) // If curly braces are used, use return else if () are used then theres no use of return 
console.log(addTwo(3, 4));
console.log(add_two(3, 4));

// Always wrap the object in parentheses when returning it from an arrow function









