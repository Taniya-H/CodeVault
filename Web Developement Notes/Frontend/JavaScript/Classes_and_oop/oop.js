// Object Literal

const user = {
    username: "hitesh",
    loginCount: 8,
    signedIn: true,

    getUserDetails: function(){
        // console.log("Got user details from database");
        console.log(`Username: ${this.username}`);
        console.log(this);
    }
}

console.log(user.username);
console.log(user.getUserDetails());

// Constructor Function( Creates new instances, references to itself )
function User(usernamee, logincount, isLoggedIn) {
    this.username = usernamee
    this.loginCount = logincount
    this.isLoggedIn = isLoggedIn

    this.greeting = function(){
        console.log(`Welcome ${this.username}`);
        
    }

    return this // this is defined implicitly
}

const userOne =new User("hitesh", 12, true)
const userTwo =new User("Taniya",12, true) // overwrites the prev one if new isnt used
console.log(userOne);

// When the `new` keyword is used:
// 1. A new empty object (instance) is created.
// 2. `this` is bound to that new object.
// 3. The constructor function executes and adds properties/methods to `this`.
// 4. The new object is linked to the constructor's prototype.
// 5. The newly created object is returned automatically (unless another object is explicitly returned).


// prototypal behavior
// JS default behavior is prototypal behavior 
// function references a object and can also act like a object