// if statement 
const isUserLoggedIn = true 
const temperature = 41

if (temperature > 50){ // false dosent gets executed 
    // console.log("Tempurature is greater than 50");
} else {
    // console.log("Tempurature less than 50");
}
// console.log("Executed.");

const balance = 1000

if (balance > 500) console.log("test"), console.log("test2");// NOT A GOOD PRACTICE 

if (balance < 500){
    console.log("less than 500");
} else if (balance < 750){
    console.log("less than 750");
} else if (balance < 900){
    console.log("less than 900");
} else {
    console.log("less than 12000");
}

const userLoggedIn = true 
const debitCard = true 
const userLoggedInFromGoogle = false 
const loggedInFromEmail = true 

// Logic Operators = && -> and , || -> or 

if (userLoggedIn && debitCard){
    console.log("Allow to buy course");
}

if (loggedInFromEmail || userLoggedInFromGoogle){
    console.log("User Logged In");
}


// ********************SWITCH*******************
//***********SYNTAX***************
// switch (key) {
//     case value:
        
//         break;

//     default:
//         break;
// }

const month = 3

switch (month) {
    case 1:
        console.log("January");
        break;
    case 2:
        console.log("February");
        break;
    case 3:
        console.log("March");
        break;
    case 4:
        console.log("April");
        break; // If break was missing , then it would check all the remaining cases except default 

    default:
        console.log("Default Case Match. ");
        
        break;
}




