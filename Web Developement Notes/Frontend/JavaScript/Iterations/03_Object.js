const myObject = {
    js : 'javascript' ,
    cpp: 'C++',
    rb: 'ruby',
    swift: "swift by apple"
}

// for in loop 
for (const key in myObject) {
    // console.log(`${key} shortchut is for ${myObject[key]}`);    
}

// the keys for arrays is the index number for the key

const programming = ["js", "rb", "py", "java", "cpp"]

for (const key in programming) {
    // console.log(key);// prints the index numbers for the arrays 
    // console.log(programming[key]);
    
}


// For each loop

// foreach includes callback functions and callback functions have no names 
const coding = ["js", "ruby", "java", "python", "cpp"]
coding.forEach(function(item){
    console.log(item);
})

coding.forEach((item) => {
    console.log(item);
})

function printMe(item) {
    console.log(item);
}
coding.forEach(printMe)

coding.forEach( (item, index, arr) => {
    console.log(item, index, arr);
})


const myCoding = [
    {
        languageName: "javascript",
        languageFileName: "js"
    },
    {
        languageName: "java",
        languageFileName: "jv"
    },
    {
        languageName: "python",
        languageFileName: "py"
    }

]


myCoding.forEach( (item) => {
    console.log(item.languageName);
})




