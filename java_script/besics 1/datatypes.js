// primitive

// 7 types : string,Number,Boolearn,null,undefined,Symbol,BigInt
const score = 100 
const scoreValue =100.3

const isLoggedIn = false
 const outsideTemp =null

 const id = Symbol('123')
 const anotherId = Symbol('123')
 //console.log (id ===anotherId)

// Reference (non primitive)
//Array,Object,Functions
const heros = ["shaktiman","naagraj","doga"]
let myObj ={
    name:"Manish",
    age:22,
}
//console.log(myObj )
//++++++++++++++++++++++++++++++++++++



//stack (primitive),  Heap( Non-primitive)
let myYotubename = "ty"
let anothername = "uy"
anothername ="iu"
//console.log(myYotubename)
//console.log(anothername);


let userOne={
    email: "user@google.com",
    upi: "user@ybl"
}

let userTwo = userOne

userTwo.email ="hitesh@google.com"

console.log(userOne.email);
console.log(userTwo.email)