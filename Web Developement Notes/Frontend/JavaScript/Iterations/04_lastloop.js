// const coding = ["js", "ruby", "java", "python", "cpp"]

// // foreach doesnt returns any values 

// const values = coding.forEach((item) => {
//     console.log(item);
//     return item 
// })

// console.log(values);// returns undefined because forEach dosent returns any values 
// const myNums = [1,2,3,4,5,6,7,8,9,10]

// const newNums = myNums.filter((num) => num > 4)
// console.log(newNums);


// const newNums1 = myNums.filter( (nums) => {
//     return nums > 4 // always use return when using block scope 
// } )

// console.log(newNums1);

// const newNumsz = []
// myNums.forEach((num) => {
//     if (num > 4){
//         newNumsz.push(num)
//     }
// })

// console.log(newNumsz);

// const books = [
//     { title: 'Book One', genre: 'Fiction', publish: 1981,
//     edition: 2004 },

//     { title: 'Book Two', genre: 'Non-Fiction', publish: 1992,
//     edition: 2008 },

//     { title: 'Book Three', genre: 'History', publish: 1999,
//     edition: 2007 },

//     { title: 'Book Four', genre: 'Non-Fiction', publish: 1989,
//     edition: 2010 },

//     { title: 'Book Five', genre: 'Science', publish: 2009,
//     edition: 2014 },

//     { title: 'Book Six', genre: 'Fiction', publish: 1987,
//     edition: 2010 },

//     { title: 'Book Seven', genre: 'History', publish: 1986,
//     edition: 1996 },

//     { title: 'Book Eight', genre: 'Science', publish: 2011,
//     edition: 2016 },

//     { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981,
//     edition: 1989 }
// ]

// const userBooks = books.filter((book) => book.genre == 'History')
// console.log(userBooks);


// const userBookReq = books.filter((book) => {return book.publish >2000 && book.genre=='History' })
// console.log(userBookReq);

// // map 
// const myNumbersa = [1,2,3,4,5,6,7,8,9,10]
// const newNumsw = myNumbersa.map((num) => {return num + 10})
// console.log(newNumsw);

// map() Function in JavaScript
// map() is an array method that:
// 👉 takes every element of an array
// 👉 transforms it
// 👉 returns a NEW array

// map() → Changes Values
// It transforms every element and returns a new array.

// filter() → Selects Values
// It keeps only elements that satisfy a condition.

// CHAINING 
//YOU CAN USE TWO-THREE METHODS TOGHTHER USING CHAINING 

// const myNumbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// const newnums = myNumbers
//                 .map((num) => num * 10)
//                 .map((num) => num + 1)
//                 .filter((num) => num >= 40 )

// console.log(newnums);

// // REDUCE

// const myNums = [1,2,3]

// const myTotal = myNums.reduce(function (acc, currval){
//     console.log(`acc: ${acc} and currval: ${currval}`);
//     return acc + currval 
// },0 )

// console.log(myTotal);

// const myTotal1 = myNums.reduce((acc, curr) => acc+curr, 0)
// console.log(myTotal1);

const shoppingCart = [
    {
        itemName: "JS Course",
        price: 2999
    },
    {
        itemName: "PY Course",
        price: 999
    },
    {
        itemName: "MOBILE DEV Course",
        price: 5999
    },
    {
        itemName: "Data Science Course",
        price: 12999
    }
]

const priceToPay = shoppingCart.reduce((acc, item) => acc+item.price, 0)
console.log(priceToPay);





















