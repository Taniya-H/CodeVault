// Promise Object - The promise object represents the eventual completion or failure of a asyncronous operation and its resulting value 

// A promise is in one of the three states : 
// 1. pending : initial state. niether fulfilled or rejected 
// 2. fulfilled: meaning that the operation was completed successfully 
// 3. rejected: meaning that the operation failed 

// Essentially, a promise is returned object to which you attach callbacks, instead of passing callbacks into a function. 

// const promiseOne = new Promise(function(resolve, reject){
//     //Do a async task
//     // DB calls, cryptography, network
//     setTimeout(function () {
//         console.log('Async task is complete');
//         resolve() // Completely connects to then
//     },1000)
// })

// promiseOne.then(function(){ //Task connectes to resolve 
//     console.log("Promise Consumed");
// })

// new Promise(function(resolve, reject){
//     setTimeout(function(){
//         console.log("Async task 2");
//         resolve()
//     },1000)
// }).then(function(){
//     console.log("Async 2 resolved");
// })

// const promiseThree = new Promise(function (resolve, reject) {
//     setTimeout(function(){
//         resolve({username:"Chai", email:"chai@example.com"})
//     }, 1000)
// })

// promiseThree.then(function (user) {
//     console.log(user);
// })

const promiseFour = new Promise(function (resolve, reject) {
    setTimeout(function(){
        let error = false
        if (!error){
            resolve({username: "Taniya", password:"123"})
        }else{
            reject('ERROR: Something went wrong')
        }
    }, 1000)
})

//Wrong way
// const username = promiseFour.then((user) => {
//     console.log(user);
//     return user.username
// })
// console.log(username);

// Correct way (Channing)
// const username = promiseFour.then((user) => {
//     console.log(user);
//     return user.username
// }).then((username) => {
//     console.log(username);
// }).catch(function (error) { // for error
//     console.log(error);    
// }).finally(() => {
//     console.log("The promise is either resolved or rejected");
// })

const promiseFive = new Promise(function (resolve, reject) {
    setTimeout(function () {
        let error = true
        if (!error){
            resolve({username: "javascript", password:"123"})
        }else{
            reject('ERROR: JS went wrong')
        }
    }, 1000)
})

async function consumePromiseFive(){
    try {
        const response = await promiseFive
        console.log(response);    
    } catch (error) {
        console.log(error);
    }
}

consumePromiseFive()

// async function getAllUser() {
//     try {
//         const response = await fetch('https://jsonplaceholder.typicode.com/users')
//         const data = await response.json()
//         console.log(data);
//     } catch (error) {
//         console.log("E: ", error);
//     }
// }

// getAllUser()

fetch('https://jsonplaceholder.typicode.com/users')
.then((response) => {
  return response.json  
})
.then((data) => {
  console.log(data);   
})
.catch((error) => console.log(error);
)

// A fetch() promise only rejects when a network error is encountered(which is usually when theres a permissions issue or similar). A fetch() promise does not reject on the HTTP error(404, etc). Instead, a then() handler must check the Response.ok and/or Response.status properties