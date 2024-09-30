// Dates
let myDate = new Date()
console.log(myDate.toISOString())
console.log(myDate.toDateString())
console.log(myDate.toLocaleString())

let myCreatedDate = new Date(2023 ,0,23)
console.log(myCreatedDate.toLocaleString())

let myTimeStamp = Date.now()
console.log(myTimeStamp);
console.log(myCreatedDate.getTime()) 

let newDate = new Date()
console.log(newDate);
console.log(newDate.getMonth())
console.log(newDate.getDay())

newDate.toLocaleString('default',{
    weekday: "long"
})
console.log(toLocaleString)