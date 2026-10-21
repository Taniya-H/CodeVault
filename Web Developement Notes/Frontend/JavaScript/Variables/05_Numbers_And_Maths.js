const score=400
console.log(score);

const balance = new Number(100);//Number Object-Object wrapper 
console.log(balance);

console.log(balance.toString());
console.log(balance.toFixed(2));//Formats number to fixed decimal places.

const othernum = 123.89666
console.log(othernum.toPrecision(4));

const hundreds = 10000000000
console.log(hundreds.toLocaleString('en-IN'));

// +++++++++++++++++++++++ Maths +++++++++++++++++++++++++++++

console.log(Math);
console.log(Math.abs(-4));
console.log(Math.round(2.55));
console.log(Math.ceil(2.55));
console.log(Math.floor(2.22));
console.log(Math.min(2, 4 , 3));
console.log(Math.max(2, 3 ,4));

console.log((Math.random()*10)+1);

const min = 10
const max = 20


console.log(Math.floor(Math.random()* (max-min +1) +min));

