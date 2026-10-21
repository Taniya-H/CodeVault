// for loops 
for (let index = 0; index < 10; index++) {
    const element = index;
    console.log(element);
    if (element == 5){
        console.log("5 is best number.");
    }
    console.log(element);    
}
let array = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for (let i = 1; i <= 10; i++) {
    console.log(`Outer loop value : ${i}`);
    for (let j = 1; j <= 10; j++) {
        console.log(`Inner loop value : ${j} and outer loop value is ${i}`);
        console.log(`${i} X ${j} = ${i*j}`);
    }
}

let myArray = ["flash", "batman", "superman"]

for (let index = 0; index < myArray.length; index++) {
    const element = myArray[index];
    console.log(element);
}

// Break And Continue 

for (let index = 1; index <= 20; index++) {
    if (index == 5){
        console.log(`Detected 5`);
        continue
    }
    console.log(`Value of i is ${index}. `); 

}
// While loop
// while (index <= 10) {
//     console.log(`Value of index is ${index}`);
//     index = index + 2
// }

let arr = 0 
while (arr < myArray.length){
    console.log(`Value is ${myArray[arr]}`);
    arr = arr + 1
}

//Do - While Loop
score = 1 
do {
    console.log(`Score is ${score}`);
    score++ ; 
} while (score <= 10);















