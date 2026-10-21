// singleton - A singleton is an object/class that can have only one instance in the entire program.
//object.create - creates a new object using another object as its prototype.
// A constructor is a special function used to create and initialize objects.
// object literals

const mySym = Symbol("key1")

const jsuser = {
    name: "Taniya",// considers name as string 
    "full name": "Taniya Halder",//couldnt be accesed by dot 
    [mySym]: "mykey1",//Always use square brackets to define mySym in object & cannot be used . for printing
    age: 18,
    location: "Jaipur",
    email: "nljk@jlbjk.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

// console.log(jsuser.email);
// console.log(jsuser["email"]);// More Preffered
// console.log(jsuser["full name"]);
// console.log(jsuser[mySym]);

jsuser.email = "taniya@gmail.com"
// Object.freeze(jsuser)// turns into read only and dosent lets to change the value 

// functions can be treated as variables
jsuser.greeting = function(){
    // console.log(`Hello user ${this.name}`);// this is used when the same object is referenced
}

// console.log(jsuser.greeting());// If the bracket is not used then it returns [Function(anonymous)]

// ways to declare objects
// const tinderUser = new Object() //Singleton 
const tinderUser= {} // Non- Singleton

tinderUser.id = "123abc"// dont declare the variable by using const, let...
tinderUser.name = "Sammy"
tinderUser.isLoggedIn = false 

// console.log(tinderUser);

const regularUser = {
    fullname: {
        userfullname: {
            firstname: "Taniya",
            lastname: "Halder"
        }
    }
}

//console.log(regularUser.fullname.userfullname.firstname);

const obj1 = {1:"a", 2:"b"}
const obj2 = {3: "a", 2: "b"}

const obj3 = {obj1 ,obj2}
// console.log(obj3);// Returns nested object

const obj4 = Object.assign({}, obj1, obj2) // Combines two objects to a new object. {} Because it prevents changing the original objects.
// console.log(obj4);

const obj5 = {...obj1,...obj2}
// console.log(obj5);

//Database retrieval example 
const users = [
    {
        id : 1,
        email: "h@gmail.com"
    },
    {
        id : 1,
        email: "h@gmail.com"
    },
    {
        id : 1,
        email: "h@gmail.com"
    }
]

users[1].email

// console.log(tinderUser);
// console.log(Object.keys(tinderUser));// returns the array of the keys 
// console.log(Object.values(tinderUser));// returns the array of the values 
// console.log(Object.entries(tinderUser));// return the array of arrays of keys and values like items 

// console.log(tinderUser.hasOwnProperty('isLoggedIn'));// Checks if the object has any key named isLoggedIn

const course = {
    coursename : "Javascript",
    price: "999",
    courseInstructor: "Hitesh"
}

// course.courseInstructor 
const {courseInstructor: instructor} = course // De-structuring 

// console.log(courseInstructor);
console.log(instructor);

//JSON(Javascript Object Notation)
// {
//     "name": "Hitesh",
//     "coursename":"JavaScript",
//     "price": "free"
// }







